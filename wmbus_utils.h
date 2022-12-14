/*
 Copyright (C) 2018-2020 Fredrik Öhrström (gpl-3.0-or-later)

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef WMBUS_UTILS_H
#define WMBUS_UTILS_H

#include "util.h"

namespace std
{

bool decrypt_TPL_AES_CBC_IV(vector<uchar> &frame, vector<uchar>::iterator &pos, vector<uchar> &key, uchar *iv,
                            int *num_encrypted_bytes,
                            int *num_not_encrypted_at_end);
}

#endif
