void fullTime()
{
  const int hoursAFullTimeStudent = 12;
  Semester ftTCC;
  ftTCC.setHoursAStudentTakes(hoursAFullTimeStudent);


  double answer;
  // Ask for cost per credit 
cout << "What is the Cost per credit hour? " << endl; 
cin >> answer; 
ftTCC.setcostPerCreditHour(answer);
//cout << ftTCC.getcostPerCreditHour() << endl; 



 // ask for cost for Books
 cout <<  "What is the Book Cost per Class? " << endl; 
cin >> answer; 
ftTCC.setbookCostsPerClass(answer);
//cout << ftTCC.getbookCostsPerClass() << endl; 
  
 //cout << "Books: " << ftTCC.calculateBooks() << endl;

// Total result of all input

 cout << bold_on <<  "\nFull Time: " << bold_off << endl;
// full Tuition price
  cout << "Tuition: " << ftTCC.calculateTuition() << endl; 
// room and board for full hoursAFullTimeStudent
cout << "Room and Board: " << ftTCC.calculateRoomAndBoard() << endl; 

// Full time Travel
cout << "Travel: " << ftTCC.calculateTravel() << endl;

// full time Food
cout << "Food: " << ftTCC.calculateFood() << endl;

// Full Time Books
cout << "Books: " << ftTCC.calculateBooks() << endl;

// Total semester
cout << "Semester cost: " << ftTCC.calculateSamesterCosts() << endl; 
}