

#include "dayType.h"


void testIt();// function that tests the possible combinations

int main() {

	testIt();
	 
	system("pause");
	return 0;
	};



void testIt(){
	
	dayType newDay("Mon");
	newDay.printDay();
	cout << "Next day is " << newDay.getNextDay() << endl;
	cout << "Previous day is " << newDay.getPrevDay() << endl;
	cout << "The day after 2 days is: " << newDay.addDay(2) << endl;
	cout << "The day after 14 days is: " << newDay.addDay(14) << endl;
	
	cout << "-------------------------------------------------------- \n";
	
	newDay.setDay("Tue");
	cout << "Today is " << newDay.getCurrDay() << endl;
	cout << "Next day is " << newDay.getNextDay() << endl;
	cout << "Previous day is " << newDay.getPrevDay() << endl;
	cout << "The day after 2 days is: " << newDay.addDay(2) << endl;
	cout <<"The day after 7 days is: " << newDay.addDay(7) << endl;
	
	cout << "-------------------------------------------------------- \n";
	
	newDay.setDay("Wen");
	newDay.printDay();
	cout << "Next day is " << newDay.getNextDay() << endl;
	cout << "Previous day is " << newDay.getPrevDay() << endl;
	cout << "The day after 2 days is: " << newDay.addDay(2) << endl;
	cout << "The day after 21 days is: " << newDay.addDay(21) << endl;
	
	cout << "-------------------------------------------------------- \n";
	
	newDay.setDay("Thu");
	cout << "Today is " << newDay.getCurrDay() << endl;
	cout << "Next day is " << newDay.getNextDay() << endl;
	cout << "Previous day is " << newDay.getPrevDay() << endl;
	cout <<"The day after 2 days is: " << newDay.addDay(2) << endl;
	cout <<"The day after 8 days is: " << newDay.addDay(8) << endl;
	
	cout << "-------------------------------------------------------- \n";
	
	newDay.setDay("Fri");
	cout << "Today is " << newDay.getCurrDay() << endl;
	cout << "Next day is " << newDay.getNextDay() << endl;
	cout << "Previous day is " << newDay.getPrevDay() << endl;
	cout <<"The day after 2 days is: " << newDay.addDay(2) << endl;
	cout <<"The day after 3 days is: " << newDay.addDay(3) << endl;
	
	cout << "-------------------------------------------------------- \n";
	
	newDay.setDay("Sat");
	cout << "Today is " << newDay.getCurrDay() << endl;
	cout << "Next day is " << newDay.getNextDay() << endl;
	cout << "Previous day is " << newDay.getPrevDay() << endl;
	cout <<"The day after 2 days is: " << newDay.addDay(2) << endl;
	cout <<"The day after 15 days is: " << newDay.addDay(15) << endl;
	
	cout << "-------------------------------------------------------- \n";
	
	newDay.setDay("Sun");
	cout << "Today is " << newDay.getCurrDay() << endl;
	cout << "Next day is " << newDay.getNextDay() << endl;
	cout << "Previous day is " << newDay.getPrevDay() << endl;
	cout <<"The day after 2 days is: " << newDay.addDay(2) << endl;
	cout <<"The day after 17 days is: " << newDay.addDay(17) << endl;
	};



