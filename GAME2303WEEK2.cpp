/*
* Adam Marshall
* GAME2303
* Week 2 Assignment
* September 12, 2023
*/

#include <iostream>
#include <string>
using namespace std;

 void division(int a, int b)
{
	int n = 1000;

	for (int i = 0; i < n; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout << i << "\n";
		}
	}
}

void reverse(string a)
{
	string str = a;
	int i;

	for (int i = str.length() - 1; i >= 0; i--)
		cout << str[i];
}

void remove(string a)
{
	string str = a;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			str[i] = '\0';
		}
	}

	cout << "\n" << str << "\n";
}

int main(void)
{
	int num1 = 5;
	int num2 = 8;
	
	string str1 = "hello world";

	string str2 = "the cake is a lie";


	division(num1, num2);
	reverse(str1);
	remove(str2);

	return 0;
}