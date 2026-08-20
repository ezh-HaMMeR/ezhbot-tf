# ezHBot v1.0b

**Headless ezQuake Client** — облегчённая headless-модификация клиента **ezQuake 3.6.9** для работы без графической и звуковой подсистемы.

> ezHBot предназначен прежде всего для серверных окружений, VPS и контейнеров, где не требуются окно игры, видеокарта, X11/Wayland и звуковые драйверы.

## Возможности

- Просмотр демозаписей с записью полного `qconsole.log`.
- Автоматизированные задачи и мониторинг QuakeWorld-серверов.
- Работа на VPS и в контейнерах без GUI.
- Запуск без X11/Wayland, видеокарты и звуковых драйверов.
- Использование в качестве лёгкого headless-клиента ezQuake.

## Техническая реализация

Оригинальный ezQuake тесно связан с графической подсистемой. В ezHBot выполнены изменения, позволяющие запускать клиент полностью без рендеринга:

- ✅ полностью удалён графический рендерер (`RENDERER_NULL`);
- ✅ заглушены вызовы renderer;
- ✅ отключена генерация Lightmaps;
- ✅ реализована подмена отсутствующих моделей;
- ✅ исключены падения при запросе кастомных моделей.

## Системные требования

### Операционная система

- Ubuntu 20.04+
- Debian 11+
- CentOS / RHEL 8+

### Архитектура

- `x86_64`

### Зависимости

- `libcurl4`
- `glibc`

## Структура каталогов

```text
/path/to/ezhbot/
├── ezquake-linux-x86_64
├── id1/
│   ├── pak0.pak
│   └── pak1.pak
├── fortress/
├── qw/
│   ├── autoexec.cfg
│   └── qconsole.log
└── qwproxy/
    ├── qwfwd
    └── qwfwd.cfg
```

## Настройка бота

Основные параметры задаются в файле `qw/autoexec.cfg`:

```cfg
name "HeadlessBot"
spectator 1
cl_net_clientport 0

setinfo prx <PROXY_IP>:<PROXY_PORT>
connect <SERVER_IP>:<SERVER_PORT>
```

## Сборка из исходников

Каталог сборки оригинального дерева ezQuake 3.6.9:

```bash
cd /home/qwtfnet/client/ezquake-source-3.6.9/build
```

Для текущей версии **ezHBot TF** используется каталог:

```bash
cd /home/qwtfnet/client/ezhbot_tf/build
```

> [!IMPORTANT]
> Перед очисткой обязательно убедитесь, что находитесь именно в каталоге `build`. Команда `rm -rf *` удаляет всё содержимое текущего каталога.

Полная пересборка:

```bash
cd /home/qwtfnet/client/ezhbot_tf/build

# Проверяем текущий каталог перед удалением файлов
pwd

# Удаляем всё, что нагенерировал предыдущий билд,
# чтобы не осталось битых или несовместимых объектных файлов
rm -rf *

# Конфигурируем проект заново без графических рендереров
cmake .. \
  -DRENDERER_MODERN_OPENGL=OFF \
  -DRENDERER_CLASSIC_OPENGL=OFF

# Собираем СТРОГО в один поток — без --parallel и без -j
cmake --build .
```

> [!WARNING]
> Для ezHBot сборку следует выполнять **строго в один поток**. Не используйте `--parallel`, `-j` или другие параметры параллельной сборки.

## Запуск

### qwfwd

```bash
cd /path/to/ezhbot/qwproxy/
./qwfwd -ip <SERVER_IP> -port <SERVER_PORT> +exec qwfwd.cfg &
```

### ezHBot

```bash
cd /path/to/ezhbot/
./ezquake-linux-x86_64 -nolan -nomouse -nosound -condebug &
```

Параметр `-condebug` включает запись консольного вывода в `qw/qconsole.log`.

## Частые проблемы

### Бот не подключается к серверу

Проверьте настройки `qw/autoexec.cfg` и убедитесь, что при запуске не используется параметр `-noautoexec`.

### `status=203/EXEC`

Проверьте права на исполнение бинарных файлов:

```bash
chmod +x ezquake-linux-x86_64
chmod +x qwfwd
```

### `status=217/USER`

Указанный в конфигурации сервиса пользователь не существует в системе. Проверьте значение `User=` в соответствующем systemd unit-файле.

## Лицензия

Проект распространяется на условиях **GNU GPL v2**.

Основано на [ezQuake 3.6.9](https://ezquake.com/) и исходном коде проекта [QW-Group/ezquake-source](https://github.com/QW-Group/ezquake-source).

**Автор:** ezhHaMMer
