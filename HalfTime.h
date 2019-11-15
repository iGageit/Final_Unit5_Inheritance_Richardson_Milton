void halfTime()
{

  cout << bold_on <<  "\nHalf Time Students " << bold_off << endl;

  const int hoursAHalfTimeStudent = 6;
  Semester htTCC;
  htTCC.setHoursAStudentTakes(hoursAHalfTimeStudent);


  double answer;
  // Ask for cost per credit 
cout << "What is the Cost per credit hour? " << endl; 
cin >> answer; 
htTCC.setcostPerCreditHour(answer);
//cout << ftTCC.getcostPerCreditHour() << endl; 


 // ask for cost for Books
 cout <<  "What is the Book Cost per Class? " << endl; 
cin >> answer; 
htTCC.setbookCostsPerClass(answer);
//cout << ftTCC.getbookCostsPerClass() << endl; 

// Ask for the Room and board.
   cout <<  "What is the Room and Board Cost Per Month? " << endl; 
cin >> answer; 
htTCC.setroomAndBoardCosts(answer);

// Ask for the Food Cost Per Month
   cout <<  "What is the Food Cost Per Month? " << endl; 
cin >> answer; 
htTCC.setfoodCostsPerMonth(answer);

//ask for the Travel time
   cout <<  "What is the Travel Costs Per Month? " << endl; 
cin >> answer; 
htTCC.settravelCostsPerMonth(answer);


// Total result of all input

 cout << bold_on <<  "\nHalf Time Students " << bold_off << endl;
// full Tuition price
  cout << "Tuition: " << htTCC.calculateTuition() << endl; 

  // Full Time Books
cout << "Books: " << htTCC.calculateBooks() << endl;

// room and board for full hoursAFullTimeStudent
cout << "Room and Board: " << htTCC.calculateRoomAndBoard() << endl; 

// Full time Travel
cout << "Travel: " << htTCC.calculateTravel() << endl;

// full time Food
cout << "Food: " << htTCC.calculateFood() << endl;



// Total semester
cout << "Semester cost: " << htTCC.calculateSamesterCosts() << endl; 
}