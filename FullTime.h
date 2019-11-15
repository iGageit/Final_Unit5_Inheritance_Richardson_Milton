void fullTime()
{
color = "\x1b[" + to_string(94) + ";1m";
  cout << color << bold_on <<  "\nFull Time Students " << bold_off << reset << endl;


  const int hoursAFullTimeStudent = 12;
  Semester ftTCC;
  ftTCC.setHoursAStudentTakes(hoursAFullTimeStudent);


  double answer;
  // Ask for cost per credit 
cout << "What is the Cost per credit hour? " << endl; 
answer = validateDouble(answer);
ftTCC.setcostPerCreditHour(answer);
//cout << ftTCC.getcostPerCreditHour() << endl; 


 // ask for cost for Books
 cout <<  "What is the Book Cost per Class? " << endl; 
answer = validateDouble(answer);
ftTCC.setbookCostsPerClass(answer);
//cout << ftTCC.getbookCostsPerClass() << endl; 

// Ask for the Room and board.
   cout <<  "What is the Room and Board Cost Per Month? " << endl; 
answer = validateDouble(answer);
ftTCC.setroomAndBoardCosts(answer);

// Ask for the Food Cost Per Month
   cout <<  "What is the Food Cost Per Month? " << endl; 
answer = validateDouble(answer);
ftTCC.setfoodCostsPerMonth(answer);

//ask for the Travel time
   cout <<  "What is the Travel Costs Per Month? " << endl; 
answer = validateDouble(answer);
ftTCC.settravelCostsPerMonth(answer);




// Total result of all input
color = "\x1b[" + to_string(94) + ";1m";
 cout << bold_on << color << "\nFull Time Students " << bold_off << reset << endl;
 color = "\x1b[" + to_string(92) + ";1m";
// full Tuition price
  cout << color << "Tuition: " << ftTCC.calculateTuition() << endl; 

  // Full Time Books
cout << "Books: " << ftTCC.calculateBooks() << endl;

// room and board for full hoursAFullTimeStudent
cout << "Room and Board: " << ftTCC.calculateRoomAndBoard() << endl; 

// Full time Travel
cout << "Travel: " << ftTCC.calculateTravel() << endl;

// full time Food
cout << "Food: " << ftTCC.calculateFood() << endl;



// Total semester
cout << "Semester cost: " << ftTCC.calculateSamesterCosts() << reset << endl; 


}