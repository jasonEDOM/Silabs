/**
 * @file
 * Defines notification events for CC Notification.
 * @copyright 2023 Silicon Laboratories Inc.
 */
#ifndef ZAF_COMMANDCLASSES_NOTIFICATION_CC_NOTIFICATION_EVENTS_H_
#define ZAF_COMMANDCLASSES_NOTIFICATION_CC_NOTIFICATION_EVENTS_H_

/**
 * Notification event (8 bit) for notification type NOTIFICATION_TYPE_HOME_SECURITY.
 */
typedef enum {
  NOTIFICATION_EVENT_HOME_SECURITY_NO_EVENT,
  NOTIFICATION_EVENT_HOME_SECURITY_INTRUSION,
  NOTIFICATION_EVENT_HOME_SECURITY_INTRUSION_UNKNOWN_EV,
  NOTIFICATION_EVENT_HOME_SECURITY_TAMPERING_COVERING_REMOVED,
  NOTIFICATION_EVENT_HOME_SECURITY_TAMPERING_INVALID_CODE,
  NOTIFICATION_EVENT_HOME_SECURITY_GLASS_BREAKAGE,
  NOTIFICATION_EVENT_HOME_SECURITY_GLASS_BREAKAGE_UNKNOWN_LOCATION,
  NOTIFICATION_EVENT_HOME_SECURITY_MOTION_DETECTION,
  NOTIFICATION_EVENT_HOME_SECURITY_MOTION_DETECTION_UNKNOWN_LOCATION,
  NOTIFICATION_EVENT_HOME_SECURITY_UNKNOWN_EVENT = 0xFE
} NOTIFICATION_EVENT_HOME_SECURITY;

/**
 * Notification event (8 bit) for notification type NOTIFICATION_TYPE_POWER_MANAGEMENT.
 */
typedef enum {
  NOTIFICATION_EVENT_POWER_MANAGEMENT_NO_EVENT,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_POWER_HAS_BEEN_APPLIED,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_AC_MAINS_DISCONNECED,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_AC_MAINS_RECONNECED,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_SURGE_DETECTED,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_VOLTAGE_DROP_DRIFT,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_OVERCURRENT_DETECTED,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_OVERVOLTAGE_DETECTION,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_OVERLOADED_DETECTED,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_LOAD_ERROR,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_REPLACE_BATTERY_SOON,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_REPLACE_BATTERY_NOW,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_BATTERY_IS_CHARGING,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_BATTERY_IS_FULLY_CHARGED,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_CHARGE_BATTERY_SOON,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_CHARGE_BATTERY_NOW,
  NOTIFICATION_EVENT_POWER_MANAGEMENT_UNKNOWN_EVENT = 0xFE
} NOTIFICATION_EVENT_POWER_MANAGEMENT;

/**
 * Notification event (8 bit) for notification type NOTIFICATION_TYPE_SMOKE_ALARM.
 */
typedef enum {
  NOTIFICATION_EVENT_EMERGENCY_ALARM_NO_EVENT,
  NOTIFICATION_EVENT_EMERGENCY_ALARM_CONTACT_POLICE,
  NOTIFICATION_EVENT_EMERGENCY_ALARM_CONTACT_FIRE_SERVICE,
  NOTIFICATION_EVENT_EMERGENCY_ALARM_CONTACT_MEDICAL_SERVICE,
  NOTIFICATION_EVENT_EMERGENCY_UNKNOWN_EVENT = 0xFE
} NOTIFICATION_EVENT_EMERGENCY_ALARM;

/**
 * Notification event (8 bit) for notification type NOTIFICATION_TYPE_SYSTEM.
 */
typedef enum {
  NOTIFICATION_EVENT_SYSTEM_NO_EVENT,
  NOTIFICATION_EVENT_SYSTEM_HARDWARE_FAILURE,
  NOTIFICATION_EVENT_SYSTEM_SOFTWARE_FAILURE,
  NOTIFICATION_EVENT_SYSTEM_HARDWARE_FAILURE_WITH_MANUFACTURER_PROPRIETARY_FAILURE_CODE,
  NOTIFICATION_EVENT_SYSTEM_SOFTWARE_FAILURE_WITH_MANUFACTURER_PROPRIETARY_FAILURE_CODE,
  NOTIFICATION_EVENT_SYSTEM_UNKNOWN_EVENT = 0xFE
} NOTIFICATION_EVENT_SYSTEM;

