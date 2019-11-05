/* Напишите рекурсивную функцию вычисления наибольшего общего делителя двух положительных целых чисел 
(Greatest Common Divisor, GCD). Для этого воспользуйтесь следующими свойствами:

    GCD(a,b)=GCD(b,amodb)


GCD(0,a)=a

GCD(a,b)=GCD(b,a)


Требования к реализации: в данном задании запрещено пользоваться циклами. 
Вы можете заводить любые вспомогательные функции, если они вам нужны. Функцию main определять не нужно. */

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