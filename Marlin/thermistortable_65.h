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


//Thermistor lookup table based on full Steinhart-Hart equation including quadratic term.
//   1/T = A + B.ln(R) + C.ln(R)^2 + D.ln(R)^3 (ln is natural log, T in kelvin, R in kilohms.
// Coefficients:
//   A: 2.22319060E-003
//   B: 2.22223700E-004
//   C: 4.00162697E-006
//   D: 0.00000000E+000
// Load resistor: 4650.000 ohm.
// ADC 0 - 1022 with 1024 corresponding to supply voltage of rload.

const short temptable_65[][2] PROGMEM = {
   {1* OVERSAMPLENR, 560},
   {2* OVERSAMPLENR, 494},
   {3* OVERSAMPLENR, 457},
   {4* OVERSAMPLENR, 432},
   {6* OVERSAMPLENR, 398},
   {9* OVERSAMPLENR, 366},
   {11* OVERSAMPLENR, 350},
   {15* OVERSAMPLENR, 328},
   {17* OVERSAMPLENR, 319},
   {20* OVERSAMPLENR, 308},
   {22* OVERSAMPLENR, 301},
   {28* OVERSAMPLENR, 285},
   {34* OVERSAMPLENR, 273},
   {43* OVERSAMPLENR, 258},
   {55* OVERSAMPLENR, 243},
   {68* OVERSAMPLENR, 231},
   {91* OVERSAMPLENR, 214},
   {128* OVERSAMPLENR, 195},
   {168* OVERSAMPLENR, 181},
   {178* OVERSAMPLENR, 177},
   {219* OVERSAMPLENR, 166},
   {282* OVERSAMPLENR, 152},
   {352* OVERSAMPLENR, 139},
   {428* OVERSAMPLENR, 127},
   {767* OVERSAMPLENR, 79},
   {839* OVERSAMPLENR, 67},
   {916* OVERSAMPLENR, 50},
   {965* OVERSAMPLENR, 33},
   {995* OVERSAMPLENR, 16},
   {1014* OVERSAMPLENR, -7},
   {1019* OVERSAMPLENR, -21},
   {1022* OVERSAMPLENR, -40}
};
