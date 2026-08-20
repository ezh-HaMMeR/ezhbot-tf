#include "quakedef.h"
#include "r_local.h"

// Заглушки для всех ненайденных графических функций
void GLM_Initialise(void) {}
void GLC_Initialise(void) {}
void GLC_InitialiseSkyStates(void) {}
void GLC_PauseMatrixUpdate(void) {}
void GLC_ResumeMatrixUpdate(void) {}
void GLC_LoadModelviewMatrix(void) {}
void GLM_InitialiseAliasModelBatches(void) {}
void GLM_SDL_CreateContext(void) {}
void GLC_SDL_CreateContext(void) {}
void GLC_BloomBlend(void) {}
void GLC_InitBloomTextures(void) {}
void GLC_ClearTextureChains(void) {}
void GLM_HudDrawImages(void) {}
void GLM_HudPrepareImages(void) {}
void GLM_HudDrawCircles(void) {}
void GLM_HudPrepareCircles(void) {}
void GLM_HudDrawLines(void) {}
void GLM_HudDrawPolygons(void) {}
void GLM_HudDrawComplete(void) {}
void GLC_HudDrawImages(void) {}
void GLC_HudPrepareImages(void) {}
void GLC_HudDrawCircles(void) {}
void GLC_HudPrepareCircles(void) {}
void GLC_HudDrawLines(void) {}
void GLC_HudDrawPolygons(void) {}
void GLC_HudDrawComplete(void) {}
void GLM_ComputeLightmaps(void) {}
void GLC_OrthographicProjection(void) {}
void GLC_IdentityModelview(void) {}
void GLC_RotateModelview(void) {}
void GLC_TranslateModelview(void) {}
void GLC_IdentityProjectionView(void) {}
void GLC_PopModelviewMatrix(void) {}
void GLC_PopProjectionMatrix(void) {}
void GLC_ScaleModelview(void) {}
void GLC_Frustum(void) {}
void GLM_LoadParticleTextures(void) {}
void GLC_BloomRegisterCvars(void) {}
void GLC_EnsureVAOCreated(void) {}
void GLM_CreateAliasModelVAO(void) {}
void GLC_AllocateAliasPoseBuffer(void) {}

// Переменные-заглушки
int particletexture_array_xpos_tr = 0;
int particletexture_array_ypos_tr = 0;
int particletexture_array_index = 0;
int particletexture_array_max_s = 0;
int particletexture_array_max_t = 0;
int particletexture_array = 0;
int r_bloom = 0;
int gl_program_aliasmodels = 0;
int constants_glsl = 0;
int common_glsl = 0;
int constants_glsl_len = 0;
int common_glsl_len = 0;

