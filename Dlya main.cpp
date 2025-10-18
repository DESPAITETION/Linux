#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << unitbuf;
	cerr << unitbuf;
	string input;
	while (true)
	{
		cout << "$ ";
		getline(cin, input);
		if (input == "\\q")
		{
			cout << "End" << endl;
		}

	}
	
}