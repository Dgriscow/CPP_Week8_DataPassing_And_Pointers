#include "DataPassing.h"
#include <iostream>
using namespace std;


void DataPassing::passByValue(int number)
{
	cout << "Address of number " << &number;
	cout << "Dobuling Value: " << number*2 << endl;
}

void DataPassing::passByReference(int &number)
{

	//Technical Explanation: In Memory, the value of the address variable that was send to the function gets overriden by the final value of number.
	
	cout << "Address of number in reference func " << &number;


	//when the & symbol is used, the value that was passed to the function, when the function is done the parameter with & is send back to the variable that was used as input. 
	number = 2 * number;
	cout << "Dobuling Value: " << number << endl;
}


void DataPassing::passByPointers(int *number)
{

	cout << "Address of number in pointer func " << &number;


	*number = 2 * (*number);

	cout << "Dobuling Value: " << *number << endl;

}
