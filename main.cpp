#include<iostream>

using namespace std;

int main()
{
	int OnetoHundreadSum = 0;
	int TripleOnetoHundreadSum = 0;

	for (int i = 1; i <= 100; i++)
	{
		OnetoHundreadSum += i;
		if (i % 3 == 0)
		{
			TripleOnetoHundreadSum += i;
		}
	}
	cout << "1 ~ 100���� �� : " << OnetoHundreadSum << endl;
	cout << "1 ~ 100���� �����ϴ� 3�� ��� �� : " << TripleOnetoHundreadSum << endl;

	return 0;
}