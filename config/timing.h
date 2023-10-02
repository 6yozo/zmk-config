// Copyright 2023 Gyozo Gaspar
//
// This file is part of Lottie layout. The Lottie layout is free
// software: you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation, either version 3 of the License, or (at your option)
// any later version.  The Lottie layout is distributed in the hope
// that it will be useful, but WITHOUT ANY WARRANTY; without even the
// implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
// PURPOSE. See the GNU General Public License for more details.  You
// should have received a copy of the GNU General Public License along
// with Lottie layout. If not, see <https://www.gnu.org/licenses/>.

#pragma once

// wait-ms and tap-ms value
// ---
//
// Executing an accented macro should not take longer than tapping a dedicated
// key at maximum speed(300 WPM).
//
// 38 WPM -> 188 CPM, so 300 WPM -> (* 188 (/ 300 38)) = 1316 CPM =
// (/ 1316 60) CPS = 21 CPS
//
// Hitting keys close to 50 ms / keypress is humanly possible.

#define TIMEOUT_MS  29
#define WAIT_MS     13
#define TAP_MS      13
