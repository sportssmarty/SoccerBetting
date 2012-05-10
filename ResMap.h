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
 * ResMap.h
 *
 *  Created on: 9 Jan 2012
 *      Author: pj
 */

#ifndef RESMAP_H_
#define RESMAP_H_
#include <iostream>
using namespace std;

class ResMap {
public:
	ResMap(int,int,int,int);
	virtual ~ResMap();
    int getAwtFtG() const;
    int getAwtHtG() const;
    int getHotFtG() const;
    int getHotHtG() const;
private:
    int hot_ht_g;
    int awt_ht_g;
    int hot_ft_g;
    int awt_ft_g;
};

#endif /* RESMAP_H_ */
