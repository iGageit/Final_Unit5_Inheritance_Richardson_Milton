void partTime()
{
  color = "\x1b[" + to_string(94) + ";1m";
  cout << color << bold_on <<  "\nPart Time Students " << bold_off << reset << endl;
  
  const int hoursAPartTimeStudent = 9;
  Semester ptTCC;
  ptTCC.setHoursAStudentTakes(hoursAPartTimeStudent);


  double answer;
  // Ask for cost per credit 
cout << "What is the Cost per credit hour? " << endl; 
answer = validateDouble(answer);
ptTCC.setcostPerCreditHour(answer);
//cout << ftTCC.getcostPerCreditHour() << endl; 


 // ask for cost for Books
 cout <<  "What is the Book Cost per Class? " << endl; 
answer = validateDouble(answer);
ptTCC.setbookCostsPerClass(answer);
//cout << ftTCC.getbookCostsPerClass() << endl; 

// Ask for the Room and board.
   cout <<  "What is the Room and Board Cost Per Month? " << endl; 
answer = validateDouble(answer);
ptTCC.setroomAndBoardCosts(answer);

// Ask for the Food Cost Per Month
   cout <<  "What is the Food Cost Per Month? " << endl; 
answer = validateDouble(answer);
ptTCC.setfoodCostsPerMonth(answer);

//ask for the Travel time
   cout <<  "What is the Travel Costs Per Month? " << endl; 
answer = validateDouble(answer);
ptTCC.settravelCostsPerMonth(answer);


// Total result of all input
color = "\x1b[" + to_string(94) + ";1m";
 cout << color << bold_on <<  "\nPart Time Students " << bold_off << reset << endl;
// full Tuition price
color = "\x1b[" + to_string(92) + ";1m";
  cout << color << "Tuition: " << ptTCC.calculateTuition() << endl; 

  // Full Time Books
cout << "Books: " << ptTCC.calculateBooks() << endl;

// room and board for full hoursAFullTimeStudent
cout << "Room and Board: " << ptTCC.calculateRoomAndBoard() << endl; 

// Full time Travel
cout << "Travel: " << ptTCC.calculateTravel() << endl;

// full time Food
cout << "Food: " << ptTCC.calculateFood() << endl;




// Total semester
cout << "Semester cost: " << ptTCC.calculateSamesterCosts() << reset << endl;  
}