/**
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

// 100k thermistor (104GT-2)
// ATC Semitec 104GT-2 (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
const short temptable_16[][2] PROGMEM = {
  {    1 * OVERSAMPLENR, 713 },
  {   17 * OVERSAMPLENR, 255 }, // top rating 300C
  {   20 * OVERSAMPLENR, 245 },
  {   23 * OVERSAMPLENR, 235 },
  {   27 * OVERSAMPLENR, 225 },
  {   31 * OVERSAMPLENR, 235 },
  {   37 * OVERSAMPLENR, 225 },
  {   43 * OVERSAMPLENR, 215 },
  {   51 * OVERSAMPLENR, 205 },
  {   61 * OVERSAMPLENR, 195 },
  {   73 * OVERSAMPLENR, 185 },
  {   87 * OVERSAMPLENR, 175 },
  {  106 * OVERSAMPLENR, 165 },
  {  128 * OVERSAMPLENR, 155 },
  {  155 * OVERSAMPLENR, 145 },
  {  189 * OVERSAMPLENR, 135 },
  {  230 * OVERSAMPLENR, 116 },
  {  278 * OVERSAMPLENR, 108 },
  {  336 * OVERSAMPLENR, 100 },
  {  402 * OVERSAMPLENR,  93 },
  {  476 * OVERSAMPLENR,  87 },
  {  554 * OVERSAMPLENR,  80 },
  {  635 * OVERSAMPLENR,  73 },
  {  713 * OVERSAMPLENR,  66 },
  {  784 * OVERSAMPLENR,  59 },
  {  846 * OVERSAMPLENR,  53 },
  {  897 * OVERSAMPLENR,  46 },
  {  937 * OVERSAMPLENR,  39 },
  {  966 * OVERSAMPLENR,  30 },
  {  986 * OVERSAMPLENR,  20 },
  { 1000 * OVERSAMPLENR,  10 },
  { 1010 * OVERSAMPLENR,   0 }
};
