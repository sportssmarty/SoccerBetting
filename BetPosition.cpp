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
 * BetPosition.cpp
 *
 *  Created on: 15 Jan 2012
 *      Author: pj
 */

#include "BetPosition.h"

BetPosition::BetPosition(double inpBetAmount,
	double inpBetOdds,
	BetType *inpBetType,
	string inpBetInfoStr):
	betAmount(inpBetAmount),
	betOdds(inpBetOdds),
	betType(inpBetType),
	betInfoStr(inpBetInfoStr) {
	// TODO Auto-generated constructor stub

}

BetPosition::BetPosition(double inpBetAmount,
	double inpBetOdds,
	BetType *inpBetType,
	BetInfo *inpBetInfo):
	betAmount(inpBetAmount),
	betOdds(inpBetOdds),
	betType(inpBetType),
	betInfo(inpBetInfo) {
	// TODO Auto-generated constructor stub

}

double BetPosition::getPositionPnL(ResMap inpResMap) {
	if (betInfo->getPayoff(inpResMap)==1)
		return betAmount * (1-betOdds);
	else if (betInfo->getPayoff(inpResMap)==-1)
		return betAmount * -1;
	else if (betInfo->getPayoff(inpResMap)==0)
		return 0;
	else
		return 0;

}

BetPosition::~BetPosition() {
	// TODO Auto-generated destructor stub
}

