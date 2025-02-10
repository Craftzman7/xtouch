#ifndef _UI_COMP_TEMPERATURECOMPONENT_H
#define _UI_COMP_TEMPERATURECOMPONENT_H

#include "../ui.h"

#ifdef __cplusplus
extern "C"
{
#endif

// COMPONENT temperatureComponent
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENT 0
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTTEMPS 1
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTTEMPS_TEMPERATURECOMPONENTNOZZLE 2
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTTEMPS_TEMPERATURECOMPONENTNOZZLE_MAINSCREENNOZZLETEMPICON 3
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTTEMPS_TEMPERATURECOMPONENTNOZZLE_MAINSCREENNOZZLETEMPVALUE 4
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTTEMPS_TEMPERATURECOMPONENTNOZZLE_MAINSCREENNOZZLETEMPINPUT 5
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTTEMPS_TEMPERATURECOMPONENTBED 6
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTTEMPS_TEMPERATURECOMPONENTBED_MAINSCREENBEDTEMPICON 7
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTTEMPS_TEMPERATURECOMPONENTBED_MAINSCREENBEDTEMPVALUE 8
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTTEMPS_TEMPERATURECOMPONENTBED_MAINSCREENBEDTEMPINPUT 9
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS 10
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTPARTFAN 11
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTPARTFAN_TEMPERATURECOMPONENTPARTFANICON 12
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTPARTFAN_TEMPERATURECOMPONENTPARTFANLABEL 13
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTPARTFAN_TEMPERATURECOMPONENTPARTFANVALUE 14
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTPARTFAN_TEMPERATURECOMPONENTPARTFANINPUT 15
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTAUXFAN 16
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTAUXFAN_TEMPERATURECOMPONENTAUXFANICON 17
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTAUXFAN_TEMPERATURECOMPONENTAUXFANLABEL 18
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTAUXFAN_TEMPERATURECOMPONENTAUXFANVALUE 19
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTAUXFAN_TEMPERATURECOMPONENTAUXFANINPUT 20
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTCHAMBERFAN 21
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTCHAMBERFAN_TEMPERATURECOMPONENTCHAMBERFANICON 22
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTCHAMBERFAN_TEMPERATURECOMPONENTCHAMBERFANLABEL 23
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTCHAMBERFAN_TEMPERATURECOMPONENTCHAMBERFANVALUE 24
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTFANS_TEMPERATURECOMPONENTCHAMBERFAN_TEMPERATURECOMPONENTCHAMBERFANINPUT 25
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD 26
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADINPUT 27
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY1 28
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY2 29
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY3 30
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY4 31
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY5 32
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY6 33
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY7 34
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY8 35
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY9 36
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEY0 37
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEYBACK 38
#define UI_COMP_TEMPERATURECOMPONENT_TEMPERATURECOMPONENTKEYBOARD_NUMPADKEYOK 39
#define _UI_COMP_TEMPERATURECOMPONENT_NUM 40
    lv_obj_t *ui_temperatureComponent_create(lv_obj_t *comp_parent);
    void ui_temperatureComponent_show_keypad(int type, int index);
    void ui_temperatureComponent_show_keypad_and_back(int type, int index, int backToScreen);
    void ui_temperatureComponent_hide_keypad();
    void ui_temperatureComponent_on_keypad(char *key);
    void ui_event_comp_temperatureComponent_temperatureComponentBed(lv_event_t *e);
    void ui_event_comp_temperatureComponent_temperatureComponentNozzle(lv_event_t *e);
    void ui_event_comp_temperatureComponent_temperatureComponentPartFan(lv_event_t *e);
    void ui_event_comp_temperatureComponent_temperatureComponentAuxFan(lv_event_t *e);
    void ui_event_comp_temperatureComponent_numpadKey(lv_event_t *e);
    void ui_event_comp_temperatureComponent_numpadKeyBack(lv_event_t *e);
    void ui_event_comp_temperatureComponent_numpadKeyOk(lv_event_t *e);
#define UI_COMP_KEYBOARD_NUMPADKEYBACK 38

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
