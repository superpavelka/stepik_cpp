/* �������� ����������� ������� ���������� ����������� ������ �������� ���� ������������� ����� ����� 
(Greatest Common Divisor, GCD). ��� ����� �������������� ���������� ����������:

    GCD(a,b)=GCD(b,amodb)


GCD(0,a)=a

GCD(a,b)=GCD(b,a)


���������� � ����������: � ������ ������� ��������� ������������ �������. 
�� ������ �������� ����� ��������������� �������, ���� ��� ��� �����. ������� main ���������� �� �����. */

#include <iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
	int modulo = a > b ? a % b : b % a;
	if (!modulo)
		return a < b ? a : b;
	else
		a > b ? gcd(modulo, b) : gcd(a, modulo);
}