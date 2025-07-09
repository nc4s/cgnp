/*
 *  ////////////    ////////////   ||||\\\\     ||||   ||||||||\\\\
 * ||||||          ||||||          |||| \\\\    ||||   ||||    ||||
 * ||||            ||||            ||||  \\\\   ||||   ||||||||////
 * ||||            ||||    \\\     ||||   \\\\  ||||   ||||
 * ||||||          ||||||   \\\    ||||    \\\\ ||||   ||||
 *  \\\\\\\\\\\\    \\\\\\\\\\\\   ||||     \\\\||||   ||||
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

// Show the uses of CGNP
// NOTE: compile this program from the "examples" dir, with the `make` command

#include <cgnp.h> // We can do this because of the -I../include arg in example/Makefile

#include <stdio.h>

int main(int argc, char** argv) {
    if (argc < 2) fprintf(stderr, "Usage: %s MESSAGE...\n", argv[0]);
    printf("%d\n", foo(99));
}