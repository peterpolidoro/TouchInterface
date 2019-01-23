// ----------------------------------------------------------------------------
// TouchInterface.h
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#ifndef TOUCH_INTERFACE_H
#define TOUCH_INTERFACE_H
#include <ArduinoJson.h>
#include <JsonStream.h>
#include <Array.h>
#include <Vector.h>
#include <ConstantVariable.h>
#include <Functor.h>

#include <ModularServer.h>
#include <ModularDeviceBase.h>
#include <I2CInterface.h>

#include "TouchInterface/Constants.h"


class TouchInterface : public I2CInterface
{
public:
  TouchInterface();
  virtual void setup();

private:
  modular_server::Property properties_[touch_interface::constants::PROPERTY_COUNT_MAX];
  modular_server::Parameter parameters_[touch_interface::constants::PARAMETER_COUNT_MAX];
  modular_server::Function functions_[touch_interface::constants::FUNCTION_COUNT_MAX];
  modular_server::Callback callbacks_[touch_interface::constants::CALLBACK_COUNT_MAX];

  // Handlers

};

#endif