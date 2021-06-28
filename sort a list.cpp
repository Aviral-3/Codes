#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	
	list<string> mylist{ "hi", "my", "name" , "is", "aviral"};

	mylist.sort();

	for (auto it = mylist.begin(); it != mylist.end(); ++it)
		cout << ' ' << *it;
	return 0;
}
