#include "Input_Validation_Extended.h"
#include "include.h"


class Semester
{
  private:
  //systems assumptions constants
  //static const variables keep their value even after multiple calls
    static const int hoursPerClass = 3; 
    static const int monthsInOneSemester = 4;
    static const int semestersInAYear = 3; 
    //user changeable settings (need: setters and getters)
    int hoursTheStudentTakes; 
    int hoursInTheDegree; 
    string schoolName; 
    double costPerCreditHour; 
    double bookCostsPerClass;
    double roomAndBoardCosts; 
    double foodCostsPerMonth; 
    double travelCostsPerMonth; 
  public:
    Semester() //default constructor
    {
        //user changeable settings default values
        hoursTheStudentTakes = 0; //ft 12, pt 9, ht 6
        hoursInTheDegree = 60; 
        schoolName = "TCC"; 
        costPerCreditHour = 64.00; 
        bookCostsPerClass = 100.00;
        roomAndBoardCosts = 1000.00; 
        foodCostsPerMonth = 150.00; 
        travelCostsPerMonth = 90.00; 
    } 
    //paramerterize constructor with initizlier list
    Semester(int hTST, int hID, string sN, double cPCH, double bCPC, double rABC, double fCPM, double tCPM) : 
    hoursTheStudentTakes(hTST), hoursInTheDegree(hID),
    schoolName(sN), costPerCreditHour(cPCH),
    bookCostsPerClass(bCPC), roomAndBoardCosts(rABC),
    foodCostsPerMonth(fCPM), travelCostsPerMonth(tCPM)
    { }
    void setHoursAStudentTakes(int h) { hoursTheStudentTakes = h; }
    int getHoursAStudentTakes() const { return hoursTheStudentTakes; }
    //write setters and getters for the other non constant member varibles 

    //calculate tution
double calculateTuition()
{
  return (hoursTheStudentTakes * costPerCreditHour);
}
    //calculate room and room and room and Board
    double calculateRoomAndBoard()
    {
      return (monthsInOneSemester * roomAndBoardCosts);
    }

    //caculate travel per month
    double calculateTravel()
      {
        return (monthsInOneSemester * travelCostsPerMonth);
      }
    

    //calculate food
    double calculateFood()
    {
      return (monthsInOneSemester * foodCostsPerMonth);
    }

    //calcualte books
double calculateBooks()
{
  return ((hoursTheStudentTakes / 3)* bookCostsPerClass);
}
    //calcualte and return semester costs 
double calculateSamesterCosts()
{
  return (calculateTuition() + calculateRoomAndBoard() + calculateTravel() + calculateFood() + calculateBooks() );
}
   

    // calculate total tution 
    double calculateTotalCostPerSemester()
      {
        return (calculateTuition() + calculateRoomAndBoard() );
      }
    
};
int main() 
{
    //local assumptions for user input
    const int hoursAFullTimeStudent = 12;
    const int hoursAPartTimeStudent = 9;
    const int hoursAHalfTimeStudent = 6;
   
   //instances of the 3 types of semesters
   Semester ftTCC; //call default constructor
   Semester ptTCC; //calls default constuctor 
   Semester htTCC; //call default constructor

   //set hours a student a student takes per semester types
   ftTCC.setHoursAStudentTakes(hoursAFullTimeStudent);
   ptTCC.setHoursAStudentTakes(hoursAPartTimeStudent);
   htTCC.setHoursAStudentTakes(hoursAHalfTimeStudent);

   //allow the user to populate the paramerterized constuctor
   //ask for the values, and pass them as arguments. 
   //print the results 
  Semester ftCollege(hoursAFullTimeStudent,60,"TCU", 1565.00,100.00,1000.00, 150.00, 90.00);
  Semester ptCollege(hoursAPartTimeStudent, 60,"TCU", 1565.00,100.00,1000.00, 150.00, 90.00);
  Semester htCollege(hoursAHalfTimeStudent, 60,"TCU", 1565.00,100.00,1000.00, 150.00, 90.00);
   //pass Semester Objects by reference to display summary results via function 

// calcualte and display tuition for each object in the program
   cout << ftTCC.calculateTuition() << endl; 
   cout << ptTCC.calculateTuition() << endl;
   cout << htTCC.calculateTuition() << endl;

   cout << ftCollege.calculateTuition() << endl; 
   cout << ptCollege.calculateTuition() << endl;
   cout << htCollege.calculateTuition() << endl;

// calcualte and display room and board cost for each object in the program 

// room and board for full hoursAFullTimeStudent
cout << " Full Time Room and Board " << ftTCC.calculateRoomAndBoard() << endl; 
// room and board for full hoursAPartTimeStudent
cout << ptTCC.calculateRoomAndBoard() << endl; 
// room and board for full hoursAHalfTimeStudent
cout << htTCC.calculateRoomAndBoard() << endl; 


// cout << ftCollege.calculateRoomAndBoard() << endl; 
// cout << ptCollege.calculateRoomAndBoard() << endl; 
// cout << htCollege.calculateRoomAndBoard() << endl; 

cout << " Full Time semester cost " << ftTCC.calculateSamesterCosts() << endl; 


// calculate the respective cost per semseter for each student type.
cout << "\n" << endl; 
cout << ftTCC.calculateTotalCostPerSemester() << endl;
  return 0; 
}