#include <iostream>
using namespace std;

class TelephoneNumber {

	private:
		int AreaCode;
		int ExchangeNumber;
		int LineNumber;

	public:
		//default Constructor
		TelephoneNumber() {
			AreaCode = 876;
			ExchangeNumber = 000;
			LineNumber = 0000;
		}

		//primary constructor
		TelephoneNumber(int areaCode, int exchangeNumber, int lineNumber) {
			AreaCode = areaCode;
			ExchangeNumber = exchangeNumber;
			LineNumber = lineNumber;
		}

		//copy constructor
		TelephoneNumber(TelephoneNumber &telephoneNumber) {
			AreaCode = telephoneNumber.AreaCode;
			ExchangeNumber = telephoneNumber.ExchangeNumber;
			LineNumber = telephoneNumber.LineNumber;
		}

		//destructor
		~TelephoneNumber() {
			cout << "telephoneNumber destructor called" << endl;
		}

		//Accessors or getter
		int getAreacode() {
			return AreaCode;
		}
		int getExchangeNumber() {
			return ExchangeNumber;
		}
		int getLineNumber() {
			return LineNumber;
		}

		//mutators or setters
		void setAreacode() {
			AreaCode = AreaCode;
		}
		void ExchageNumber() {
			ExchangeNumber = ExchangeNumber;
		}
		void LineNumber() {
			LineNumber = LineNumber;
		}

		void Display() {
			cout << AreaCode << "-" << ExchageNumber << "-" << LineNumber << endl;
		}
	
};
