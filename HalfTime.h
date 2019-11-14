void halfTime()
{
  const int hoursAHalfTimeStudent = 6;
  Semester htTCC;
  htTCC.setHoursAStudentTakes(hoursAHalfTimeStudent);
  cout << "Half Time: " << endl; 
 cout << "Cost per credit hour: " << htTCC.calculateTuition() << endl; 

// room and board for full hoursAFullTimeStudent
cout << "Room and Board: " << htTCC.calculateRoomAndBoard() << endl; 

// Full time Travel
cout << "Travel: " << htTCC.calculateTravel() << endl;

// full time Food
cout << "Food: " << htTCC.calculateFood() << endl;

// Full Time Books
cout << "Books: " << htTCC.calculateBooks() << endl;

// Total semester
cout << "Semester cost: " << htTCC.calculateSamesterCosts() << endl; 
}