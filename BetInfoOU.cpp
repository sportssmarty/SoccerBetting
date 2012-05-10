/* ==========================================================
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ========================================================== */
/*
 * BetInfoOU.cpp
 *
 *  Created on: 9 Jan 2012
 *      Author: pj
 */

#include "BetInfoOU.h"
#include <iostream>
using namespace std;


BetInfo_OU::BetInfo_OU(string inpBetMarket,
string inpBetChoice, string inpHtft,
string inpOu,double inpGoals): BetInfo(inpBetMarket,inpBetChoice, inpHtft),
ou(inpOu), goals(inpGoals) {
	// TODO Auto-generated constructor stub

}

BetInfo_OU::~BetInfo_OU() {
	// TODO Auto-generated destructor stub
}

double BetInfo_OU::getPayoff(ResMap inpResMap)  {
	int calcGoals;

	if (getHtft()=="ft") {
		calcGoals=inpResMap.getHotFtG()+inpResMap.getAwtFtG();
	}
	else {
		calcGoals=inpResMap.getHotHtG()+inpResMap.getAwtHtG();
	}

	if (((calcGoals>getGoals()) && (getOu()=="o")) ||
	((calcGoals<getGoals()) && (getOu()=="u")))
	{
		return 1.0;
	}
	else
	{
		return -1.0;
	}
}

double BetInfo_OU::getGoals() const
{
    return goals;
}

string BetInfo_OU::getOu() const
{
    return ou;
}



