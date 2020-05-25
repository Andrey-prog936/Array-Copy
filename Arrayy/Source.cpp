#include <iostream>
#include "Arr.h"
using namespace std;



int main()
{
	Array Arr1(5);
	Arr1.FillRand();
	Arr1.SortZrost();
	Arr1.SortSpad();
	Arr1.MaximumNumber();
	Arr1.MinimumNumber();
	Arr1.Seredne();
	Array Arr2 = Arr1;

	Arr1.Print(); // PRINT
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	Arr2.AddNumber(79);
	Arr2.Print();
	

	system("pause");
	return 0;
}