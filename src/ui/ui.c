// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.3
// Project name: piano_tiles

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void moveDown_Animation(lv_obj_t *TargetObject, int delay);
lv_obj_t *ui_startScreen;
void ui_event_startButton(lv_event_t *e);
lv_obj_t *ui_startButton;
lv_obj_t *ui_startButtonText;
void ui_event_playScreen(lv_event_t *e);
lv_obj_t *ui_playScreen;
void ui_event_playPanel(lv_event_t *e);
lv_obj_t *ui_playPanel;
lv_obj_t *ui_tile1;
lv_obj_t *ui_tile2;
lv_obj_t *ui_tile3;
lv_obj_t *ui_tile4;
lv_obj_t *ui_scoreText;
lv_obj_t *ui_playHeader;
void ui_event_settingsButton(lv_event_t *e);
lv_obj_t *ui_settingsButton;
lv_obj_t *ui_playHeaderText;
lv_obj_t *ui_gameOverPanel;
lv_obj_t *ui_gameOverDialog;
lv_obj_t *ui_gameOverLabel;
lv_obj_t *ui_gameOverScore;
void ui_event_restartButton(lv_event_t *e);
lv_obj_t *ui_restartButton;
lv_obj_t *ui_restartButtonText;
void ui_event_exitButton(lv_event_t *e);
lv_obj_t *ui_exitButton;
lv_obj_t *ui_exitButtonText;
lv_obj_t *ui_settingsScreen;
lv_obj_t *ui_settingsHeader;
void ui_event_closeSettings(lv_event_t *e);
lv_obj_t *ui_closeSettings;
lv_obj_t *ui_settingsHeaderText;
lv_obj_t *ui_settingsPanel;
lv_obj_t *ui_freeModePanel;
lv_obj_t *ui_freeModeText;
lv_obj_t *ui_freeModeSwitch;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_[2] = {&ui_img_1_png, &ui_img_2_png};
const lv_img_dsc_t *ui_imgset_42262729[1] = {&ui_img_190695247};
const lv_img_dsc_t *ui_imgset_1440576951[1] = {&ui_img_997471977};
const lv_img_dsc_t *ui_imgset_98136657[1] = {&ui_img_1475871244};
const lv_img_dsc_t *ui_imgset_612449719[1] = {&ui_img_1644947644};
const lv_img_dsc_t *ui_imgset_1897438134[1] = {&ui_img_1214273956};
const lv_img_dsc_t *ui_imgset_wallpaper_[1] = {&ui_img_wallpaper_1_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 1
#error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void moveDown_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->imgset = ui_imgset_;
    PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_) / (sizeof(lv_img_dsc_t *));
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 2000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -100, 500);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
}

