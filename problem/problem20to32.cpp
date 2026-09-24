#include <iostream>
#include "fun.h"

using namespace std;
using namespace fun;

struct stDate {
	short Year;
	short Month;
	short Day;
};

stDate ReadFullDate() {
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}



void problem20To32() {
	stDate Date = ReadFullDate();


	cout << "Date: " << Date.Day << "/" << Date.Month << "/" << Date.Year;


}