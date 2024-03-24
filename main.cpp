#include<iostream>
using namespace std;
double convertToMPH(int, int);
double convertToMPH(double);
int main()
{
	int min, sec;
	cout << "Input the the pace in minutes and seconds per mile>>" << endl;
	cout << "Minute: ";
	cin >> min;
	cout << endl<< "Second :";
	cin >> sec;
	double kph = convertToMPH(convertToMPH(min, sec));
	cout << "The kph= " << kph;
	system("pause");
	return 0;
}
double convertToMPH(int min, int sec)
{
	int total_time;
	double mph;
	total_time = min * 60 + sec;
	mph = (3600 / total_time);
	return mph;
}
double convertToMPH(double mph) 
{
	double kph;
	kph = mph / 1.61;
	return kph;
}
