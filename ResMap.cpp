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
 * ResMap.cpp
 *
 *  Created on: 9 Jan 2012
 *      Author: pj
 */

#include "ResMap.h"

ResMap::ResMap(	int inp_hot_ht_g,int inp_awt_ht_g,
		int inp_hot_ft_g,int inp_awt_ft_g):
		hot_ht_g(inp_hot_ht_g),awt_ht_g(inp_awt_ht_g),
		hot_ft_g(inp_hot_ft_g),awt_ft_g(inp_awt_ft_g) {
	// TODO Auto-generated constructor stub

}

ResMap::~ResMap() {
	// TODO Auto-generated destructor stub
}



int ResMap::getAwtFtG() const
{
    return awt_ft_g;
}

int ResMap::getAwtHtG() const
{
    return awt_ht_g;
}

int ResMap::getHotFtG() const
{
    return hot_ft_g;
}

int ResMap::getHotHtG() const
{
    return hot_ht_g;
}





