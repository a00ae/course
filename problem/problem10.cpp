#include <iostream>
#include "fun.h"


using namespace std;
using namespace fun;


//short NumberOfDaysFromTheBeginingOfTheYear(short day, short month, short year) {
//
//	short TotalDeas = 0;
//
//	for (int i = 0; i < month; i++) {
//		TotalDeas += NumberOfDeasInAMonth(i, year);
//	}
//
//	TotalDeas += day;
//
//	return TotalDeas;
//}


void problem10() {

	short day = ReadDay();
	short month = ReadMonth();
	short year = ReadYear();


	cout << "\nNumber of Days from the begining of the year is " 
		<< NumberOfDaysFromTheBeginingOfTheYear(day, month, year);
	
}