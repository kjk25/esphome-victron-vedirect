#pragma once
#include "ve_reg_flavor.h"
// clang-format off

#define REGISTERS_COMMON(MACRO) \
  MACRO(ANY, BITMASK, 0x0090, BLE_MODE, READ_WRITE, uint8_t) \
  MACRO(ANY, VOID, 0x0100, PRODUCT_ID, CONSTANT) \
  MACRO(ANY, VOID, 0x0102, APP_VER, CONSTANT) \
  MACRO(ANY, STRING, 0x010A, SERIAL_NUMBER, CONSTANT) \
  MACRO(ANY, STRING, 0x010B, MODEL_NAME, CONSTANT) \
  MACRO(ANY, BITMASK, 0x0140, CAPABILITIES, CONSTANT, uint32_t) \
  MACRO(ANY, BITMASK, 0x0150, CAPABILITIES_BLE, CONSTANT, uint32_t) \
  MACRO(ANY, ENUM, 0x0200, DEVICE_MODE, READ_WRITE) \
  MACRO(ANY, ENUM, 0x0201, DEVICE_STATE, READ_ONLY) \
  MACRO(ANY, BITMASK_S, 0x0205, DEVICE_OFF_REASON, READ_ONLY, uint8_t, DEVICE_OFF_REASON_2) \
  MACRO(ANY, BITMASK, 0x0207, DEVICE_OFF_REASON_2, READ_ONLY, uint32_t) \
  MACRO(INV, ENUM_S, 0x0209, INVERTER_DEVICE_STATE, READ_ONLY, DEVICE_STATE) \
  MACRO(CHG, ENUM_S, 0x020A, CHARGER_DEVICE_STATE, READ_ONLY, DEVICE_STATE) \
  MACRO(INV, NUMERIC, 0x0230, AC_OUT_VOLTAGE_SETPOINT, READ_WRITE, uint16_t, V, S_0_01, S_0_01) \
  MACRO(MPPT_RS, NUMERIC, 0x0244, MPPT_TRACKERS, CONSTANT, uint8_t, NONE, S_1, S_1) \
  MACRO(MULTI_RS, NUMERIC, 0x0305, UNKNOWN_0305, READ_ONLY, uint32_t, UNKNOWN, S_1, S_1) \
  MACRO(MULTI_RS, NUMERIC, 0x0310, UNKNOWN_0310, READ_ONLY, uint32_t, UNKNOWN, S_1, S_1) \
  MACRO(MULTI_RS, NUMERIC, 0x0311, UNKNOWN_0311, READ_ONLY, int32_t, UNKNOWN, S_1, S_1) \
  MACRO(ANY, BITMASK, 0x031C, WARNING_REASON, READ_ONLY, uint16_t) \
  MACRO(ANY, BITMASK_S, 0x031E, ALARM_REASON, READ_ONLY, uint16_t, WARNING_REASON) \
  MACRO(INV, NUMERIC, 0x0320, ALARM_LOW_VOLTAGE_SET, READ_WRITE, uint16_t, V, S_0_01, S_0_01) \
  MACRO(INV, NUMERIC, 0x0321, ALARM_LOW_VOLTAGE_CLEAR, READ_WRITE, uint16_t, V, S_0_01, S_0_01) \
  MACRO(ANY, BOOLEAN, 0x034E, RELAY_CONTROL, READ_WRITE) \
  MACRO(ANY, ENUM, 0x034F, RELAY_MODE, READ_WRITE) \
  MACRO(MULTI_RS, NUMERIC, 0x0FFC, UNKNOWN_0FFC, READ_ONLY, uint32_t, UNKNOWN, S_1, S_1) \
  MACRO(BMV, NUMERIC, 0x0FFE, TTG, READ_ONLY, uint16_t, minute, S_1, S_1) \
  MACRO(BMV, NUMERIC, 0x0FFF, SOC, READ_ONLY, uint16_t, SOC_PERCENTAGE, S_0_01, S_0_1) \
  MACRO(MPPT, BOOLEAN, 0x2030, SOLAR_ACTIVITY, READ_ONLY) \
  MACRO(MPPT, NUMERIC, 0x2031, TIME_OF_DAY, READ_ONLY, uint16_t, minute, S_1, S_1) \
  MACRO(INV, NUMERIC, 0x2200, AC_OUT_VOLTAGE, READ_ONLY, int16_t, V, S_0_01, S_0_01) \
  MACRO(INV, NUMERIC, 0x2201, AC_OUT_CURRENT, READ_ONLY, int16_t, A, S_0_1, S_0_1) \
  MACRO(INV, NUMERIC, 0x2205, AC_OUT_APPARENT_POWER, READ_ONLY, int32_t, VA, S_1, S_1) \
  MACRO(INV, NUMERIC, 0x2210, SHUTDOWN_LOW_VOLTAGE_SET, READ_WRITE, uint16_t, V, S_0_01, S_0_01) \
  MACRO(INV, NUMERIC, 0x2211, VOLTAGE_RANGE_MIN, CONSTANT, uint16_t, V, S_0_01, S_0_01) \
  MACRO(INV, NUMERIC, 0x2212, VOLTAGE_RANGE_MAX, CONSTANT, uint16_t, V, S_0_01, S_0_01) \
  MACRO(MULTI_RS, NUMERIC, 0x2213, U_AC_OUT_VOLTAGE, READ_ONLY, int16_t, V, S_0_01, S_0_01) \
  MACRO(MULTI_RS, NUMERIC, 0x2214, U_AC_OUT_CURRENT, READ_ONLY, int16_t, A, S_0_01, S_0_01) \
  MACRO(MULTI_RS, NUMERIC, 0x2215, U_AC_OUT_APPARENT_POWER, READ_ONLY, int32_t, VA, S_1, S_1) \
  MACRO(MULTI_RS, NUMERIC, 0x2216, UNKNOWN_2216, READ_ONLY, int32_t, UNKNOWN, S_1, S_1) \
  MACRO(MULTI_RS, NUMERIC, 0x2250, UNKNOWN_2250, READ_ONLY, int16_t, UNKNOWN, S_1, S_1) \
  MACRO(MULTI_RS, NUMERIC, 0x2251, UNKNOWN_2251, READ_ONLY, int16_t, UNKNOWN, S_1, S_1) \
  MACRO(MULTI_RS, NUMERIC, 0xD3A1, U_AC_OUT_CURRENT_MA, READ_ONLY, int32_t, A, S_0_001, S_0_001) \
  MACRO(MULTI_RS, NUMERIC, 0xD5C8, UNKNOWN_D5C8, READ_ONLY, uint32_t, UNKNOWN, S_1, S_1) \
  MACRO(MULTI_RS, NUMERIC, 0xD5CA, UNKNOWN_D5CA, READ_ONLY, uint32_t, UNKNOWN, S_1, S_1) \
  MACRO(MULTI_RS, NUMERIC, 0xD5CB, UNKNOWN_D5CB, READ_ONLY, uint32_t, UNKNOWN, S_1, S_1) \
  MACRO(MPPT_RS, ENUM_S, 0xECC3, MPPT_TRACKER_MODE_1, READ_ONLY, MPPT_TRACKER_MODE) \
  MACRO(MPPT_RS, NUMERIC, 0xECCB, PANEL_VOLTAGE_1, READ_ONLY, uint16_t, V, S_0_01, S_0_001) \
  MACRO(MPPT_RS, NUMERIC, 0xECCC, PANEL_POWER_1, READ_ONLY, uint32_t, W, S_0_01, S_1) \
  MACRO(MPPT_RS, NUMERIC, 0xECCD, PANEL_CURRENT_1, READ_ONLY, uint16_t, A, S_0_1, S_0_1) \
  MACRO(MPPT_RS, ENUM_S, 0xECD3, MPPT_TRACKER_MODE_2, READ_ONLY, MPPT_TRACKER_MODE) \
  MACRO(MPPT_RS, NUMERIC, 0xECDB, PANEL_VOLTAGE_2, READ_ONLY, uint16_t, V, S_0_01, S_0_001) \
  MACRO(MPPT_RS, NUMERIC, 0xECDC, PANEL_POWER_2, READ_ONLY, uint32_t, W, S_0_01, S_1) \
  MACRO(MPPT_RS, NUMERIC, 0xECDD, PANEL_CURRENT_2, READ_ONLY, uint16_t, A, S_0_1, S_0_1) \
  MACRO(MPPT_RS, ENUM_S, 0xECE3, MPPT_TRACKER_MODE_3, READ_ONLY, MPPT_TRACKER_MODE) \
  MACRO(MPPT_RS, NUMERIC, 0xECEB, PANEL_VOLTAGE_3, READ_ONLY, uint16_t, V, S_0_01, S_0_001) \
  MACRO(MPPT_RS, NUMERIC, 0xECEC, PANEL_POWER_3, READ_ONLY, uint32_t, W, S_0_01, S_1) \
  MACRO(MPPT_RS, NUMERIC, 0xECED, PANEL_CURRENT_3, READ_ONLY, uint16_t, A, S_0_1, S_0_1) \
  MACRO(MPPT_RS, ENUM_S, 0xECF3, MPPT_TRACKER_MODE_4, READ_ONLY, MPPT_TRACKER_MODE) \
  MACRO(MPPT_RS, NUMERIC, 0xECFB, PANEL_VOLTAGE_4, READ_ONLY, uint16_t, V, S_0_01, S_0_001) \
  MACRO(MPPT_RS, NUMERIC, 0xECFC, PANEL_POWER_4, READ_ONLY, uint32_t, W, S_0_01, S_1) \
  MACRO(MPPT_RS, NUMERIC, 0xECFD, PANEL_CURRENT_4, READ_ONLY, uint16_t, A, S_0_1, S_0_1) \
  MACRO(MPPT_RS, NUMERIC, 0xED8B, BATTERY_RIPPLE_VOLTAGE, READ_ONLY, uint16_t, V, S_0_01, S_0_001) \
  MACRO(ANY, NUMERIC, 0xED8D, DC_CHANNEL1_VOLTAGE, READ_ONLY, int16_t, V, S_0_01, S_0_001) \
  MACRO(BMV, NUMERIC, 0xED8E, DC_CHANNEL1_POWER, READ_ONLY, int16_t, W, S_1, S_1) \
  MACRO(ANY, NUMERIC, 0xED8F, DC_CHANNEL1_CURRENT, READ_ONLY, int16_t, A, S_0_1, S_0_001) \
  MACRO(MPPT, BOOLEAN, 0xEDA8, LOAD_OUTPUT_STATE, READ_ONLY) \
  MACRO(MPPT, NUMERIC, 0xEDAD, LOAD_CURRENT, READ_ONLY, uint16_t, A, S_0_1, S_0_001) \
  MACRO(MPPT, ENUM, 0xEDB3, MPPT_TRACKER_MODE, READ_ONLY) \
  MACRO(MPPT, NUMERIC, 0xEDB8, PANEL_MAXIMUM_VOLTAGE, CONSTANT, uint16_t, V, S_0_01, S_0_01) \
  MACRO(MPPT, NUMERIC, 0xEDBB, PANEL_VOLTAGE, READ_ONLY, uint16_t, V, S_0_01, S_0_001) \
  MACRO(MPPT, NUMERIC, 0xEDBC, PANEL_POWER, READ_ONLY, uint32_t, W, S_0_01, S_1) \
  MACRO(MPPT, NUMERIC, 0xEDBD, PANEL_CURRENT, READ_ONLY, uint16_t, A, S_0_1, S_0_1) \
  MACRO(MPPT_RS, NUMERIC, 0xEDBF, PANEL_MAXIMUM_CURRENT, CONSTANT, uint16_t, A, S_0_1, S_0_1) \
  MACRO(MPPT, NUMERIC, 0xEDD0, MAXIMUM_POWER_YESTERDAY, READ_ONLY, uint16_t, W, S_1, S_1) \
  MACRO(MPPT, NUMERIC, 0xEDD1, YIELD_YESTERDAY, READ_ONLY, uint16_t, kWh, S_0_01, S_0_01) \
  MACRO(MPPT, NUMERIC, 0xEDD2, MAXIMUM_POWER_TODAY, READ_ONLY, uint16_t, W, S_1, S_1) \
  MACRO(MPPT, NUMERIC, 0xEDD3, YIELD_TODAY, READ_ONLY, uint16_t, kWh, S_0_01, S_0_01) \
  MACRO(CHG, NUMERIC, 0xEDD5, CHARGER_VOLTAGE, READ_ONLY, uint16_t, V, S_0_01, S_0_001) \
  MACRO(CHG, NUMERIC, 0xEDD7, CHARGER_CURRENT, READ_ONLY, uint16_t, A, S_0_1, S_0_001) \
  MACRO(CHG, ENUM, 0xEDDA, CHR_ERROR_CODE, READ_ONLY) \
  MACRO(CHG, NUMERIC, 0xEDDB, CHR_INTERNAL_TEMPERATURE, READ_ONLY, int16_t, CELSIUS, S_0_01, S_0_01) \
  MACRO(MPPT, NUMERIC, 0xEDDC, USER_YIELD, READ_ONLY, uint32_t, kWh, S_0_01, S_0_01) \
  MACRO(MPPT, NUMERIC, 0xEDDD, SYSTEM_YIELD, READ_ONLY, uint32_t, kWh, S_0_01, S_0_01) \
  MACRO(ANY, NUMERIC, 0xEDEC, BAT_TEMPERATURE, READ_ONLY, uint16_t, CELSIUS, S_0_01, S_1) \
  MACRO(BMV71, NUMERIC, 0xEEB8, DC_MONITOR_MODE, READ_ONLY, int16_t, NONE, S_1, S_1) /*might be R/W and it's a signed ENUM*/ \
  MACRO(BMV, BOOLEAN, 0xEEFC, ALARM_BUZZER, READ_WRITE)

// clang-format on