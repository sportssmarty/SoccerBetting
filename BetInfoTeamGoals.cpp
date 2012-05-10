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
 * BetInfoTeamGoals.cpp
 *
 *  Created on: 12 Jan 2012
 *      Author: pj
 */

#include "BetInfoTeamGoals.h"

BetInfo_TeamGoals::BetInfo_TeamGoals(string inpBetMarket,
		string inpBetChoice, string inpHtft,
		string inpTeam1Ou,double inpTeam1Goals,
		string inpTeam2Ou,double inpTeam2Goals): BetInfo(inpBetMarket,inpBetChoice, inpHtft),
		team1_ou(inpTeam1Ou), team1_goals(inpTeam1Goals),
		team2_ou(inpTeam2Ou), team2_goals(inpTeam2Goals) {
	// TODO Auto-generated constructor stub

}

BetInfo_TeamGoals::~BetInfo_TeamGoals() {
	// TODO Auto-generated destructor stub
}

int BetInfo_TeamGoals::getTeam1Goals() const
{
    return team1_goals;
}

string BetInfo_TeamGoals::getTeam1Ou() const
{
    return team1_ou;
}

int BetInfo_TeamGoals::getTeam2Goals() const
{
    return team2_goals;
}

string BetInfo_TeamGoals::getTeam2Ou() const
{
    return team2_ou;
}



