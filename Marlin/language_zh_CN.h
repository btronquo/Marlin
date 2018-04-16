/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Simplified Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ZH_CN_H
#define LANGUAGE_ZH_CN_H

#define WELCOME_MSG                         MACHINE_NAME _UxGT("å·²å°±ç»ª.")  //" ready."
#define MSG_SD_INSERTED                     _UxGT("å­˜å‚¨å�¡å·²æ�’å…¥")  //"Card inserted"
#define MSG_SD_REMOVED                      _UxGT("å­˜å‚¨å�¡è¢«æ‹”å‡º")  //"Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("æŒ¡å�—")  //"Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("ä¸»è�œå�•")  //"Main"
#define MSG_AUTOSTART                       _UxGT("è‡ªåŠ¨å¼€å§‹")  //"Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("å…³é—­æ­¥è¿›ç”µæœº")  //"Disable steppers"
#define MSG_AUTO_HOME                       _UxGT("å›žåŽŸç‚¹")  //"Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("å›žXåŽŸä½�")  //"Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("å›žYåŽŸä½�")  //"Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("å›žZåŽŸä½�")  //"Home Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("å¹³å�°è°ƒå¹³XYZå½’åŽŸä½�")  //"Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("å�•å‡»å¼€å§‹çƒ­åºŠè°ƒå¹³")  //"Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("ä¸‹ä¸ªçƒ­åºŠè°ƒå¹³ç‚¹")  //"Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("å®Œæˆ�çƒ­åºŠè°ƒå¹³")  //"Leveling Done!"
#define MSG_SET_HOME_OFFSETS                _UxGT("è®¾ç½®åŽŸç‚¹å��ç§»")  //"Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("å��ç§»å·²å�¯ç”¨")  //"Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("è®¾ç½®åŽŸç‚¹")  //"Set origin"
#define MSG_PREHEAT_1                       _UxGT("é¢„çƒ­PLA")  //"Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")  //MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" å…¨éƒ¨")  //MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" çƒ­åºŠ")  //MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" è®¾ç½®")  //MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       _UxGT("é¢„çƒ­ABS")  //"Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")  //MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" å…¨éƒ¨")  //MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" çƒ­åºŠ")  //MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" è®¾ç½®")  //MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        _UxGT("é™�æ¸©")  //"Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("ç”µæº�æ‰“å¼€")  //"Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("ç”µæº�å…³é—­")  //"Switch power off"
#define MSG_EXTRUDE                         _UxGT("æŒ¤å‡º")  //"Extrude"
#define MSG_RETRACT                         _UxGT("å›žæŠ½")  //"Retract"
#define MSG_MOVE_AXIS                       _UxGT("ç§»åŠ¨è½´")  //"Move axis"
#define MSG_BED_LEVELING                    _UxGT("è°ƒå¹³çƒ­åºŠ")  //"Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("è°ƒå¹³çƒ­åºŠ")  //"Level bed"
#define MSG_MOVE_X                          _UxGT("ç§»åŠ¨X")  //"Move X"
#define MSG_MOVE_Y                          _UxGT("ç§»åŠ¨Y")  //"Move Y"
#define MSG_MOVE_Z                          _UxGT("ç§»åŠ¨Z")  //"Move Z"
#define MSG_MOVE_E                          _UxGT("æŒ¤å‡ºæœº")  //"Extruder"
#define MSG_MOVE_01MM                       _UxGT("ç§»åŠ¨ 0.1 mm")  //"Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("ç§»åŠ¨ 1 mm")  //"Move 1mm"
#define MSG_MOVE_10MM                       _UxGT("ç§»åŠ¨ 10 mm")  //"Move 10mm"
#define MSG_SPEED                           _UxGT("é€ŸçŽ‡")  //"Speed"
#define MSG_BED_Z                           _UxGT("çƒ­åºŠZ")  //"Bed Z"
#define MSG_NOZZLE                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" å–·å˜´")  //"Nozzle" å™´å˜´
#define MSG_BED                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" çƒ­åºŠ")  //"Bed"
#define MSG_FAN_SPEED                       _UxGT("é£Žæ‰‡é€ŸçŽ‡")  //"Fan speed"
#define MSG_FLOW                            _UxGT("æŒ¤å‡ºé€ŸçŽ‡")  //"Flow"
#define MSG_CONTROL                         _UxGT("æŽ§åˆ¶")  //"Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" æœ€å°�") //" " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" æœ€å¤§")  //" " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" å› æ•°")  //" " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        _UxGT("è‡ªåŠ¨æŽ§æ¸©")  //"Autotemp"
#define MSG_ON                              _UxGT("å¼€ ")  //"On "
#define MSG_OFF                             _UxGT("å…³ ")  //"Off"
#define MSG_PID_P                           _UxGT("PID-P")  //"PID-P"
#define MSG_PID_I                           _UxGT("PID-I")  //"PID-I"
#define MSG_PID_D                           _UxGT("PID-D")  //"PID-D"
#define MSG_PID_C                           _UxGT("PID-C")  //"PID-C"
#define MSG_SELECT                          _UxGT("é€‰æ‹©")  //"Select"
#define MSG_ACC                             _UxGT("åŠ é€Ÿåº¦")  //"Accel" acceleration
#define MSG_JERK                            _UxGT("æŠ–åŠ¨é€ŸçŽ‡")  // "Jerk"
#define MSG_VX_JERK                         _UxGT("Xè½´æŠ–åŠ¨é€ŸçŽ‡")  //"Vx-jerk"
#define MSG_VY_JERK                         _UxGT("Yè½´æŠ–åŠ¨é€ŸçŽ‡")  //"Vy-jerk"
#define MSG_VZ_JERK                         _UxGT("Zè½´æŠ–åŠ¨é€ŸçŽ‡")  //"Vz-jerk"
#define MSG_VE_JERK                         _UxGT("æŒ¤å‡ºæœºæŠ–åŠ¨é€ŸçŽ‡")  //"Ve-jerk"
#define MSG_VMAX                            _UxGT("æœ€å¤§è¿›æ–™é€ŸçŽ‡")  //"Vmax " max_feedrate_mm_s
#define MSG_VMIN                            _UxGT("æœ€å°�è¿›æ–™é€ŸçŽ‡")  //"Vmin"  min_feedrate_mm_s
#define MSG_VTRAV_MIN                       _UxGT("æœ€å°�ç§»åŠ¨é€ŸçŽ‡")  //"VTrav min" min_travel_feedrate_mm_s, (target) speed of the move
#define MSG_AMAX                            _UxGT("æœ€å¤§æ‰“å�°åŠ é€Ÿåº¦")  //"Amax " max_acceleration_mm_per_s2, acceleration in units/s^2 for print moves
#define MSG_A_RETRACT                       _UxGT("æ”¶è¿›åŠ é€Ÿåº¦")  //"A-retract" retract_acceleration, E acceleration in mm/s^2 for retracts
#define MSG_A_TRAVEL                        _UxGT("é�žæ‰“å�°ç§»åŠ¨åŠ é€Ÿåº¦")  //"A-travel" travel_acceleration, X, Y, Z acceleration in mm/s^2 for travel (non printing) moves
#define MSG_STEPS_PER_MM                    _UxGT("è½´æ­¥æ•°/mm")  //"Steps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_XSTEPS                          _UxGT("Xè½´æ­¥æ•°/mm")  //"Xsteps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_YSTEPS                          _UxGT("Yè½´æ­¥æ•°/mm")  //"Ysteps/mm"
#define MSG_ZSTEPS                          _UxGT("Zè½´æ­¥æ•°/mm")  //"Zsteps/mm"
#define MSG_ESTEPS                          _UxGT("æŒ¤å‡ºæœºæ­¥æ•°/mm")  //"Esteps/mm"
#define MSG_TEMPERATURE                     _UxGT("æ¸©åº¦")  //"Temperature"
#define MSG_MOTION                          _UxGT("è¿�åŠ¨")  //"Motion"
#define MSG_FILAMENT                        _UxGT("ä¸�æ–™æµ‹å®¹")  //"Filament" lcd_control_volumetric_menu
#define MSG_VOLUMETRIC_ENABLED              _UxGT("æµ‹å®¹ç§¯mmÂ³")  //"E in mm3" volumetric_enabled
#define MSG_FILAMENT_DIAM                   _UxGT("ä¸�æ–™ç›´å¾„")  //"Fil. Dia."
#define MSG_CONTRAST                        _UxGT("LCDå¯¹æ¯”åº¦")  //"LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("ä¿�å­˜è®¾ç½®")  //"Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("è£…è½½è®¾ç½®")  //"Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("æ�¢å¤�å®‰å…¨å€¼")  //"Restore failsafe"
#define MSG_REFRESH                         _UxGT("åˆ·æ–°")  //"Refresh"
#define MSG_WATCH                           _UxGT("ä¿¡æ�¯å±�")  //"Info screen"
#define MSG_PREPARE                         _UxGT("å‡†å¤‡")  //"Prepare"
#define MSG_TUNE                            _UxGT("è°ƒæ•´")  //"Tune"
#define MSG_PAUSE_PRINT                     _UxGT("æš‚å�œæ‰“å�°")  //"Pause print"
#define MSG_RESUME_PRINT                    _UxGT("æ�¢å¤�æ‰“å�°")  //"Resume print"
#define MSG_STOP_PRINT                      _UxGT("å�œæ­¢æ‰“å�°")  //"Stop print"
#define MSG_CARD_MENU                       _UxGT("ä»Žå­˜å‚¨å�¡ä¸Šæ‰“å�°")  //"Print from SD"
#define MSG_NO_CARD                         _UxGT("æ— å­˜å‚¨å�¡")  //"No SD card"
#define MSG_DWELL                           _UxGT("ä¼‘çœ ä¸­ ...")  //"Sleep..."
#define MSG_USERWAIT                        _UxGT("ç­‰å¾…ç”¨æˆ· ...")  //"Wait for user..."
#define MSG_RESUMING                        _UxGT("æ�¢å¤�æ‰“å�°ä¸­")  //"Resuming print"
#define MSG_PRINT_ABORTED                   _UxGT("æ‰“å�°å·²å�–æ¶ˆ")  //"Print aborted"
#define MSG_NO_MOVE                         _UxGT("æ— ç§»åŠ¨")  //"No move."
#define MSG_KILLED                          _UxGT("å·²æ�€æŽ‰")  //"KILLED. "
#define MSG_STOPPED                         _UxGT("å·²å�œæ­¢")  //"STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("å›žæŠ½é•¿åº¦mm")  //"Retract mm" retract_length, retract length (positive mm)
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("æ�¢æ‰‹å›žæŠ½é•¿åº¦mm")  //"Swap Re.mm" swap_retract_length, swap retract length (positive mm), for extruder change
#define MSG_CONTROL_RETRACTF                _UxGT("å›žæŠ½é€ŸçŽ‡mm/s")  //"Retract  V" retract_feedrate_mm_s, feedrate for retracting (mm/s)
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")  //"Hop mm" retract_zlift, retract Z-lift
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("å›žæŠ½æ�¢å¤�é•¿åº¦mm")  //"UnRet +mm" retract_recover_length, additional recover length (mm, added to retract length when recovering)
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("æ�¢æ‰‹å›žæŠ½æ�¢å¤�é•¿åº¦mm")  //"S UnRet+mm" swap_retract_recover_length, additional swap recover length (mm, added to retract length when recovering from extruder change)
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("å›žæŠ½æ�¢å¤�å�Žè¿›æ–™é€ŸçŽ‡mm/s")  //"UnRet  V" retract_recover_feedrate_mm_s, feedrate for recovering from retraction (mm/s)
#define MSG_AUTORETRACT                     _UxGT("è‡ªåŠ¨æŠ½å›ž")  //"AutoRetr." autoretract_enabled,
#define MSG_FILAMENTCHANGE                  _UxGT("æ›´æ�¢ä¸�æ–™")  //"Change filament"
#define MSG_INIT_SDCARD                     _UxGT("åˆ�å§‹åŒ–å­˜å‚¨å�¡")  //"Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("æ›´æ�¢å­˜å‚¨å�¡")  //"Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("ZæŽ¢é’ˆåœ¨çƒ­åºŠä¹‹å¤–")  //"Z probe out. bed" Z probe is not within the physical limits
#define MSG_HOME                            _UxGT("å½’ä½�")  //"Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("å…ˆ")  //"first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Zå��ç§»")  //"Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("å¾®é‡�è°ƒæ•´Xè½´")  //"Babystep X" lcd_babystep_x, Babystepping enables the user to control the axis in tiny amounts
#define MSG_BABYSTEP_Y                      _UxGT("å¾®é‡�è°ƒæ•´Yè½´")  //"Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("å¾®é‡�è°ƒæ•´Zè½´")  //"Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("æŒ¡å�—ç»ˆæ­¢")  //"Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("åŠ çƒ­å¤±è´¥")  //"Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("é”™è¯¯ï¼šREDUNDANT TEMP")  //"Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("æ¸©æŽ§å¤±æŽ§")  //"THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("é”™è¯¯ï¼šæœ€é«˜æ¸©åº¦")  //"Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("é”™è¯¯ï¼šæœ€ä½Žæ¸©åº¦")  //"Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("é”™è¯¯ï¼šæœ€é«˜çƒ­åºŠæ¸©åº¦")  //"Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("é”™è¯¯ï¼šæœ€ä½Žçƒ­åºŠæ¸©åº¦")  //"Err: MINTEMP BED"
#define MSG_HALTED                          _UxGT("æ‰“å�°å�œæœº")  //"PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("è¯·é‡�ç½®")  //"Please reset"
#define MSG_SHORT_DAY                       _UxGT("å¤©")  //"d" // One character only
#define MSG_SHORT_HOUR                      _UxGT("æ—¶")  //"h" // One character only
#define MSG_SHORT_MINUTE                    _UxGT("åˆ†")  //"m" // One character only
#define MSG_HEATING                         _UxGT("åŠ çƒ­ä¸­ ...")  //"Heating..."
#define MSG_HEATING_COMPLETE                _UxGT("å®Œæˆ�åŠ çƒ­")  //"Heating done."
#define MSG_BED_HEATING                     _UxGT("åŠ çƒ­çƒ­åºŠä¸­")  //"Bed Heating."
#define MSG_BED_DONE                        _UxGT("å®Œæˆ�åŠ çƒ­çƒ­åºŠ")  //"Bed done."
#define MSG_DELTA_CALIBRATE                 _UxGT("âŠ¿æ ¡å‡†")  //"Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("æ ¡å‡†X")  //"Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("æ ¡å‡†Y")  //"Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("æ ¡å‡†Z")  //"Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("æ ¡å‡†ä¸­å¿ƒ")  //"Calibrate Center"

