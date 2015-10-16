#include <iostream>
#include "student.h"
#include "Course.h"
#include "Faculty.h"
#include "Section.h"
//#include "Class2_Section.cpp"
//#include "Class2_Courses.cpp"

#include <vector>
using namespace std;
 int main() {
	 cout << "welcome to my first project" << endl;

	 Student* st1 = new Student("Jack", 1234);
	 Course* c1 = new Course("CS_C++_Programming", 1234);
	 Faculty* f1 = new Faculty("Izzat alsmadi", 7777);
	 f1->PrintDetails();
      Section* s1 = new Section(22322);
      s1->PrintDetails();
      bool test=s1->RegisterStudentbyID(st1->getStudentID());
      s1->PrintDetails();
     //vector<Student> sarray(size);
     //sarray[0]=st1;
     //sarray[1]=st2;



     return 0;
 }
