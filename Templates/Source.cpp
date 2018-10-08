//wtf
template <typename T>
T Minz(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

//Max
//DESCRIPTION: Returns the higher of two values.
//	INPUT : Two template arguments(a, b).
//	OUTPUT : The higher of the two values a and b.

template <typename T>
T Max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}

template <>
char Minz(char a, char b)
{
	char letA = a;
	char letB = b;

	if (a > 64 && a < 91)
	{
		letA += 32;
	}
	if (b > 64 && b < 91)
	{
		letB += 32;
	}

	if (letA < letB)
	{
		return a;
	}
	else
		return b;
}

//Clamp
//DESCRIPTION: Constrains a value within the range of two other values.
//	INPUT : Three template arguments(min, max, val).
//	OUTPUT : The value of the val constrained between min and max.

template <typename T>
T Clamp(T min, T max, T val)
{
	if (val < min)
		return min;
	else if (val > max)
		return max;
	return val;
}

int main()
{
	char result = Minz('d', 'E');


}

//Exercise 1: create the following template functions
//Min
//DESCRIPTION: Returns the lower of two values.
//INPUT : Two template arguments(a, b).
//OUTPUT : The lower of the two values a and b.



