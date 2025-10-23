#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void File(string a)
{
	ofstream file("C:\\Users\\Пользователь\\OneDrive\\Desktop\\kubsh_history.txt", ios::app);
	if (file.is_open())
	{
		file << a<<endl;
		file.close();
	}
}
int main()
{
	cout << unitbuf;
	cerr << unitbuf;
	string input;
	while (true)
	{
		cout << "$ ";
		getline(cin, input);
		string result = "$ " + input;
		File(result);
		if (input=="\\q")
		{
			cout << "End" << endl;
<<<<<<< HEAD
=======
			File("End");
>>>>>>> a247c3c (The fourth task)
			break;
		}
	}
	
}
