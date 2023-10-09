#include "DataPassing.h"
#include <iostream>
using namespace std;

int main() {

	int temp = -1;
	DataPassing pass;


	cout << "Enter A Number: ";

	cin >> temp;

	cout << "Mem address of temp before value " << &temp << endl;

	pass.passByValue(temp);

	cout << "User Entered Number " << temp << endl;

	cout << "Mem add of temp before refTest " << &temp << endl;


	pass.passByReference(temp);

	cout << "User Entered Number After Passby Reference " << temp << endl;


	//giving the variable a & means im sending its memory refrence, im sending not the variable to the function, but the actual 
	//ADDRESS OF TEMP variable to the function. 

	cout << "Mem add of temp before pointerTest " << &temp << endl;

	pass.passByPointers(&temp);

	cout << "User Entered Number After Passby Pointer " << &temp << endl;


	return 0;
}