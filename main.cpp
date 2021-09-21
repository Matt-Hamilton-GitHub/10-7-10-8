
#include <iostream>
#include <string>
#include <array>

using namespace std;


class dayType{
	
	private:
	    string _currentDay;
         
    public: 
	   
	    string week[7] {"Mon", "Tue", "Wen","Thu","Fri","Sat","Sun"};
		
	    // constructors
	    dayType(){_currentDay = week[0];}; //default constructor
			
	    dayType(string day);
		
	   // deconstructors 
//	   ~dayType(){};
	   
	    // mutators
        void setDay(string day){_currentDay = day;};
		
        //accessors
		string getCurrDay() const{return _currentDay;};
		string getNextDay() const;
		string getPrevDay() const;
		
	    //custom methods
		string calcDay(int days) const;
		void printDay() const;
		
};

dayType::dayType(string day){
	
	_currentDay = day;}


void dayType::printDay() const{
	
	cout << _currentDay << endl;
};

string dayType::getNextDay() const{
	
//	if(_currentDay == "Sun" || _currentDay == "SUN"){return "Mon";}
//	else if(_currentDay == "Mon" || _currentDay == "MON"){ return "Tue";}
//	else if(_currentDay == "Tue" || _currentDay == "TUE"){ return "Wen";}
//	else if(_currentDay == "Wen" || _currentDay == "WEN"){ return "Thu";}
//	else if(_currentDay == "Thu" || _currentDay == "THU"){ return "Fri";}
//	else if(_currentDay == "Fri" || _currentDay == "FRI"){ return "Sat";}
//	else if(_currentDay == "Sat" || _currentDay == "SAT"){ return "Sun";}

int todayIsDay {0};
 int nextDay {0};
 
	for (int i {0}; i < 7; i++){
		
		if(_currentDay == week[i]){
			todayIsDay = i;
		}
	}

nextDay = todayIsDay + 1;

if(nextDay >= 6){
	nextDay = nextDay % 7;
}
return week[nextDay];		

};


string dayType::getPrevDay() const{
	
	if(_currentDay == "Sun" || _currentDay == "SUN"){return "Sat";}
	else if(_currentDay == "Mon" || _currentDay == "MON"){ return "Sun";}
	else if(_currentDay == "Tue" || _currentDay == "TUE"){ return "Mon";}
	else if(_currentDay == "Wen" || _currentDay == "WEN"){ return "Tue";}
	else if(_currentDay == "Thu" || _currentDay == "THU"){ return "Wen";}
	else if(_currentDay == "Fri" || _currentDay == "FRI"){ return "Thu";}
	else if(_currentDay == "Sat" || _currentDay == "SAT"){ return "Fri";}
		
       return "Error occured";
};

string dayType::calcDay(int days) const{
	
	//a vasrtiable that would store a number that represents an index from 0 to 7 and corresspond to a specific day 
	//where 0 is mon, 1 is tue, and so on
	
	int todayIsDay {0};
	
	for (int i {0}; i < 7; i++){
		
		if(_currentDay == week[i]){
			todayIsDay = i;
		}
	}
	
	//the function adds the current day's index to the number of days the user passes to it and returns the number, 
	
	return week[(days + todayIsDay) % 7];
	
	
	};




int main() {
	
 	dayType newDay("Tue");
//	newDay.printDay();
//	cout << newDay.getCurrDay() << endl;
//	
//	cout << newDay.getNextDay() << endl;
//	newDay.setDay("Thu");	
//	cout << newDay.getNextDay() << endl;
//	cout << newDay.getPrevDay() << endl;
	
	cout << "Today is " << newDay.getCurrDay() << endl;
	cout << "Next day is " << newDay.getNextDay() << endl;
	cout << "Previous day is " << newDay.getPrevDay() << endl;
	cout <<"in 2 days, it's gonna be: " << newDay.calcDay(2) << endl;
	cout <<"in 20 days, it's gonna be: " << newDay.calcDay(10000 ) << endl;
	 
	system("pause");
	return 0;
	};







