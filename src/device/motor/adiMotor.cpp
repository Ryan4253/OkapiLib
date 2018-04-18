/**
 * @author Ryan Benasutti, WPI
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#include "okapi/device/motor/adiMotor.hpp"

namespace okapi {
ADIMotor::ADIMotor(const std::uint8_t iport) : motor(iport) {
}

void ADIMotor::moveVoltage(const std::int32_t ivoltage) const {
  motor.set_value(ivoltage);
}

void ADIMotor::controllerSet(const double ivalue) {
  motor.set_value(ivalue);
}
} // namespace okapi
