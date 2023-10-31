#include <iostream>
using namespace std;
int main()
{
	int num = 7, i = 0, sequence;
	do {
	 sequence = num + i;
	 cout << sequence << ",";
	 i+=7;

	} while (sequence < 98);
	return 0;
}