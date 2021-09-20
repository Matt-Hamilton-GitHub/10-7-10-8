
#include <iostream>
#include <string>

using namespace std;

//enum days {MONDAY, TUESDAY, WENSDAY, THURSDAY, FRIDAY, STURDAY, SUNDAY} newDay;

class dayType{
	
	private:
	    string _currentDay;
    
public:
	
	// constructors
	    dayType(); //default constructor
	    dayType(string day);
		
	// mutators
        void setDay(string day);
   
   
		string getDay() const;
		string getNextDay() const;
		string getPrevDay() const;
		
	//additional methods
		string clacDate() const;
		void printDay() const;
		
};



int main() {
	
	
	cout << "The file Runs"  << endl;
	
	
	system("pause");
	return 0;
	}







