#include<iostream>
using namespace std;
void input(int&, int&);
void conversion(int&, int&, char&);
void ouput(int&, int&, char&);
void CleanBuffer(void);
int main()
{
	int hour;
	int min;
	char am_pm;
	char again;
	do
	{
		input(hour, min);
		conversion(hour, min, am_pm);
		ouput(hour, min, am_pm);
		do
		{
			cout << "Do yo want to scand again?Enter no(n) or yes(y)" << endl;
			cin >> again;
		} while (again!='y'&& again!='n');
	} while (again=='y');
	system("pause");
	return 0;
}
void input(int&hour,int&min)
{
	do
	{
		cout << "Enter the hour" << endl;
		cin >> hour;
	} while (hour>24  || hour < 0);
	do
	{
		cout << "Enter the min" << endl;
		cin >> min;
	} while (min >= 60 || min < 0);
	
}
void conversion(int& hour, int& min, char& am_pm)
{
	if (hour>12)
	{
		hour = hour%12;
		am_pm = 'p';
	}
	else
	{
		am_pm = 'a';
	}
}
void ouput(int& hour, int& min, char& am_pm)
{
	cout << "It's " << hour << ":" << min ;
	if (am_pm=='p')
	{
		cout << " PM now" << endl << endl;
	}
	else
	{
		cout << " AM now" << endl << endl;
	}
}
void CleanBuffer()
{
	char skip;
	do
	{
		cin >> skip;
	} while (skip!='\n');

}