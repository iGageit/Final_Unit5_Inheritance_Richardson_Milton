void fullTime()
{
  const int hoursAFullTimeStudent = 12;
  Semester ftTCC;
  ftTCC.setHoursAStudentTakes(hoursAFullTimeStudent);


  double answer;
cout << "What is the Cost per credit hour? " << endl; 
cin >> answer; 
ftTCC.setcostPerCreditHour(answer);
cout << ftTCC.getcostPerCreditHour() << endl; 
  cout << "Full Time: " << endl; 
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