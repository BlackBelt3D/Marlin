/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

 // semsor in BLACKBELT 3D.
const temp_entry_t temptable_5951[] PROGMEM = {
  { OV( 111), 195 },
  { OV( 192), 165 },
  { OV( 230), 155 },
  { OV( 275), 145 },
  { OV( 315), 135 },
  { OV( 380), 120 },
  { OV( 430), 110 },
  { OV( 500),  95 },
  { OV( 554),  85 },
  { OV( 664),  70 },
  { OV( 774),  60 },
  { OV( 860),  50 },
  { OV( 935),  40 },
  { OV( 966),  30 },
  { OV( 986),  20 },
  { OV(1000),  10 },
  { OV(1010),   0 }
};
