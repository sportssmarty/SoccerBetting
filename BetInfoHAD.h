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
 * BetInfoHAD.h
 *
 *  Created on: 12 Jan 2012
 *      Author: pj
 */

#ifndef BETINFOHAD_H_
#define BETINFOHAD_H_
#include <iostream>

using namespace std;

#include "BetInfo.h"

class BetInfo_HAD: public BetInfo {
public:
	BetInfo_HAD(string,string,string,string);
	virtual ~BetInfo_HAD();
    string getHad() const;
private:
	string had;
};

#endif /* BETINFOHAD_H_ */
