#include <iostream>
using namespace std;
int main()
{
	int sequence = 1;
	do {
		cout << sequence<<",";
		sequence = sequence * 2;

	} while (sequence <= 512);
}
