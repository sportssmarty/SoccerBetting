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
 * BetInfo.h
 *
 *  Created on: 9 Jan 2012
 *      Author: pj
 */

#ifndef BETINFO_H_
#define BETINFO_H_
#include "ResMap.h"

#include <iostream>
using namespace std;

class BetInfo {

public:
	BetInfo(string,string,string);
	virtual double getPayoff(ResMap)=0;
	virtual ~BetInfo();
    string getBetChoice() const;
    string getBetKey() const;
    string getBetMarket() const;
    string getHtft() const;

private:
	string betKey;
	string betMarket;
	string betChoice;
	string htft;
};

#endif /* BETINFO_H_ */
