#include <iostream>
#include "Arr.h"
using namespace std;



int main()
{
	Array Arr1(5);
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	Arr1.FillRand();
	Arr1.SortSpad();
	Arr1.Print();
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	Arr1.SortZrost();
	Arr1.Print();
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	Arr1.MaximumNumber();
	Arr1.MinimumNumber();
	Arr1.Average(); 
	Arr1.Print();
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	Arr1.DeleteNumber(2); // deletes cell number one [1]
	Arr1.MaximumNumber2();
	Arr1.MinimumNumber2();
	Arr1.Average();
	Arr1.Print(); 
	Array Arr2 = Arr1;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	Arr2.AddNumber(137);
	Arr2.MaximumNumber2();
	Arr2.MinimumNumber2();
	Arr2.Average();
	Arr2.Print();
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	
	

	system("pause");
	return 0;
}