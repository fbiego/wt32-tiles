// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.3
// Project name: piano_tiles

#ifndef _PIANO_TILES_UI_H
#define _PIANO_TILES_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl.h"

#include "ui_events.h"
void moveDown_Animation( lv_obj_t *TargetObject, int delay);
extern lv_obj_t *ui_startScreen;
void ui_event_startButton( lv_event_t * e);
extern lv_obj_t *ui_startButton;
extern lv_obj_t *ui_startButtonText;
void ui_event_playScreen( lv_event_t * e);
extern lv_obj_t *ui_playScreen;
void ui_event_playPanel( lv_event_t * e);
extern lv_obj_t *ui_playPanel;
void ui_event_tile1( lv_event_t * e);
extern lv_obj_t *ui_tile1;
void ui_event_tile2( lv_event_t * e);
extern lv_obj_t *ui_tile2;
void ui_event_tile3( lv_event_t * e);
extern lv_obj_t *ui_tile3;
void ui_event_tile4( lv_event_t * e);
extern lv_obj_t *ui_tile4;
extern lv_obj_t *ui_scoreText;
extern lv_obj_t *ui_playHeader;
void ui_event_settingsButton( lv_event_t * e);
extern lv_obj_t *ui_settingsButton;
extern lv_obj_t *ui_playHeaderText;
extern lv_obj_t *ui_gameOverPanel;
extern lv_obj_t *ui_gameOverDialog;
extern lv_obj_t *ui_gameOverLabel;
extern lv_obj_t *ui_gameOverScore;
void ui_event_restartButton( lv_event_t * e);
extern lv_obj_t *ui_restartButton;
extern lv_obj_t *ui_restartButtonText;
void ui_event_exitButton( lv_event_t * e);
extern lv_obj_t *ui_exitButton;
extern lv_obj_t *ui_exitButtonText;
extern lv_obj_t *ui_settingsScreen;
extern lv_obj_t *ui_settingsHeader;
void ui_event_closeSettings( lv_event_t * e);
extern lv_obj_t *ui_closeSettings;
extern lv_obj_t *ui_settingsHeaderText;
extern lv_obj_t *ui_settingsPanel;
extern lv_obj_t *ui_freeModePanel;
extern lv_obj_t *ui_freeModeText;
extern lv_obj_t *ui_freeModeSwitch;
extern lv_obj_t *ui____initial_actions0;


LV_IMG_DECLARE( ui_img_wt32_tiles_png);   // assets/wt32_tiles.png
LV_IMG_DECLARE( ui_img_gradient_png);   // assets/gradient.png
LV_IMG_DECLARE( ui_img_settings_png);   // assets/settings.png
LV_IMG_DECLARE( ui_img_application_png);   // assets/application.png
LV_IMG_DECLARE( ui_img_1_png);   // assets/1.png
LV_IMG_DECLARE( ui_img_2_png);   // assets/2.png
LV_IMG_DECLARE( ui_img_190695247);   // assets/cancel-128.png
LV_IMG_DECLARE( ui_img_997471977);   // assets/check-128.png
LV_IMG_DECLARE( ui_img_1475871244);   // assets/flx-200.png
LV_IMG_DECLARE( ui_img_1644947644);   // assets/flx-white-200.png
LV_IMG_DECLARE( ui_img_1214273956);   // assets/rfid-128.png
LV_IMG_DECLARE( ui_img_wallpaper_1_png);   // assets/wallpaper_1.png




void ui_init(void);


#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