// Исправленные шейдерные заглушки (тип const char *)
const char *draw_aliasmodel_vertex_glsl = "";
int draw_aliasmodel_vertex_glsl_len = 0;
const char *draw_aliasmodel_fragment_glsl = "";
int draw_aliasmodel_fragment_glsl_len = 0;
const char *draw_world_vertex_glsl = "";
int draw_world_vertex_glsl_len = 0;
const char *draw_world_fragment_glsl = "";
int draw_world_fragment_glsl_len = 0;
const char *draw_sprites_vertex_glsl = "";
int draw_sprites_vertex_glsl_len = 0;
const char *draw_sprites_fragment_glsl = "";
int draw_sprites_fragment_glsl_len = 0;
const char *hud_draw_image_vertex_glsl = "";
int hud_draw_image_vertex_glsl_len = 0;
const char *hud_draw_image_fragment_glsl = "";
int hud_draw_image_fragment_glsl_len = 0;
const char *hud_draw_circle_vertex_glsl = "";
int hud_draw_circle_vertex_glsl_len = 0;
const char *hud_draw_circle_fragment_glsl = "";
int hud_draw_circle_fragment_glsl_len = 0;
const char *post_process_screen_vertex_glsl = "";
int post_process_screen_vertex_glsl_len = 0;
const char *post_process_screen_fragment_glsl = "";
int post_process_screen_fragment_glsl_len = 0;
const char *lighting_compute_glsl = "";
int lighting_compute_glsl_len = 0;
const char *fx_world_geometry_vertex_glsl = "";
int fx_world_geometry_vertex_glsl_len = 0;
const char *fx_world_geometry_fragment_glsl = "";
int fx_world_geometry_fragment_glsl_len = 0;
const char *simple_vertex_glsl = "";
int simple_vertex_glsl_len = 0;
const char *simple_fragment_glsl = "";
int simple_fragment_glsl_len = 0;
const char *simple3d_vertex_glsl = "";
int simple3d_vertex_glsl_len = 0;
const char *simple3d_fragment_glsl = "";
int simple3d_fragment_glsl_len = 0;
const char *glc_post_process_screen_vertex_glsl = "";
int glc_post_process_screen_vertex_glsl_len = 0;
const char *glc_post_process_screen_fragment_glsl = "";
int glc_post_process_screen_fragment_glsl_len = 0;
const char *glc_sky_vertex_glsl = "";
int glc_sky_vertex_glsl_len = 0;
const char *glc_sky_fragment_glsl = "";
int glc_sky_fragment_glsl_len = 0;
const char *glc_turbsurface_vertex_glsl = "";
int glc_turbsurface_vertex_glsl_len = 0;
const char *glc_turbsurface_fragment_glsl = "";
int glc_turbsurface_fragment_glsl_len = 0;
const char *glc_caustics_vertex_glsl = "";
int glc_caustics_vertex_glsl_len = 0;
const char *glc_caustics_fragment_glsl = "";
int glc_caustics_fragment_glsl_len = 0;
const char *glc_aliasmodel_std_vertex_glsl = "";
int glc_aliasmodel_std_vertex_glsl_len = 0;
const char *glc_aliasmodel_std_fragment_glsl = "";
int glc_aliasmodel_std_fragment_glsl_len = 0;
const char *glc_aliasmodel_shell_vertex_glsl = "";
int glc_aliasmodel_shell_vertex_glsl_len = 0;
const char *glc_aliasmodel_shell_fragment_glsl = "";
int glc_aliasmodel_shell_fragment_glsl_len = 0;
const char *glc_aliasmodel_shadow_vertex_glsl = "";
int glc_aliasmodel_shadow_vertex_glsl_len = 0;
const char *glc_aliasmodel_shadow_fragment_glsl = "";
int glc_aliasmodel_shadow_fragment_glsl_len = 0;
const char *glc_world_drawflat_vertex_glsl = "";
int glc_world_drawflat_vertex_glsl_len = 0;
const char *glc_world_drawflat_fragment_glsl = "";
int glc_world_drawflat_fragment_glsl_len = 0;
const char *glc_world_textured_vertex_glsl = "";
int glc_world_textured_vertex_glsl_len = 0;
const char *glc_world_textured_fragment_glsl = "";
int glc_world_textured_fragment_glsl_len = 0;
const char *glc_world_secondpass_vertex_glsl = "";
int glc_world_secondpass_vertex_glsl_len = 0;
const char *glc_world_secondpass_fragment_glsl = "";
int glc_world_secondpass_fragment_glsl_len = 0;
const char *glc_draw_sprites_vertex_glsl = "";
int glc_draw_sprites_vertex_glsl_len = 0;
const char *glc_draw_sprites_fragment_glsl = "";
int glc_draw_sprites_fragment_glsl_len = 0;
const char *glc_hud_images_vertex_glsl = "";
int glc_hud_images_vertex_glsl_len = 0;
const char *glc_hud_images_fragment_glsl = "";
int glc_hud_images_fragment_glsl_len = 0;

// Заглушки для функций компиляции
void GLM_CompileAliasModelProgram(void) {}
void GLM_CompileDrawWorldProgram(void) {}
void GLM_CompileDrawWorldProgramAlphaTested(void) {}
void GLM_Compile3DSpriteProgram(void) {}
void GLM_CreateMultiImageProgram(void) {}
void GLM_CompileHudCircleProgram(void) {}
void GLM_CompilePostProcessProgram(void) {}
void GLM_CompileLightmapComputeProgram(void) {}
void GLM_CompileWorldGeometryProgram(void) {}
void GLM_CompileSimpleProgram(void) {}
void GLM_CompileSimple3dProgram(void) {}
void GLC_CompilePostProcessProgram(void) {}
void GLC_SkyProgramCompile(void) {}
void GLC_TurbSurfaceProgramCompile(void) {}
void GLC_CausticsProgramCompile(void) {}
void GLC_AliasModelStandardCompile(void) {}
void GLC_AliasModelShellCompile(void) {}
void GLC_AliasModelShadowCompile(void) {}
void GLC_AliasModelOutlineCompile(void) {}
void GLC_DrawflatProgramCompile(void) {}
void GLC_PreCompileWorldPrograms(void) {}
void GLC_CompileSpriteProgram(void) {}
void GLC_ProgramHudImagesCompile(void) {}
void GLM_UploadFrameConstants(void) {}
void Null_TextureLabelSet(texture_ref ref, const char *label) {}