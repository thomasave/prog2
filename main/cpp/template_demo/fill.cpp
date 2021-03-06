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
 *  Copyright 2012, Jan Broeckhove, CoMP/UA.
 */
/**
 * @file
 * Fill container with random values, using STL.
 */

// BEGIN_SNIPPET{FullSource}
#include "RandInt.h"
#include "Range.h"
#include <algorithm>

int main()
{
        std::vector<double> v(10);
        RandInt r(1, 20);
        std::generate(v.begin(), v.end(), r);
        std::cout << make_range(v) << std::endl;
        return 0;
}
// END_SNIPPET{FullSource}
