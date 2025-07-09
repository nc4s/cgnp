/*
 *  ////////////    ////////////   ||||\\\\     ||||   ||||||||\\\\
 * ||||||          ||||||          |||| \\\\    ||||   ||||    ||||
 * ||||            ||||            ||||  \\\\   ||||   ||||||||////
 * ||||            ||||    \\\     ||||   \\\\  ||||   ||||
 * ||||||          ||||||   \\\    ||||    \\\\ ||||   ||||
 *  \\\\\\\\\\\\    \\\\\\\\\\\\   ||||     \\\\||||   ||||
 * 
 * 
 * This file is part of libcgnp.
 *
 * libcgnp is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libcgnp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libcgnp.  If not, see <https://www.gnu.org/licenses/>.
 * 
 * Copyright (c) 2025 Nico Locklear Cruz
 */

// Testing functionality of the library

#include <cgnp.h>
#include <stdio.h>

int main(int argc, char** argv) {
    for (int i = 1; i < argc; i++) printf("%s\n", argv[i]);
    return 0;
}