/*
Напишите программу для вычисления целочисленного логарифма по основанию 2.
 На вход программе в первой строке подается число T, далее следует T строк с тестами.
 Каждый тест состоит из одного целого положительного числа ai<109, для каждого ai нужно
 вывести на отдельной строке такое наибольшее число p, что 2p?ai. Гарантируется, что ai?1

. При решении задачи вы можете определять любые вспомогательные функции,
 если они вам нужны, более того рекомендуется вынести вычисление логарифма в отдельную функцию.

Ограничения: библиотеку cmath (и math.h) использовать запрещено.

Sample Input:

5
59218
50960
42043
42817
9998

Sample Output:

15
15
15
15
13

*/
#include <iostream>
using namespace std;

int getPow(int value)
{
	if (value == 1)
		return 0;
	int c = 2;
	int tempValue = 2;
	while (value > tempValue)
	{
		tempValue *= 2;
		c++;
	}
	if (value == tempValue)
		return c - 1;
	else
		return c - 2;
}

int main()
{
	int T = -1;
	int value;
	while (T < 0)
		cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> value;
		cout << getPow(value) << "\n";
	}

	return 0;
}