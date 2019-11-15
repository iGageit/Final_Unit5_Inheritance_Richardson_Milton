void partTime()
{
  cout << bold_on <<  "\nPart Time Students " << bold_off << endl;
  
  const int hoursAPartTimeStudent = 9;
  Semester ptTCC;
  ptTCC.setHoursAStudentTakes(hoursAPartTimeStudent);


  double answer;
  // Ask for cost per credit 
cout << "What is the Cost per credit hour? " << endl; 
cin >> answer; 
ptTCC.setcostPerCreditHour(answer);
//cout << ftTCC.getcostPerCreditHour() << endl; 


 // ask for cost for Books
 cout <<  "What is the Book Cost per Class? " << endl; 
cin >> answer; 
ptTCC.setbookCostsPerClass(answer);
//cout << ftTCC.getbookCostsPerClass() << endl; 

// Ask for the Room and board.
   cout <<  "What is the Room and Board Cost Per Month? " << endl; 
cin >> answer; 
ptTCC.setroomAndBoardCosts(answer);

// Ask for the Food Cost Per Month
   cout <<  "What is the Food Cost Per Month? " << endl; 
cin >> answer; 
ptTCC.setfoodCostsPerMonth(answer);

//ask for the Travel time
   cout <<  "What is the Travel Costs Per Month? " << endl; 
cin >> answer; 
ptTCC.settravelCostsPerMonth(answer);


// Total result of all input

 cout << bold_on <<  "\nPart Time Students " << bold_off << endl;
// full Tuition price
  cout << "Tuition: " << ptTCC.calculateTuition() << endl; 

  // Full Time Books
cout << "Books: " << ptTCC.calculateBooks() << endl;

// room and board for full hoursAFullTimeStudent
cout << "Room and Board: " << ptTCC.calculateRoomAndBoard() << endl; 

// Full time Travel
cout << "Travel: " << ptTCC.calculateTravel() << endl;

// full time Food
cout << "Food: " << ptTCC.calculateFood() << endl;

//ask for the Travel time
   cout <<  "What is the Food Cost Per Month? " << endl; 
cin >> answer; 
ptTCC.settravelCostsPerMonth(answer);



// Total semester
cout << "Semester cost: " << ptTCC.calculateSamesterCosts() << endl;  
}