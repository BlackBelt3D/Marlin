/**
 * BLACKBELT belt thermistor
 * Copyright (C) 2018 [https://github.com/BlackBelt3D/Marlin]
 *
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

// BLACKBELT
const short temptable_16[][2] PROGMEM = {
  {  111 * OVERSAMPLENR, 195 },
  {  192 * OVERSAMPLENR, 165 },
  {  230 * OVERSAMPLENR, 155 },
  {  275 * OVERSAMPLENR, 145 },
  {  315 * OVERSAMPLENR, 135 },
  {  380 * OVERSAMPLENR, 120 },
  {  430 * OVERSAMPLENR, 110 },
  {  500 * OVERSAMPLENR,  95 },
  {  554 * OVERSAMPLENR,  85 },
  {  664 * OVERSAMPLENR,  70 },
  {  774 * OVERSAMPLENR,  60 },
  {  860 * OVERSAMPLENR,  50 },
  {  935 * OVERSAMPLENR,  40 },
  {  966 * OVERSAMPLENR,  30 },
  {  986 * OVERSAMPLENR,  20 },
  { 1000 * OVERSAMPLENR,  10 },
  { 1010 * OVERSAMPLENR,   0 }
};
