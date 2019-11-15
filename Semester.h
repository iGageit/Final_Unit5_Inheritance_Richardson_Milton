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


    void setcostPerCreditHour(int c) { costPerCreditHour = c; }
    int getcostPerCreditHour() const { return costPerCreditHour; }

    void setbookCostsPerClass(int b) { bookCostsPerClass = b; }
    int getbookCostsPerClass() const { return bookCostsPerClass; }

     void setroomAndBoardCosts(int r) { roomAndBoardCosts = r; }
    int getroomAndBoardCosts() const { return roomAndBoardCosts; }

      void setfoodCostsPerMonth(int f) { foodCostsPerMonth = f; }
    int getfoodCostsPerMonth() const { return foodCostsPerMonth; }

   void settravelCostsPerMonth(int t) { travelCostsPerMonth = t; }
    int gettravelCostsPerMonth() const { return travelCostsPerMonth; }

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