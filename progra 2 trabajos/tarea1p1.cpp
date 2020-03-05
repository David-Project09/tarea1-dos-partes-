
#include <iostream>
#include <iostream>
#include <conio.h>

using std::cin;
using std::cout;

#include <ctime>
using namespace std;


int main()
{

	srand(time(NULL));
	int secretnumber = rand() % 10;
	int x = 0;
	cout << "select number";
	cin >> x;

	
	{
	if (x > secretnumber)
		cout << "\n secretnumber is higher:" << x;
	else
		if (x > secretnumber)
			cout << "\n secretnumber is lower" << x;

		else
			if (x = secretnumber)
				cout << "\n the number is the same... chau" << x;

	}





	system("PAUSE");
	return 0;
}


