#include<iostream>
#include<math.h>
using namespace std;
void find(int[4][6]);
int
main()
{
	int reviewer[4][6] = {
	{3,1,5,2,1,5},
	{4,2,1,4,2,4},
	{3,1,2,4,4,1},
	{5,1,4,2,4,2},
	};
	find(reviewer);
	
}
void find(int reviewer[4][6])
{
	int your_point[6];
	int min=0;
	int min_distant=0;
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter the point of " << 100 + i << "(if don't want to enter enter -1)"<<endl;
		cin >> your_point[i];
	}
	for (int i = 0; i < 4; i++)
	{
		double distant = 0;
		for (int j = 0; j < 6; j++) 
		{
			if (your_point[j] != -1)
			{
				distant += pow(your_point[j] - reviewer[i][j],2) ;
			}
		}
		if (distant < min_distant)
		{
			min = i;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		if (your_point[i] == -1)
		{
			cout << "Maybe you woudle give " << 100 + i << " movie " << reviewer[min][i]<<endl;
		}
	}
}