#include <iostream>
using namespace std;

class Date
{
	private:
		int Day;
		int Month;
		int Year;

	public:
		//default constructor
		Date() {
			Day = 1;
			Month = 1;
			Year = 2000;
		}

		//primary Constructor
		Date(int day, int month, int year ) {

			Day = day;
			Month = month;
			year = year;
		}

		//copy constructor
		Date(Date& date) {
			Day = date.Day;
			Month = date.Month;
			Year = date.Year;
		}

		//destructor 
		~Date() {
			cout << "destructor call" << endl;
		}

		//accessor or getters
		int getDay() {
			return Day;
		}
		int getMonth() {
			return Month;
		}
		int getYear() {
			return Year;
		}

		//mutators or setter
		void setDay(int day) {
			Day = day;
		}
		
		void setMonth(int month) {
			Month = month;

		}
		void setYear(int year) {
			Year = year;

		}

		void Display() {
			cout << Day << "/" << Month << "/" << endl;

		}

};
