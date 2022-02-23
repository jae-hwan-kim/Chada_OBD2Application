import 'dart:async';
import 'dart:math';

import 'package:flutter/material.dart';
import 'package:flutter_bluetooth_serial/flutter_bluetooth_serial.dart';
import 'OBD_PID.dart';

class carInfo {
  static bool _connected = false;
  static BluetoothDevice _server = null;
  static bool _scanning = false;

  static List<bool> _scanPID =
      List.generate(OBDPid.LAST_INDEX.index, (index) => true);
  static List<int> _values =
      List.generate(OBDPid.LAST_INDEX.index, (index) => 0);

  static int battery_charge = 0;

  carInfo();

  void randomize() {
    var rand = Random();

    _values[OBDPid.ENGINE_SPEED.index] = rand.nextInt(8000);
    _values[OBDPid.CALCULATED_ENGINE_LOAD.index] = rand.nextInt(100);
    _values[OBDPid.ENGINE_COOLANT_TEMPERATURE.index] = rand.nextInt(200);
    _values[OBDPid.FUEL_TANK_LEVEL_INPUT.index] = rand.nextInt(100);
    _values[OBDPid.VEHICLE_SPEED.index] = rand.nextInt(200);
    _values[OBDPid.THROTTLE_POSITION.index] = rand.nextInt(100);
    battery_charge = 42;
  }

  void scanAll() {
    int i = 0;
    var rand = Random();

    while (i < OBDPid.LAST_INDEX.index) {
      scanItem(i++, _scanMethod);
    }
  }

  void scanItem(int pidIndex, Function scanMethod) {
    if (_scanPID[pidIndex] == false) {
      _values[pidIndex] = -1;
    } else {
      _values[pidIndex] = scanMethod(pidIndex);
    }
  }

  int _scanMethod(int pidIndex) {
    var rand = Random();

    if (_server == null) {
      print("Tried scan without being connected to OBD");
      return -2;
    } else {
      battery_charge = 90;
      return rand.nextInt(100);
    }
  }

  get ENG_RPM => _values[OBDPid.ENGINE_SPEED.index];
  get ENG_LOAD => _values[OBDPid.CALCULATED_ENGINE_LOAD.index];
  get COOL_TMP => _values[OBDPid.ENGINE_COOLANT_TEMPERATURE.index];
  get FUEL_LVL => _values[OBDPid.FUEL_TANK_LEVEL_INPUT.index];
  get CUR_SPD => _values[OBDPid.VEHICLE_SPEED.index];
  get ACCEL => _values[OBDPid.THROTTLE_POSITION.index];
  get BAT_CHG => battery_charge;

  get getServer => _server;
  set setServer(BluetoothDevice server) => _server = server;
}
