#include <iostream >
using namespace std;
int main()
{
	int num, i=0, con[50];
	cout << "Enter the number whose octal is required:";
	cin >> num;
	do {
		con[i] = num % 8;
		num= num / 8;
		i++;
	} while (num >= 1);
	for (i = i - 1; i >= 0; i--)
	{
		cout << con[i] << " ";
	}
	
	
	return 0;
}