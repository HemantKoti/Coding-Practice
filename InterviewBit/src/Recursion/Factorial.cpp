/*
 * Factorial.cpp
 *
 *  Created on: Mar 4, 2018
 *      Author: HemantKo
 */

#include "../../include/interviewbit.h"

int factorial(int n)
{
	return n == 0 ? 1 : n * factorial(n - 1);
}
