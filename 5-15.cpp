#include<iostream>
using namespace std;
#include<time.h>
bool check(int[], int[]);
int 
main()
{
	int PIN[10];
	int real_pin[5] = {1,3,5,7,2};
	int num_pin[5];
	int NUM[10];
	srand(time(NULL));
	cout << "Enter the password >>" << endl;
	cout << "PIN: ";
	for (int i = 0; i < 10; i++)
	{
		PIN[i] = i;
		cout << i <<" ";
	}
	cout << endl;
	cout << "NUM: ";
	for (int i = 0; i < 10; i++)
	{
		NUM[i] = rand() % 3 + 1;
		cout << NUM[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		real_pin[i] = NUM[real_pin[i]];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> num_pin[i];
	}
	
	if (check(real_pin, num_pin))
	{
		cout << "The account is correct.";
	}
	else
	{
		cout << "The account is not correct.";
	}
}
bool check(int real[5], int num[5])
{
	for (int i = 0; i < 5; i++)
	{
		if (num[i] != real[i])
		{
			return false;
		}	
	}
	return true;
}
