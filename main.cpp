#include<iostream>

using namespace std;

int main()
{
	int OnetoHundreadSum = 0;
	int TripleOnetoHundreadSum = 0;

	for (int i = 1; i <= 100; i++)
	{
		OnetoHundreadSum += i;
	}
	cout << "1 ~ 100까지 합 : " << OnetoHundreadSum << endl;

	for (int i = 3; i <= 100; i += 3)
	{
		TripleOnetoHundreadSum += i;
	}
	cout << "1 ~ 100까지 존재하는 3의 배수 합 : " << TripleOnetoHundreadSum << endl;

	return 0;
}