#define MSG_INFO_MENU                       _UxGT("å…³äºŽæ‰“å�°æœº")  //"About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("æ‰“å�°æœºä¿¡æ�¯")  //"Printer Info"
#define MSG_INFO_STATS_MENU                 _UxGT("æ‰“å�°æœºç»Ÿè®¡")  //"Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("ä¸»æ�¿ä¿¡æ�¯")  //"Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("æ¸©åº¦è®¡")  //"Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("æŒ¤å‡ºæœº")  //"Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("æ³¢ç‰¹çŽ‡")  //"Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("å��è®®")  //"Protocol"

#if LCD_WIDTH > 19
#define MSG_INFO_PRINT_COUNT              _UxGT("æ‰“å�°è®¡æ•°")  //"Print Count"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("å®Œæˆ�äº†")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("æ€»æ‰“å�°æ—¶é—´")  //"Total print time"
#define MSG_INFO_PRINT_LONGEST            _UxGT("æœ€é•¿å·¥ä½œæ—¶é—´")  //"Longest job time"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("æ€»è®¡æŒ¤å‡º")  //"Extruded total"
#else
#define MSG_INFO_PRINT_COUNT              _UxGT("æ‰“å�°æ•°")  //"Prints"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("å®Œæˆ�")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("æ€»å…±")  //"Total"
#define MSG_INFO_PRINT_LONGEST            _UxGT("æœ€é•¿")  //"Longest"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("å·²æŒ¤å‡º")  //"Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("æœ€ä½Žæ¸©åº¦")  //"Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("æœ€é«˜æ¸©åº¦")  //"Max Temp"
#define MSG_INFO_PSU                        _UxGT("ç”µæº�ä¾›åº”")  //"Power Supply"

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("æŒ¤å‡ºæ›´å¤š")  //"Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("æ�¢å¤�æ‰“å�°")  //"Resume print"

