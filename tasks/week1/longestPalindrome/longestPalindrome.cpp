#include<string>
#include"longestPalindrome.h"
using namespace std;
string longestPalindrome(string& strs)
{
	// Return the longest palindromic substring of input string
	// Or if the string has no palindromic substring, return an empty string: \"\"
	//
	// param strs:
	// 	input string
	// type strs:
	// 	string&
	// type return:
	// 	string

	// left: the left index
	// right: the right index
	int left = 0, right = 0;

	// maxIndex: the maximum index of the input string
	int maxIndex = strs.length() - 1;

	// index: the index of the first character of the longest string
	// length: the length of the longest string
	int index = 0;
	int length = 0;

	for (int i = 0; i <= maxIndex; i++)
	{
		left = (i > 0 && strs[i - 1 == strs[i]])? (i - 1) : i;
		right = (i < maxIndex && strs[i + 1] == strs[i])? (i + 1) : i;
		for (;
		     (left >= 0) && (right <= maxIndex) &&
		     (strs[left] == strs[right]);
		     left--, right++){;}

		if ((right - left > 2) && (right - left - 1 > length))
		{
			index = left + 1;
			length = right - left - 1;
		}
	}
	if (length == 0)
	{
		return "";
	}
	return strs.substr(index, length);
}