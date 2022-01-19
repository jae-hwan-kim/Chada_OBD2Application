#ifndef OBD_PID_HPP
#define OBD_PID_HPP

enum OBDPid
{
	/*
	** 0x00 ~ 0x0F
	*/
	PIDS_SUPPORTED_01_20,
	MONITOR_STATUS_SINXE_DTCS_CLEARED,
	FREEZE_DTC,
	FUEL_SYSTEM_STATUS,
	CALCULATED_ENGINE_LOAD,
	ENGINE_COOLANT_TEMPERATURE,
	SHORT_TERM_FUEL_TRIM_BANK_1,
	LONG_TERM_FUEL_TRIM_BANK_1,
	SHORT_TERM_FUEL_TRIM_BANK_2,
	LONG_TERM_FUEL_TRIM_BANK_2,
	FUEL_PRESSURE,
	INTAKE_MANIFOLD_ABSOLUTE_PRESSURE,
	ENGINE_SPEED,
	VEHICLE_SPEED,
	TIMING_ADVANCE,
	INTAKE_AIR_TEMPERATURE,

	/*
	** 0x10 ~ 0x1F
	*/
	MAF_AIR_FLOW_RATE,
	THROTTLE_POSITION,
	COMMANDED_SECONDARY_AIR_STATUS,
	OXYGEN_SENSORS_PRESENT_IN_2_BANKS,
	OXYGEN_SENSOR_1_VOLTAGE,
	OXYGEN_SENSOR_2_VOLTAGE,
	OXYGEN_SENSOR_3,
	OXYGEN_SENSOR_4,
	OXYGEN_SENSOR_5,
	OXYGEN_SENSOR_6,
	OXYGEN_SENSOR_7,
	OXYGEN_SENSOR_8,
	OBD_STANDARDS_THIS_VEHICLE_CONFORMS_TO,
	OXYGEN_SENSORS_PRESENT_IN_4_BANKS,
	AUXILIARY_INPUT_STATUS,
	RUN_TIME_SINCE_ENGINE_START,

	/*
	** 0x20 ~ 0x2F
	*/
	PIDS_SUPPORT_21_40,
	DISTANCE_TRAVELED_WITH_MIL_ON,
	FUEL_RAIL_PRESSURE,
	FUEL_RAIL_GAUGE_PRESSURE,
	OXYGEN_SENSOR_1_VOLTAGE,
	OXYGEN_SENSOR_2_VOLTAGE,
	OXYGEN_SENSOR_3_VOLTAGE,
	OXYGEN_SENSOR_4_VOLTAGE,
	OXYGEN_SENSOR_5_VOLTAGE,
	OXYGEN_SENSOR_6_VOLTAGE,
	OXYGEN_SENSOR_7_VOLTAGE,
	OXYGEN_SENSOR_8_VOLTAGE,
	COMMANDED_EGR,
	EGR_ERROR,
	COMMANDED_EVAPORATIVE_PURGE,
	FUEL_TANK_LEVEL_INPUT,

	/*
	** 0x30 ~ 0x3F
	*/
	WARM_UPS_SINCE_CODES_CLEARED,
	DISTANCE_TRAVELED_SINCE_CODES_CLEARED,
	EVAP_SYSTEM_VAPOR_PRESSURE,
	ABSOLULTE_BAROMETRIC_PRESSURE,
	OXYGEN_SENSOR_1_CURRENT,
	OXYGEN_SENSOR_2_CURRENT,
	OXYGEN_SENSOR_3_CURRENT,
	OXYGEN_SENSOR_4_CURRENT,
	OXYGEN_SENSOR_5_CURRENT,
	OXYGEN_SENSOR_6_CURRENT,
	OXYGEN_SENSOR_7_CURRENT,
	OXYGEN_SENSOR_8_CURRENT,
	CATALYST_TEMPERATURE_BANK_1_SENSOR_1,
	CATALYST_TEMPERATURE_BANK_2_SENSOR_1,
	CATALYST_TEMPERATURE_BANK_1_SENSOR_2,
	CATALYST_TEMPERATURE_BANK_2_SENSOR_2,

	/*
	** 0x40 ~ 0x4F
	*/
	PIDS_SUPPORT_41_60,
	MONITOR_STATUS_THIS_DRIVE_CYCLE,
	CONTROL_MODULE_VOLTAGE,
	ABSOLUTE_LOAD_VALUE,
	COMMANDED_FUEL_AIR_EQUIVALENCE_RATE,
	RELATIVE_THROTTLE_POSITION,
	AMBIENT_AIR_TEMPERATURE,
	ABSOLUTE_THROTTLE_POSITION_B,
	ABSOLUTE_THROTTLE_POSITION_C,
	ABSOLUTE_THROTTLE_POSITION_D,
	ABSOLUTE_THROTTLE_POSITION_E,
	ABSOLUTE_THROTTLE_POSITION_F,
	COMMANDED_THROTTLE_ACTUATOR,
	TIME_RUN_WITH_MIL_ON,
	TIME_SINCE_TROUBLE_CODES_CLEARED,
	MAXIMUM_VALUE_FOR_FUEL_AIR_EQUIVALENCE_RATIO,

	/*
	** 0x50 ~ 0X5F
	*/
	MAXIMUM_VALUE_FOR_AIR_FLOW_RATE_FROM_MASS_AIR_FLOW_SENSOR,
	FUEL_TYPE,
	ETHANOL_FUEL,
	ABSOLUTE_EVAP_SYSTEM_VAPOR_PRESSURE,
	EVAP_SYSTER_VAPOR_PRESSURE,
	SHORT_TERM_SECONDARY_OXYGEN_SENSOR_TRIM_1_3,
	LONG_TERM_SECONDARY_OXYGEN_SENSOR_TRIM_1_3,
	SHORT_TERM_SECONDARY_OXYGEN_SENSOR_TRIM_2_4,
	LONG_TERM_SECONDARY_OXYGEN_SENSOR_TRIM_2_4,
	FUEL_RAIL_ABSOLUTE_PRESSURE,
	RELATIVE_ACCELERATOR_PEDAL_POSITTION,
	HYBRID_BATTERY_PACK_REMAINING_LIFE,
	ENGINE_OIL_TEMPERATURE,
	FUEL_INJECTION_TIMING,
	ENGINE_FUEL_RATE,
	EMISSION_REQUIREMENT_TO_WHICH_VEHICLE_IS_DESIGNED

	/*
	** 0x60 ~ 0x6F
	*/
};

#endif