#if LCD_HEIGHT >= 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("ç­‰å¾…å¼€å§‹")  //"Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("ä¸�æ–™")  //"of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("å�˜æ›´")  //"change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("ç­‰å¾…")  //"Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("å�¸ä¸‹ä¸�æ–™")  //"filament unload"
#define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("æ�’å…¥ä¸�æ–™")  //"Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("å¹¶æŒ‰é”®")  //"and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("æ�¥ç»§ç»­ ...")  //"to continue..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("ç­‰å¾…")  //"Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("è¿›æ–™")  //"filament load"
#define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("ç­‰å¾…")  //"Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("ä¸�æ–™æŒ¤å‡º")  //"filament extrude"
#define MSG_FILAMENT_CHANGE_EXTRUDE_3       _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("ç­‰å¾…æ‰“å�°")  //"Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("æ�¢å¤�")  //"to resume"
#define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("")  //""

#else // LCD_HEIGHT < 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("è¯·ç­‰å¾… ...")  //"Please wait..."
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("é€€å‡ºä¸­ ...")  //"Ejecting..."
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("æ�’å…¥å¹¶å�•å‡»")  //"Insert and Click"
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("è£…è½½ä¸­ ...")  //"Loading..."
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("æŒ¤å‡ºä¸­ ...")  //"Extruding..."
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("æ�¢å¤�ä¸­ ...")  //"Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_ZH_CN_H

