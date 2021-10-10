#include <iostream>
#include <array>

using namespace std;
using std::cout;

int main()
{
	array<int, 10> myIntArray;
	int arraySize = myIntArray.size();

	// Filling up array
	for (int i = 0; i < myIntArray.size();  i++) //this for loop has 3 elements: 1. declare the iterator and set to 0. 2. set its range: less than 10. 3: increment it
		
	{
		myIntArray[i] = i*2;
		
		cout << myIntArray[i] << endl;	
	}

	cout << endl;
	for (int element : myIntArray)
	{
		cout << element << endl;
	}

	cout <<endl << arraySize << endl;
	return 0;
}
