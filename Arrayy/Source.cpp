#include "Arr.h"
using namespace std;

int main()
{
	Array Arr1(5);
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	Array Arr2(5);
	Arr1.FillRand();
	//Arr1.SortSpad();
	Arr1.Print(); // +1
	++Arr1;
	// Arr1++;
	Arr1.Print(); // -1
	--Arr1;
	// Arr1--;
	Arr1.Print();
	Array arr2 = Arr1;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	cout << "Suma = " << long(Arr1) << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	arr2 = -Arr1;
	arr2.Print();
	Arr1.operator-();
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
	cout << "|=-=-=-=-=-DZ 03.06.2020-=-=-=-=-=|" << endl;
	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
	Arr1.MaximumNumber();	Arr1.MinimumNumber();	Arr1.Average();
	Arr1.Print();
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	cout <<"\tcout for index: " <<Arr1.operator[](1) << endl;
	Arr1.operator()(10);
	Arr1.MaximumNumber();	Arr1.MinimumNumber();	Arr1.Average();
	Arr1.Print();
	
	/*
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	Arr1.SortZrost();
	Arr1.Print();
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	Arr1.MaximumNumber();
	Arr1.MinimumNumber();
	Arr1.Average();
	Arr1.Print();
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	Arr1.DeleteNumber(12); // deletes arr[0]
	Arr1.MaximumNumber2();
	Arr1.MinimumNumber2();
	Arr1.Average();
	Arr1.Print();
	Array Arr2 = Arr1;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	Arr2.AddNumber(137);
	Arr2.MaximumNumber2();
	Arr2.MinimumNumber2();
	Arr2.Average();
	Arr2.Print();
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	*/
	system("pause");
	return 0;
}