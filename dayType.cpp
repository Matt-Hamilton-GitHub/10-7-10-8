

#include "dayType.h"


//constructor implementation 
dayType::dayType(string day){
	
	_currentDay = day;
	
	};



void dayType::setDay(string day){
	_currentDay = day;
	};



string dayType::getCurrDay() const{
	return _currentDay;
	
	};

void dayType::printDay() const{
	
	cout << "Today is: " <<  _currentDay << endl;
};

string dayType::getNextDay() const{
	
	//the algorithm of this function is simple. We find the index of the current day first
	// then we add +1 to the current day
	//if the current day is Sun (index 6) we set the index to 0 (Monday)

int todayIsDay {0};
int nextDay {0};
 
 
	for (int i {0}; i < 7; i++){
		
		if(_currentDay == week[i]){
			todayIsDay = i;
		};
	};


if(todayIsDay > 6){
  nextDay = 0;
}else{
	nextDay = todayIsDay + 1;
}

return week[nextDay];		
};





string dayType::getPrevDay() const{
	
	//analogical to nextDay method, we find the index of today's day first
	//then if the index is more than 0, we substruct 1 from it.
	//If the index is  0, then we set it to 6 (the index that corresponds to Sunday, in the week array)
	
 int todayIsDay {0};
 int prevDay {0};
 

   for (int i {0}; i < 7; i++){
		
		if(_currentDay == week[i]){
			todayIsDay = i;
		};
	};

if(todayIsDay > 0){
  prevDay = todayIsDay - 1;
}else{
	prevDay = 6;
}

return week[prevDay];		

};



string dayType::addDay(int days) const{
	
	//a vasrtiable that would store a number that represents an index from 0 to 7 and corresspond to a specific day 
	int todayIsDay {0};
	
	for (int i {0}; i < 7; i++){
		
		if(_currentDay == week[i]){
			todayIsDay = i;
		}
	}
	
	//the function adds the current day's index to the number of days that the user passes to it
	//then it divides the number by 7 (number of days in a week) and returns the remaining number that represents the index of the day we need
	
	return week[(days + todayIsDay) % 7];
	
	
	};


