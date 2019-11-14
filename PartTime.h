void partTime()
{
  const int hoursAPartTimeStudent = 9;
  Semester ptTCC;
  ptTCC.setHoursAStudentTakes(hoursAPartTimeStudent);
  cout << "Part Time: " << endl; 
 cout << "Cost per credit hour: " << ptTCC.calculateTuition() << endl; 

// room and board for full hoursAFullTimeStudent
cout << "Room and Board: " << ptTCC.calculateRoomAndBoard() << endl; 

// Full time Travel
cout << "Travel: " << ptTCC.calculateTravel() << endl;

// full time Food
cout << "Food: " << ptTCC.calculateFood() << endl;

// Full Time Books
cout << "Books: " << ptTCC.calculateBooks() << endl;

// Total semester
cout << "Semester cost: " << ptTCC.calculateSamesterCosts() << endl; 
}