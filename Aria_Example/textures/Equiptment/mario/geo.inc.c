const GeoLayout mario_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, mario_Plane_mesh),
		GEO_DISPLAY_LIST(0, mario_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, mario_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, mario_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, mario_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, mario_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, mario_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, mario_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, mario_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
