/*������� ������ �� ����������� ��������� �� ������ �  ������/�������. 
�������� ���������, ������� ��������� ����� �����. �� ���� ��������� �������� ����� ����� � ��������� �������: 
�� ������ ������ ���� ����� ����� T � ���������� ������, ����� ������� T �����,
 � ������ �� ������� ����� ������ ���� ��� ����� ����� ai � bi. �� ������ ��� ������ �� T ����� ����� ������� ����� ai+bi

  � ��� �������, � ������� ���� ��������� �� ����. ������, ����� �����, �������� �� �����.

� ��������� ������� ������ ����� � ������ ���������. 
��� ���������� ����������������� ����� � ������� � ������ �� ������� ��������������� ������ ����� � ������ ����� ���� ���� �� ������.*/
/*
Sample Input:

10
-735 608
-958 -783
-928 169
212 264
601 -80
-567 1
982 -552
793 951
59 688
531 73

Sample Output:

-127
-1741
-759
476
521
-566
430
1744
747
604*/

#include <iostream>
using namespace std;

int main()
{
	int T = -1;
	int a, b;
	while (T < 0)
		cin >> T;
	for (int i = 0; i < T; i++)
    {
		cin >> a >> b;
		cout << a + b << "\n";
    }

    return 0;
}

