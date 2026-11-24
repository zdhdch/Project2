#include <iostream>

using namespace std;

int main()
{
	cout << "hello" << endl;

	int Gold[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 , 0 };

	for (int i = 0; i < 10; ++i)
	{
		Gold[i] = 101;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << Gold[1] << endl;
	}

	

	return 0;
}