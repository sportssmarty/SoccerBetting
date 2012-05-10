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
 * BetInfoHA.cpp
 *
 *  Created on: 12 Jan 2012
 *      Author: pj
 */

#include "BetInfoHA.h"

BetInfo_HA::BetInfo_HA(string inpBetMarket,
		string inpBetChoice, string inpHtft,
		string inpHa): BetInfo(inpBetMarket,inpBetChoice, inpHtft),
		ha(inpHa) {
	// TODO Auto-generated constructor stub

}

BetInfo_HA::~BetInfo_HA() {
	// TODO Auto-generated destructor stub
}

string BetInfo_HA::getHa() const
{
    return ha;
}

void BetInfo_HA::setHa(string ha)
{
    this->ha = ha;
}



