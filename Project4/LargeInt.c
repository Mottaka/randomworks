#include <stddef.h>
#include <memory.h>
#include <iostream>
#include "LargeInt.h"

/*
LargeInt::LargeInt(){
	sign = zero;
	num = new char[1];
	len = 1;
	num[0] = (char)0;
}

LargeInt::LargeInt(long long a){
	if(a == 0)
	{
		sign = zero;
	}
	else if (a > 0)
	{ 
		sign = positive;
	}
	else
	{
		sign = negative;
	}
	if (a < 0)
	{ 
	a = -a;
	num = new char [20];
	len = 0;
	}
	while(a > 0){
		num[len++] = a %10;
		a/=10;
	}

friend ostream& operator<<(ostream& out, const LargeInt& a)
{
	for(size_t i = len; i > 0; i--)
	{
		out << num[i-1];
	}
	return out;
}

friend int AbsoluteCompare(const LongInt& a, const LongInt& b)
	{
	if(a.len > b.len)
	{
	return 1;
	}
	else if(a.len < b.len)
	{
	return -1;
	}
	for(size_t = len; i > 0; i--)
	{
	return 0;
	}

CompareWithSign(const LargeInt& a, const LargeInt& b)
	{
	if(a.sign == zero && b.sign == zero){
		return 0;
	}
	if(a.sign >= zero && b.sign == negative)
	{
		return 1;
	}
	if(a.sign <= zero && b.sign == positive)
	{
	return -1;
	}
	if(a.sign == positive)
	{
		return AbsoluteCompare(a,b);
	}
	}
LargeInt AbsolutePlus(const LargeInt& a, const LargeInt& b)
{

}
add size_t& len;
}

LargeInt&  LargeInt::operator==(const LargeInt& a, const LargeInt& b)
{
	if(this -> sign == zero)
	{
		*this == b;
		return *this;
	}
	else if(b.sign == zero)
	{
		return *this;
	}
	if(this -> sign == positive && b.sign == positive)
	{
		return positive;
	}
	if(this -> sign == negative && b.sign positive)
	{
		return negative;	
	}
}
	LargeInt Temp += right input;
	return input;
}

*/