//#include <iostream>
//#include "fun.h"
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
//
//bool IsLastDayInMonth(stDate Date) {
//
//	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
//}
//
//bool IsLastMonthInYear(short Month) {
//	return (Month == 12);
//}
//
//stDate IncreaseDateByOneDay(stDate Date) {
//	//في ان كان اليوم الاخير في الشهر
//	if (IsLastDayInMonth(Date)) {
//		// حالة احرى : في حالة اخر شهر في السنة
//		if (IsLastMonthInYear(Date.Month)) {
//			// في حالة تحقق الشرط
//			Date.Month = 1;
//			Date.Day = 1;
//			Date.Year++;
//		}
//		else {
//			//في حالة فشل التحقق وكان الشهر ليس اخر السنة
//			Date.Day = 1;
//			Date.Month++;
//		}
//
//	} 
//	// في حالة فشل التتحق وكان ليس اخر يوم في الشهر
//	else {
//		
//		Date.Day++;
//	}
//
//	return Date;
//
//}
//
//
//
//
//stDate RaedFullDate() {
//	stDate Date;
//
//	Date.Day = ReadDay();
//	Date.Month = ReadMonth();
//	Date.Year = ReadYear();
//
//
//	return Date;
//}
//
//void problem16()
//{
//	stDate Date = RaedFullDate();
//
//	Date = IncreaseDateByOneDay(Date);
//
//	cout << "\nDate after adding one day is:" << Date.Day << "/" << Date.Month << "/" << Date.Year;
//
//
//
//
//
//}