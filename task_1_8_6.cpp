/*
�������� ��������� ��� ���������� �������������� ��������� �� ��������� 2.
 �� ���� ��������� � ������ ������ �������� ����� T, ����� ������� T ����� � �������.
 ������ ���� ������� �� ������ ������ �������������� ����� ai<109, ��� ������� ai �����
 ������� �� ��������� ������ ����� ���������� ����� p, ��� 2p?ai. �������������, ��� ai?1

. ��� ������� ������ �� ������ ���������� ����� ��������������� �������,
 ���� ��� ��� �����, ����� ���� ������������� ������� ���������� ��������� � ��������� �������.

�����������: ���������� cmath (� math.h) ������������ ���������.

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