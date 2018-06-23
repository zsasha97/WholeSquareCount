#include "stdafx.h"
#include "Solution.hpp"
#include <cmath>


Solution::Solution()
{
}


Solution::~Solution()
{
}

int Solution::solution(int A, int B)
{
	int result = 0;
	if (B < 0) 
	{
		return result;
	}
	if (A < 0) 
	{
		A = 0;
	}
	result = (int)sqrt(B) - ceil(sqrt(A)) + 1;
	return result;
}
