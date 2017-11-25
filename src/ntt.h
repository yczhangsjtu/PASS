/*
 * CPASSREF/ntt.h
 *
 *  Copyright 2013 John M. Schanck
 *
 *  This file is part of CPASSREF.
 *
 *  CPASSREF is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  CPASSREF is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with CPASSREF.  If not, see <http://www.gnu.org/licenses/>.
*/

/* Dependencies:
      constants.h pass_types.h
*/

#ifndef CPASSREF_EVAL_H_
#define CPASSREF_EVAL_H_

#define NTT_LEN (PASS_N-1)

#if 0
static const int64 perm[NTT_LEN+1] = {
#include PASS_PERMUTATION
    , 1
  };

int
ntt_setup();

int
ntt_cleanup();
#endif

int
ntt(int64 *wS, const int64 *w);

#endif
