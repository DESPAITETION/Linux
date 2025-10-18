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
		if (!getline(cin, input))
		{
			break;
		}
	}
	
}