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
 * BetPosition.h
 *
 *  Created on: 15 Jan 2012
 *      Author: pj
 */

#ifndef BETPOSITION_H_
#define BETPOSITION_H_
#include <iostream>
#include "BetInfo.h"
#include "BetEvent.h"
#include "ResMap.h"
#include "BetSource.h"
#include "User.h"
#include "BetType.cpp"
using namespace std;

class BetPosition {
public:
	BetPosition(BetSource*, BetEvent*,
			double,double,BetType*,
			string,User*);
	BetPosition(double,double,BetType*,
			string);
	BetPosition(double,double,BetType*,
			BetInfo*);

	//there should be a list of ResMap's sent in also

	double getPositionPnL(ResMap);
	virtual ~BetPosition();
private:
	BetSource* betSource;
	BetEvent* betEvent;
	double betAmount;
	double betOdds;
	BetType* betType;
	string betInfoStr;
	BetInfo* betInfo;
	User* user;
};

#endif /* BETPOSITION_H_ */
