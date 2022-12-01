/***************************************************************************
 * Copyright (C) 2017 - 2020, Lanka Hsu, <lankahsu@gmail.com>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/
#ifndef __CPP_WRAPPER_H__
#define __CPP_WRAPPER_H__

#ifdef __cplusplus
extern "C" {
#endif

//******************************************************************************
//** include **
//******************************************************************************


//******************************************************************************
//** define **
//******************************************************************************
void* createClass(char *name, int id);
void freeClass(void* thiz);
void whoAreyou(void* thiz);

//******************************************************************************
//** function **
//******************************************************************************


#ifdef __cplusplus
}
#endif

#endif