/**
 * Notification event (8 bit) for notification type NOTIFICATION_TYPE_SMOKE_ALARM.
 */
typedef enum {
  NOTIFICATION_EVENT_SMOKE_ALARM_NO_EVENT,
  NOTIFICATION_EVENT_SMOKE_ALARM_SMOKE_DETECTED,
  NOTIFICATION_EVENT_SMOKE_ALARM_SMOKE_DETECTED_UNKNOWN_LOCATION,
  NOTIFICATION_EVENT_SMOKE_ALARM_TEST,
  NOTIFICATION_EVENT_SMOKE_ALARM_REPLACEMENT_REQUIRED,
  NOTIFICATION_EVENT_SMOKE_ALARM_UNKNOWN_EVENT = 0xFE
} NOTIFICATION_EVENT_SMOKE_ALARM;

typedef enum {
  NOTIFICATION_EVENT_CO_ALARM_NO_EVENT,
  NOTIFICATION_EVENT_CO_ALARM_CO_DETECTED_LOCATION_PROVIDED,
  NOTIFICATION_EVENT_CO_ALARM_CO_DETECTED_UNKNOWN_LOCATION,
  NOTIFICATION_EVENT_CO_ALARM_CO_TEST,
  NOTIFICATION_EVENT_CO_ALARM_REPLACEMENT_REQUIRED,
  NOTIFICATION_EVENT_CO_ALARM_REPLACEMENT_REQUIRED_END_OF_LIFE,
  NOTIFICATION_EVENT_CO_ALARM_DETECTED_ALARM_SILENCED,
  NOTIFICATION_EVENT_CO_ALARM_DETECTED_MAINTANCE_REQUIRED,
  NOTIFICATION_EVENT_CO_ALARM_UNKNOWN_EVENT = 0xFE,
} NOTIFICATION_EVENT_CO_ALARM;

typedef enum {
  NOTIFICATION_EVENT_CO2_ALARM_NO_EVENT,
  NOTIFICATION_EVENT_CO2_ALARM_CO2_DETECTED_LOCATION_PROVIDED,
  NOTIFICATION_EVENT_CO2_ALARM_CO2_DETECTED_UNKNOWN_LOCATION,
  NOTIFICATION_EVENT_CO2_ALARM_CO2_TEST,
  NOTIFICATION_EVENT_CO2_ALARM_REPLACEMENT_REQUIRED,
  NOTIFICATION_EVENT_CO2_ALARM_REPLACEMENT_REQUIRED_END_OF_LIFE,
  NOTIFICATION_EVENT_CO2_ALARM_ALARM_SILENCED,
  NOTIFICATION_EVENT_CO2_ALARM_MAINTANCE_REQUIRED,
  NOTIFICATION_EVENT_CO2_ALARM_UNKNOWN_EVENT = 0xFE,
} NOTIFICATION_EVENT_CO2_ALARM;

typedef enum {
  NOTIFICATION_EVENT_HEAT_ALARM_NO_EVENT,
  NOTIFICATION_EVENT_HEAT_ALARM_RAPID_TEMPERATURE_RISE_LOCATION_PROVIDED = 0x03,
  NOTIFICATION_EVENT_HEAT_ALARM_RAPID_TEMPERATURE_RISE = 0x04,
  NOTIFICATION_EVENT_HEAT_ALARM_RAPID_TEMPERATURE_FALL_LOCATION_PROVIDED = 0x0C,
  NOTIFICATION_EVENT_HEAT_ALARM_RAPID_TEMPERATURE_FALL = 0x0D,
  NOTIFICATION_EVENT_HEAT_ALARM_UNKNOWN_EVENT = 0xFE
} NOTIFICATION_EVENT_HEAT_ALARM;

#endif /* ZAF_COMMANDCLASSES_NOTIFICATION_CC_NOTIFICATION_EVENTS_H_ */
