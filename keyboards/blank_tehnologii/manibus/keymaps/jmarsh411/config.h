/* Copyright 2021 SamuraiKek
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define EE_HANDS
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 3
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_WHEEL_MAX_SPEED 10
#define MOUSEKEY_WHEEL_TIME_TO_MAX 30

// place overrides here

// makes space followed by shift always work as shift instead of repeating space
#define QUICK_TAP_TERM 0
// makes a very fast shift followed by a keypress always shift instead of space
// The distinction between this and PERMISSIVE_HOLD is that PERMISSIVE_HOLD
// only becomes Hold if you press AND release another key.
// HOLD_ON_OTHER_KEY_PRESS will become Hold if you simple press another key at
// the same time as the Mod-Tap key
#define HOLD_ON_OTHER_KEY_PRESS
