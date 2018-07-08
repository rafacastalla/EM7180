/* 

   cross_platform.h: Cross-platform routine support

   This file is part of EM7180.

   EM7180 is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   EM7180 is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with EM7180.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <stdint.h>

void _delay(uint32_t msec);
void _pinModeInput(uint8_t pin);
void _attachRisingInterrupt(uint8_t pin, void (*isr)(void));
void _readRegisters(uint8_t address, uint8_t subAddress, uint8_t count, uint8_t * dest);
void _writeRegister(uint8_t address, uint8_t subAddress, uint8_t data);
void _readRegisters(uint8_t address, uint8_t subAddress1, uint8_t subAddress2, uint8_t count, uint8_t * dest);