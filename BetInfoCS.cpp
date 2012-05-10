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
 * BetInfoCS.cpp
 *
 *  Created on: 12 Jan 2012
 *      Author: pj
 */

#include "BetInfoCS.h"

BetInfo_CS::BetInfo_CS(string inpBetMarket,
	string inpBetChoice, string inpHtft,
	int inpGoals1,int inpGoals2,
	bool inpGreaterThanType): BetInfo(inpBetMarket,inpBetChoice, inpHtft),
	goals1(inpGoals1), goals2(inpGoals2),
	greaterThanType(inpGreaterThanType){
	// TODO Auto-generated constructor stub

}

BetInfo_CS::~BetInfo_CS() {
	// TODO Auto-generated destructor stub
}

int BetInfo_CS::getGoals1() const
{
    return goals1;
}

int BetInfo_CS::getGoals2() const
{
    return goals2;
}

bool BetInfo_CS::isGreaterThanType() const
{
    return greaterThanType;
}



