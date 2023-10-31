#include <iostream >
using namespace std;
int main()
{
	float num1, num2, calculated;
	char op, end;
	do
	{
		cout << "Enter the fist number and operator and then second number  :";
		cin >> num1 >> op >> num2;
		switch (op)
		{
			{
		case '+':
			calculated = num1 + num2;

			break; 
			}
			{
		case '-':
			calculated = num1 - num2;

			break; 
			}
			{
		case '*':
			calculated = num1 * num2;
			break; 
			}
			{
		case'/':
			calculated = num1 / num2;


			break;
			}
		default:
			cout << " Invalid operator :";
			break;
		}	
		cout << "Answer = " <<calculated  << endl;
		
		cout << "Do another (y/n)?";
		cin >> end ;
		cout << endl;
	} while (end == 'Y' || end == 'y');
	return 0;
	
	
}