#include<iostream>
#include<string>
#include<fstream>
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
		if (input.find("echo") == 0)
		{
			string soob = input.substr(4);
			cout << soob << endl;
		}
		else
		{
			cout << "Command not found!"<<endl;
		}
	}
	
}
