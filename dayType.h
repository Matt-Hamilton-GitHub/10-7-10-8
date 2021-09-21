#pragma once

#include <iostream>
#include <string>
#include <array>
#include "dayType.h"


using namespace std;
class dayType{
	
	private:
	    //the variable below holds the current day name 
	    string _currentDay;
         
    public: 
	   
	   // the array below is public and it helps accessors and custom methods to find the correct day
	   //every day has an index from 0 to 6, such as Monday is 0, Tuesday is 1, and so on
	    string week[7] {"Mon", "Tue", "Wen","Thu","Fri","Sat","Sun"};
		
		
		
	    // constructors
	    dayType(){_currentDay = week[0];}; //default constructor that sets the current day to week[0] which is monday
		dayType(string day); //constrauctor that sets _currentDay to a value that user passes to it
   
	    // mutators
        void setDay(string day);//Set the day
		
        //accessor
		
		string getCurrDay() const;//return the current day
		
		
//***** the definitions of the functions *****
		
		string getNextDay() const;//Return the next day
		string getPrevDay() const;//Return the previous day
		
		
	    //custom methods
		string addDay(int days) const;//Calculate and return the day by adding certain days to the current day. 
		void printDay() const; //Print the day
	
		
};