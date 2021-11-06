// Layers
#define RM_BACK LAYER_FORCE
#define RM_SURF LAYER_OPAQUE
#define RM_DECAL LAYER_OPAQUE_DECAL
#define RM_INTER LAYER_OPAQUE_INTER
#define RM_SPRITE LAYER_ALPHA
#define RM_XSURF LAYER_TRANSPARENT
#define RM_XDECAL LAYER_TRANSPARENT_DECAL
#define RM_XINTER LAYER_TRANSPARENT_INTER
#define RM_SOFT_SPRITE RM_SPRITE

// Hms data macros
#define	_msU32(dat) ((unsigned long)(dat*65536.0f))
#define hmsBegin() GEO_OPEN_NODE(),
#define hmsEnd() GEO_CLOSE_NODE(),
#define hmsSelect(code, proc) GEO_SWITCH_CASE(code, proc),
#define hmsGfx(x,y) GEO_DISPLAY_LIST(x,y),
#define hmsReturn() GEO_RETURN(),
#define hmsJoint(mode,gfx,px,py,pz) GEO_ANIMATED_PART(mode,px,py,pz,gfx),
#define hmsShadow(size,level,flag) GEO_SHADOW(flag,level,size),
#define hmsScale(f) GEO_SCALE(0, _msU32(f)),
#define hmsCall(r) GEO_BRANCH(1, r),
#define hmsExit() GEO_END(),
#define hmsLOD(near,far) GEO_RENDER_RANGE(near,far),
#define hmsCProg(code, proc) GEO_ASM(code, proc),
#define hmsRotate(ax,ay,az) GEO_ROTATION_NODE(0, ax,ay,az),
#define hmsGroup() GEO_NODE_START(),
#define hmsSucker(x, y, z, w, dl) GEO_HELD_OBJECT(x, y, z, w, dl),
#define hmsHeader(x) GEO_CULLING_RADIUS(x),
#define hmsBboard(px,py,pz) GEO_BILLBOARD_WITH_PARAMS(0,px,py,pz),
#define Hierarchy const GeoLayout

// Mario geo node scripts
#define MarioProc1 geo_move_mario_part_from_parent
#define CtrlMarioRenderMode CtrlMarioSkin
#define CtrlMarioHand geo_switch_mario_hand
#define CtrlMarioTaking geo_switch_mario_hand_grab_pos
#define CtrlMarioEye geo_switch_mario_eyes
#define CtrlMarioWaist geo_mario_tilt_torso
#define CtrlMarioHead geo_mario_head_rotation
#define CtrlMarioCap geo_switch_mario_cap_on_off
#define CtrlMarioWing geo_mario_rotate_wing_cap_wings
#define CtrlHandScale geo_mario_hand_foot_scaler
#define CtrlMarioSkin geo_switch_mario_cap_effect
#define CtrlMarioLOD geo_switch_mario_stand_run
#define CtrlMarioGeoMode geo_mirror_mario_backface_culling
#define CtrlMarioAlpha geo_mirror_mario_set_alpha

// Other geo node scripts
#define ControlShapeAnime geo_switch_anim_state
#define CtrlPingEye geo_switch_tuxie_mother_eyes
#define KopaProc1 geo_update_body_rot_from_parent
