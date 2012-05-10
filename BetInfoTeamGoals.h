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
 * BetInfoTeamGoals.h
 *
 *  Created on: 12 Jan 2012
 *      Author: pj
 */

#ifndef BETINFOTEAMGOALS_H_
#define BETINFOTEAMGOALS_H_

#include "BetInfo.h"
#include <iostream>
using namespace std;

class BetInfo_TeamGoals : public BetInfo
{
public:
    BetInfo_TeamGoals(string, string, string, string, double, string, double);
    virtual ~BetInfo_TeamGoals();
    int getTeam1Goals() const;
    string getTeam1Ou() const;
    int getTeam2Goals() const;
    string getTeam2Ou() const;
private:
    string team1_ou;
    double team1_goals;
    string team2_ou;
    double team2_goals;
};

#endif /* BETINFOTEAMGOALS_H_ */
