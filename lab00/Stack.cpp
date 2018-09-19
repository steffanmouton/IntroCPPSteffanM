#include "Stack.h"

bool Stack::Push(Hero* hero)
{
	mData[mCount++] = hero;
	return 1;
}

bool Stack::Pop()
{
	mData[mCount--] = nullptr;
	return 1;
}

Hero Stack::Top()
{
	return  *mData[mCount-1];
}