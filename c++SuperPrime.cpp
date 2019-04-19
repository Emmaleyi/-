#include"pch.h"
#include<iostream>
using namespace std;
int prime(int number)
{
	int flag = 1;
	for (int i = 2; i < number; i++)
	{
		if (number%i == 0) flag = 0;
	}
	return(flag);
}
int main()
{
	int a1, a2, a3, i, j, k, m = 0, n, max, s = 0;
	for (i = 100; i <= 999; i++)
	{
		a1 = i % 10;
		a2 = i / 10 % 10;
		a3 = 1 / 100;
		j = a1 + a2 + a3;
		k = a1 * a2*a3;
		n = a1 * a1 + a2 * a2 + a3 * a3;
		if (prime(i) == 1 && prime(j) == 1 && prime(k) == 1 && prime(n) == 1)
		{
			m++;
			s += i;
			max = i;
		}
	}
	std::cout << "amount=" << m << ",sum= " << s << "and max prime is" << max;
}
