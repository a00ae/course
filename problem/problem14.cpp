//#include <iostream>
//#include "fun.h"
//
//
//using namespace std;
//using namespace fun;
//
//struct stDate {
//	short Year;
//	short Month;
//	short Day;
//};
//
//bool isDateOneEqillDatetow(stDate Date1, stDate Date2) {
//
//	return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
//}
//
//stDate ReadFullDate() {
//	stDate Date;
//
//	Date.Day = ReadDay();
//	Date.Month = ReadMonth();
//	Date.Year = ReadYear();
//
//	return Date;
//}
//
//
//void problem14() {
//
//	stDate Date1 = ReadFullDate();
//	stDate Date2 = ReadFullDate();
//
//	if (isDateOneEqillDatetow(Date1, Date2)) {
//		cout << "\nYes, Date1 is Equal To Date2.";
//	}
//	else {
//		cout << "\n\nNo, Date1 is NOT Equal To Date2.";
//	}
//}