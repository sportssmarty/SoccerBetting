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
 * PositionProcess.h
 *
 *  Created on: 16 Jan 2012
 *      Author: pj
 */

#ifndef POSITIONPROCESS_H_
#define POSITIONPROCESS_H_
#include <iostream>
#include <map>
#include <string>

#include "BetInfo.h"
#include "ResMap.h"

using namespace std;

class PositionProcess {
public:
	PositionProcess();

	virtual ~PositionProcess();
private:
	static map<string,BetInfo*> betInfoMap;


};

#endif /* POSITIONPROCESS_H_ */
