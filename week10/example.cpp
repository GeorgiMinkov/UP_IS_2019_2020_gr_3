#include <iostream>
int fib(int n);
int sumOfDigits(int n);
int recStrlen(const char*);
int main()
{
	int n = 50;
	//std::cout << fib(n);
	//std::cout << sumOfDigits(145);
	char str[] = "asd";
	std::cout << recStrlen(str);
}
// abc\0
// 1 + rec( bc\0)
// 1  + rec( c\0)
// 1 + rec( \0)== 0
// 1 + 1
// 1 + 2
// 3
int recStrlen(const char* str) {
	if( *str == '\0') 
	{
		return 0;
	}

	return 1 + recStrlen(++str);
}

int sumOfDigits(int n) {
	if (n < 10)
	{
		return n;
	}

	return n % 10 + sumOfDigits(n / 10);
}
// 145
// 5 + sum( 14)
// 4 + sum( 1)
// 4 + 1
//5 + 4 + 1
int fib(int n) {
	if (n == 1 || n == 2) 
	{
		return 1;
	}

	return fib(n - 1) + fib(n - 2);
}
