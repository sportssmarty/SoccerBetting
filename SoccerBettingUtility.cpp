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
//============================================================================
// Name        : SoccerBettingUtility.cpp
// Author      : PJ
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <vector>
#include <string>

#include "BetInfoOU.h"
#include "BetInfo.h"
#include "ResMap.h"

#include "BetPosition.h"
#include "BetType.cpp"

using namespace std;

int main() {
	/*
	create an abstraction that allows
	multiple resMap's to be processed along
	with holding a map of all of the betInfo's

	method should receive in a list of
	the betPositions
	*/

	//typedef std::multiset<int, std::less<int>> Ims;
	//typedef map<string,Test1*> MyMap;
	//BetInfo_OU ou25u25("ou25","u25","ft","u",2.5);
	//BetType betType = Back;
	//BetPosition betPosition(10.0,2.0, &betType, &ou25u25);
	//ResMap resMap(0,0,1,1);

	vector<string> strings;
	strings.push_back("this is a string_");
	strings.push_back("this is a string__");


	vector<string>::iterator w;
	for(w = strings.begin(); w != strings.end(); w++) {
		//
	}


	//cout<<betPosition.getPositionPnL(resMap);
	return 0;
}
