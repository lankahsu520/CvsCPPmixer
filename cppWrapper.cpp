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
#include <stdio.h>
#include <string>

#include "cppHelloWorld_org.h"
#include "cppClass.h"

#include "cppWrapper.h"

int cppHelloWorld_org_wrapper(void)
{
	return cppHelloWorld_org();
}

void* createClass(char *name, int id)
{
	//std::string newname(name);

	const std::string &newname = name;
	return new Member(newname, id);
}

void freeClass(void* thiz)
{
	delete static_cast<Member*>(thiz);
}

void whoAreyou(void* thiz)
{
	static_cast<Member*>(thiz)->whoAreyou();
}