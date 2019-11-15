#include "Input_Validation_Extended.h"
#include "include.h"
#include "Semester.h"
#include "FullTime.h"
#include "PartTime.h"
#include "HalfTime.h"



int main() 
{
  int option = 0;
  int counter = 0;
   char Exit = 0 ;
  do
  {

color = "\x1b[" + to_string(93) + ";1m";
  cout << color << "\nWhat Student are you? \n" << reset << endl; 
  cout << "1. Full Time " << endl; 
  cout << "2. Part Time " << endl; 
  cout << "3. Half Time " << endl;
option = validateInt(option);


  if (option == 1) {
		fullTime();
		} else if (option == 2) {
			partTime();
		} else if (option == 3) {
		halfTime();
    } 
    else {
			cout << "\nError Something went wrong!" << endl;
	option = validateInt(option);
		}

color = "\x1b[" + to_string(96) + ";1m";
cout << color << "\nWould you like to start over? ";
    cout << "Click any button to Repeat or E to Exit: " << reset ;
    cin >> Exit;
    cout << "\033[2J\033[1;1H"; //Clear Screen / Refresh
    counter++;//counts program loops/runs 
  }while(Exit != 'e' && option != 'E'); 
cout << "\033[2J\033[1;1H"; 
    return 0; 
}


// get input
// double answer;
// cout << "How many hours? " << endl; 
// cin >> answer; 
// ftTCC.setHoursAStudentTakes(answer);
// cout << ftTCC.getHoursAStudentTakes() << endl; 

   //allow the user to populate the paramerterized constuctor
   //ask for the values, and pass them as arguments. 
   //print the results 
  // Semester ftCollege(hoursAFullTimeStudent,60,"TCU", 1565.00,100.00,1000.00, 150.00, 90.00);
  // Semester ptCollege(hoursAPartTimeStudent, 60,"TCU", 1565.00,100.00,1000.00, 150.00, 90.00);
  // Semester htCollege(hoursAHalfTimeStudent, 60,"TCU", 1565.00,100.00,1000.00, 150.00, 90.00);
   //pass Semester Objects by reference to display summary results via function 