

#include "Date.h"
#include "TelephoneNumber.h"

class OfficeWorker {
	private:
        int Id;
        string FirstName;
        string LastName;
        Date DateEmployed; //defining compostion
        TelephoneNumber CellNumber; //defining composistion

    public:
        //default constructor

        OfficeWorker() :DateEmployed(), CellNumber()
        {
            Id = 0000;
            FirstName = "";
            LastName = "";
        }

        //primary constructor
        OfficeWorker(int id, string firstName, string lastName, int day,int month, int year, int areaCode, int exchangeNumber, int lineNumber):DateEmployed(day, month, year),CellNumber(areaCode, exchangeNumber, lineNumber)
        {
            Id = id;
            FirstName = firstName;
            LastName = lastName;
        }

        //copy constructor
        OfficeWorker(OfficeWorker &officeWorker):DateEmployed(officeWorker.DateEmployed), CellNumber(officeWorker.CellNumber)
        {
            Id = officeWorker.Id;
            FirstName = officeWorker.FirstName;
            LastName = officeWorker.LastName;
        }
        
        //Accessor or getter
        int getId() {
            return Id;
        }
        string getFirstName() {
            return FirstName;
        }
        string getLastName() {
            return LastName;
        }
        Date getDateEmployed() {
            return DateEmployed;
        }
        TelephoneNumber getCellNumber() {
            return CellNumber;
        }

        //mutator or setter
        void setId() {
            Id = Id;
        }
        void setFirstName() {
            FirstName= FirstName;
        }
        void setLastName() {
            LastName = LastName;
        }
        void SetDateEmployed(Date dateEmployed)
        {
            DateEmployed = dateEmployed;
        }
        void SetCellNumber(TelephoneNumber cellNumber)
        {
            CellNumber = cellNumber;
        }

};
