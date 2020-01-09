#include <iostream>
#include <cmath>
int fib(int n);
int sumOfDigits(int n);
int recStrlen(const char*);
int reverseHelper(int n, int& count) {
	if (n < 10)
	{
		++count;
		return n;
	}
	//std::cout << n % 10;
	return (n % 10) * (int)pow(10,count) + 
		reverseHelper(n / 10, ++count);
}
int reverse(int n) {
	int count = 0;
	return reverseHelper(n, count);
}

int counterNumber(int num) {
	return num < 10 ? 1 : 1 + counterNumber(num / 10);
}

int reverSimple(int num) {
	if (num < 10) {
		return num;
	}

	return (num % 10) * pow(10, counterNumber(num) - 1)
		+ reverSimple(num / 10);
}

bool isEqual(const char* str1, const char* str2) {
	if (*str1 == '\0' && *str2 != '\0'
		|| *str1 != '\0' && *str2 == '\0') {
		return false;
	}

	if (*str1 == '\0' && *str2 == '\0') {
		return true;
	}
/*
	if (*str1 != *str2) {
		return false;
	}*/

	//return true && isEqual(str1 + 1, str2 + 1); // ++str1, ++str2
	 return *str1 == *str2 && isEqual(str1 + 1, str2 + 1); // ++str1, ++str2
}



int main()
{
	int n = 50;
	//std::cout << fib(n);
	//std::cout << sumOfDigits(145);
	char str[] = "asd";
	//std::cout << recStrlen(str);
	//std::cout << reverse(156);

	//std::cout << reverSimple(156);
	std::cout << std::boolalpha << isEqual("", "");

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
