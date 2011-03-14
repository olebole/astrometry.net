/*
 This file is part of the Astrometry.net suite.
 Copyright 2010 Dustin Lang.

 The Astrometry.net suite is free software; you can redistribute
 it and/or modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation, version 2.

 The Astrometry.net suite is distributed in the hope that it will be
 useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with the Astrometry.net suite ; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
*/

#ifndef AN_MULTIINDEX_H
#define AN_MULTIINDEX_H

#include "index.h"
#include "bl.h"
#include "starkd.h"

struct multiindex {
	pl* inds;
	startree_t* starkd;
};
typedef struct multiindex multiindex_t;

multiindex_t* multiindex_open(const char* skdtfn, const sl* indfns);

void multiindex_close(multiindex_t* mi);

// How many indices?
int multiindex_n(const multiindex_t* mi);
// Get an index
index_t* multiindex_get(const multiindex_t* mi, int i);

#endif