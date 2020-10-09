/*
 * PoweredUpRemoteHub.h - Arduino Library for controlling PoweredUp remote controls (88010)
 * 
 * (c) Copyright 2020 - Cornelius Munz
 * Released under MIT License
 * 
*/

#ifndef PoweredUpRemoteHub_h
#define PoweredUpRemoteHub_h

#include "Lpf2Hub.h"

class PoweredUpRemoteHub : public Lpf2Hub
{
public:
  //Port definitions specific to PowerdUp Remote
  enum Port
  {
    LEFT = 0x00,
    RIGHT = 0x01,
    HUB_LED = 0x34,
    VOLTAGE_SENSOR = 0x3B,
    REMOTE_CONTROL_RSSI = 0x3C
  };

  //Constructor
  PoweredUpRemoteHub();

  //Methods
  
};

#endif