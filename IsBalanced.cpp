#include "Header.h"


string isBalanced(string s)
{
	string sStack;

	for (int i = 0; i < s.length(); i++)
	{

		if (s[i] == '(')
		{
			sStack.push_back(s[i]);
		}
		else if (s[i] == '{')
		{
			sStack.push_back(s[i]);
		}
		else if (s[i] == '[')
		{
			sStack.push_back(s[i]);
		}
		else if (s[i] == ')')
		{
			if (sStack[sStack.length() - 1] == '(')
				sStack.pop_back();
			else
				sStack.push_back(s[i]);
		}
		else if (s[i] == ']')
		{
			if (sStack[sStack.length() - 1] == '[')
				sStack.pop_back();
			else
				sStack.push_back(s[i]);
		}
		else if (s[i] == '}')
		{
			if (sStack[sStack.length() - 1] == '{')
				sStack.pop_back();
			else
				sStack.push_back(s[i]);
		}

	}
	if (sStack.empty())
		return "YES";
	else
		return "NO";
};