///////////////////// FUNCTIONS ////////////////////
void ui_event_startButton(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_playScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_playScreen(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        moveDown_Animation(ui_tile1, 0);
        moveDown_Animation(ui_tile2, 500);
        moveDown_Animation(ui_tile3, 1000);
        moveDown_Animation(ui_tile4, 1500);
    }
}
void ui_event_playPanel(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_gameOverPanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_settingsButton(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_settingsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_restartButton(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_gameOverPanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_exitButton(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_gameOverPanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_screen_change(ui_startScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_closeSettings(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_playScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_startScreen_screen_init(void)
{
    ui_startScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_startScreen, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_img_src(ui_startScreen, &ui_img_wt32_tiles_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_startButton = lv_btn_create(ui_startScreen);
    lv_obj_set_width(ui_startButton, 100);
    lv_obj_set_height(ui_startButton, 50);
    lv_obj_set_x(ui_startButton, 0);
    lv_obj_set_y(ui_startButton, 142);
    lv_obj_set_align(ui_startButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_startButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_startButton, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_startButtonText = lv_label_create(ui_startButton);
    lv_obj_set_width(ui_startButtonText, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_startButtonText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_startButtonText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_startButtonText, "Start");
    lv_obj_set_style_text_font(ui_startButtonText, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_startButton, ui_event_startButton, LV_EVENT_ALL, NULL);
}
void ui_playScreen_screen_init(void)
{
    ui_playScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_playScreen, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_img_src(ui_playScreen, &ui_img_gradient_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_playPanel = lv_obj_create(ui_playScreen);
    lv_obj_set_width(ui_playPanel, 320);
    lv_obj_set_height(ui_playPanel, 430);
    lv_obj_set_x(ui_playPanel, 0);
    lv_obj_set_y(ui_playPanel, 50);
    lv_obj_set_align(ui_playPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_playPanel, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_playPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_playPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_playPanel, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_playPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_tile1 = lv_btn_create(ui_playScreen);
    lv_obj_set_width(ui_tile1, 60);
    lv_obj_set_height(ui_tile1, 150);
    lv_obj_set_x(ui_tile1, -120);
    lv_obj_set_y(ui_tile1, -150);
    lv_obj_set_align(ui_tile1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_tile1, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_tile1, LV_OBJ_FLAG_SCROLLABLE);                            /// Flags

    ui_tile2 = lv_btn_create(ui_playScreen);
    lv_obj_set_width(ui_tile2, 60);
    lv_obj_set_height(ui_tile2, 150);
    lv_obj_set_x(ui_tile2, -40);
    lv_obj_set_y(ui_tile2, -250);
    lv_obj_set_align(ui_tile2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_tile2, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_tile2, LV_OBJ_FLAG_SCROLLABLE);                            /// Flags

    ui_tile3 = lv_btn_create(ui_playScreen);
    lv_obj_set_width(ui_tile3, 60);
    lv_obj_set_height(ui_tile3, 150);
    lv_obj_set_x(ui_tile3, 40);
    lv_obj_set_y(ui_tile3, -240);
    lv_obj_set_align(ui_tile3, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_tile3, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_tile3, LV_OBJ_FLAG_SCROLLABLE);                            /// Flags

    ui_tile4 = lv_btn_create(ui_playScreen);
    lv_obj_set_width(ui_tile4, 60);
    lv_obj_set_height(ui_tile4, 150);
    lv_obj_set_x(ui_tile4, 120);
    lv_obj_set_y(ui_tile4, -250);
    lv_obj_set_align(ui_tile4, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_tile4, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_tile4, LV_OBJ_FLAG_SCROLLABLE);                            /// Flags

    ui_scoreText = lv_label_create(ui_playScreen);
    lv_obj_set_width(ui_scoreText, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_scoreText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_scoreText, 1);
    lv_obj_set_y(ui_scoreText, 78);
    lv_obj_set_align(ui_scoreText, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_scoreText, "104");
    lv_obj_set_style_text_align(ui_scoreText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_scoreText, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_playHeader = lv_obj_create(ui_playScreen);
    lv_obj_set_width(ui_playHeader, 320);
    lv_obj_set_height(ui_playHeader, 50);
    lv_obj_set_align(ui_playHeader, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_playHeader, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_playHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_playHeader, lv_color_hex(0x100031), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_playHeader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_playHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingsButton = lv_img_create(ui_playHeader);
    lv_img_set_src(ui_settingsButton, &ui_img_settings_png);
    lv_obj_set_width(ui_settingsButton, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settingsButton, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_settingsButton, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_settingsButton, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_settingsButton, LV_OBJ_FLAG_SCROLLABLE);                        /// Flags

    ui_playHeaderText = lv_label_create(ui_playHeader);
    lv_obj_set_width(ui_playHeaderText, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_playHeaderText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_playHeaderText, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_playHeaderText, "WT32 Tiles");
    lv_obj_set_style_text_font(ui_playHeaderText, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gameOverPanel = lv_obj_create(ui_playScreen);
    lv_obj_set_width(ui_gameOverPanel, 320);
    lv_obj_set_height(ui_gameOverPanel, 440);
    lv_obj_set_x(ui_gameOverPanel, -1);
    lv_obj_set_y(ui_gameOverPanel, 50);
    lv_obj_set_align(ui_gameOverPanel, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_gameOverPanel, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_gameOverPanel, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_gameOverPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_gameOverPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gameOverPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_gameOverPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gameOverDialog = lv_obj_create(ui_gameOverPanel);
    lv_obj_set_width(ui_gameOverDialog, 214);
    lv_obj_set_height(ui_gameOverDialog, LV_SIZE_CONTENT); /// 140
    lv_obj_set_align(ui_gameOverDialog, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_gameOverDialog, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_gameOverDialog, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_gameOverDialog, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_gameOverDialog, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gameOverDialog, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_gameOverDialog, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gameOverLabel = lv_label_create(ui_gameOverDialog);
    lv_obj_set_width(ui_gameOverLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_gameOverLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_gameOverLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_gameOverLabel, "Game Over");
    lv_obj_set_style_text_color(ui_gameOverLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_gameOverLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_gameOverLabel, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_gameOverLabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gameOverScore = lv_label_create(ui_gameOverDialog);
    lv_obj_set_width(ui_gameOverScore, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_gameOverScore, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_gameOverScore, LV_ALIGN_CENTER);
    lv_label_set_text(ui_gameOverScore, "Your score is 34");

    ui_restartButton = lv_btn_create(ui_gameOverDialog);
    lv_obj_set_width(ui_restartButton, 100);
    lv_obj_set_height(ui_restartButton, 50);
    lv_obj_set_x(ui_restartButton, 1);
    lv_obj_set_y(ui_restartButton, 0);
    lv_obj_set_align(ui_restartButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_restartButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_restartButton, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_restartButtonText = lv_label_create(ui_restartButton);
    lv_obj_set_width(ui_restartButtonText, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_restartButtonText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_restartButtonText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_restartButtonText, "Restart");

    ui_exitButton = lv_btn_create(ui_gameOverDialog);
    lv_obj_set_width(ui_exitButton, 100);
    lv_obj_set_height(ui_exitButton, 50);
    lv_obj_set_x(ui_exitButton, 1);
    lv_obj_set_y(ui_exitButton, 0);
    lv_obj_set_align(ui_exitButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_exitButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_exitButton, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_exitButtonText = lv_label_create(ui_exitButton);
    lv_obj_set_width(ui_exitButtonText, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_exitButtonText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_exitButtonText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_exitButtonText, "Exit");

    lv_obj_add_event_cb(ui_playPanel, ui_event_playPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_settingsButton, ui_event_settingsButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_restartButton, ui_event_restartButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_exitButton, ui_event_exitButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_playScreen, ui_event_playScreen, LV_EVENT_ALL, NULL);
}
void ui_settingsScreen_screen_init(void)
{
    ui_settingsScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_settingsScreen, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_img_src(ui_settingsScreen, &ui_img_gradient_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingsHeader = lv_obj_create(ui_settingsScreen);
    lv_obj_set_width(ui_settingsHeader, 320);
    lv_obj_set_height(ui_settingsHeader, 50);
    lv_obj_set_align(ui_settingsHeader, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_settingsHeader, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_settingsHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_settingsHeader, lv_color_hex(0x100031), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settingsHeader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_settingsHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_closeSettings = lv_img_create(ui_settingsHeader);
    lv_img_set_src(ui_closeSettings, &ui_img_application_png);
    lv_obj_set_width(ui_closeSettings, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_closeSettings, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_closeSettings, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_closeSettings, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_closeSettings, LV_OBJ_FLAG_SCROLLABLE);                        /// Flags

    ui_settingsHeaderText = lv_label_create(ui_settingsHeader);
    lv_obj_set_width(ui_settingsHeaderText, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settingsHeaderText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_settingsHeaderText, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_settingsHeaderText, "Settings");
    lv_obj_set_style_text_font(ui_settingsHeaderText, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingsPanel = lv_obj_create(ui_settingsScreen);
    lv_obj_set_width(ui_settingsPanel, 320);
    lv_obj_set_height(ui_settingsPanel, 428);
    lv_obj_set_x(ui_settingsPanel, 0);
    lv_obj_set_y(ui_settingsPanel, 50);
    lv_obj_set_align(ui_settingsPanel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_settingsPanel, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_settingsPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_scrollbar_mode(ui_settingsPanel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_settingsPanel, LV_DIR_VER);
    lv_obj_set_style_radius(ui_settingsPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_settingsPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settingsPanel, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_settingsPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_freeModePanel = lv_obj_create(ui_settingsPanel);
    lv_obj_set_height(ui_freeModePanel, 50);
    lv_obj_set_width(ui_freeModePanel, lv_pct(100));
    lv_obj_set_align(ui_freeModePanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_freeModePanel, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_freeModePanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_freeModePanel, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_freeModePanel, lv_color_hex(0x100031), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_freeModePanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_freeModeText = lv_label_create(ui_freeModePanel);
    lv_obj_set_width(ui_freeModeText, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_freeModeText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_freeModeText, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_freeModeText, "Free mode");

    ui_freeModeSwitch = lv_switch_create(ui_freeModePanel);
    lv_obj_set_width(ui_freeModeSwitch, 50);
    lv_obj_set_height(ui_freeModeSwitch, 25);
    lv_obj_set_align(ui_freeModeSwitch, LV_ALIGN_RIGHT_MID);

    lv_obj_add_event_cb(ui_closeSettings, ui_event_closeSettings, LV_EVENT_ALL, NULL);
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_startScreen_screen_init();
    ui_playScreen_screen_init();
    ui_settingsScreen_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_startScreen);
}
