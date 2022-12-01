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
#include <iostream>

#include "utilx9.h"

#include "cppHelloWorld.h"
#include "cppClass.h"

using namespace std;

int main(int argc, char** argv)
{
	cppHelloWorld();

	Member lanka("lanka", 1);
	lanka.whoAreyou();


	// call C
	unsigned char payload[] = { 0xFF,0xFE,0x7B,0x22,0x75,0x73,0x65,0x72,0x22,0x3A,0x22,0x6C,0x61,0x6E,0x6B,0x61,0x22,0x7D,0xFF,0xFF };
	unsigned short cksum = buf_cksum((unsigned short *)payload, 20);
	DBG_ER_LN("(cksum: %d)", cksum);
	cksum = buff_crc16((const unsigned char *)payload, 20, 0xFFFF);
	DBG_ER_LN("(cksum: %d)", cksum);

	return 0;
}