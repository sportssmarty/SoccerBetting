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
 * BetEvent.h
 *
 *  Created on: 15 Jan 2012
 *      Author: pj
 */

#ifndef BETEVENT_H_
#define BETEVENT_H_
#include <istream>
using namespace std;

class BetEvent {
public:
	BetEvent(string,string);
	virtual ~BetEvent();
    string getDesc() const;
    string getId() const;
private:
	string id;
	string desc;
};

#endif /* BETEVENT_H_ */
