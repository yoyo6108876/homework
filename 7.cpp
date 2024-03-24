#include<iostream>
using namespace std;
void count(int[6], int[6]);
void output(int[6]);
int
main()
{
	int index[6];
	int record[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> index[i];
	}
	count(index, record);
	output(record);
	system("pause");
	return 0;
}
void count(int index[6], int record[6])
{
	
	for (int j = 0; j < 6; j++)
	{
		record[j] = 0;
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (index[i]==j)
			{
				record[j]++;
			}

		}
	}
}
void output(int record[6])
{
	for (int i = 0; i < 6; i++)
	{
		cout << record[i] << " grade(s) of " << i << endl;
	}
}