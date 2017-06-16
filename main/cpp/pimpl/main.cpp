/*
 *  This file is part of the gobelijn software.
 *  Gobelijn is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or any later
 *  version. Gobelijn is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *  or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for details. You should have received
 *  a copy of the GNU General Public License along with the software. If not,
 *  see <http://www.gnu.org/licenses/>.
 *
 *  Copyright 2016, Jan Broeckhove.
 */
/**
 * @file.
 * Main for pimpl demo.
 */
#include "memory-pool.h"

#include <iostream>

using namespace Pimpl;

int main()
{
	// Create a memory pool, and use it to round-trip an integer.
	MemoryPool pool(sizeof(int));
	int* ptr = pool.Allocate<int>();
	*ptr = 10;
	std::cout << *ptr << std::endl;
}
