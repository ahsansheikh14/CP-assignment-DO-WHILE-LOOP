#include<iostream>
using namespace std;
int main()
{
	int f=1, k = 1;
	int num;
	cout << "Enter the number whose factorial is needed :";
	cin >> num;
	do {
		f = f * k;
		k++;
	} while (k <= num );
	cout << " Fcatorial of number is :" << f << endl;
	return 0;
}