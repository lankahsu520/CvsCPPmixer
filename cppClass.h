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
#ifndef __CPP_CLASS_H__
#define __CPP_CLASS_H__

//#include <string>

using namespace std;

//******************************************************************************
//** include **
//******************************************************************************


//******************************************************************************
//** define **
//******************************************************************************
class Member
{
	private:
		int m_age;

	public:
		int m_id;
		string m_name;

		Member(string, int);
		void whoAreyou(void);
};


//******************************************************************************
//** function **
//******************************************************************************

#endif
