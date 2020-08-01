#include "LeafMenu.h"

using namespace std;

LeafMenu::LeafMenu(std::string name, Menu* parent)
    : Menu{move(name), parent} {}

void LeafMenu:: showSubMenus() const {}

void LeafMenu::run() {
    setCurrentMenu(parent);

    if(name == "Show This Semester Courses"){

    }

    else if(name == "Take Course"){
        string ID;
        cout << "Enter student number: ";
        cin >> ID;
        string course;
        cout << "Enter Course Name: ";
        cin >> course;
        controller.takeCourse(ID, course);
    }

    else if(name == "Drop Course"){
        string ID;
        cout << "Enter student number: ";
        cin >> ID;
        string course;
        cout << "Enter Course Name: ";
        cin >> course;
        controller.dropCourse(ID, course);
    }

    else if(name == "Show Student Courses In Current Semester"){

    }


    else if(name == "Calculate Student Salary"){
        string ID;
        cout << "Enter student number: ";
        cin >> ID;
        string first;
        cout << "Enter First Name: ";
        cin >> first;
        string last;
        cout << "Enter Last Name: ";
        cin >> last;
        double wH;
        cout << "Enter Work Hourse: ";
        cin >> wH;
        controller.salary(ID, first, last , wH);
    }

    else if(name == "Show Professor Courses In Current Semester"){

    }

    else if(name == "Submit Grade"){

    }

    else if(name == "Calculate Professor Salary"){

    }

    else if(name == "Add Professor"){

    }

    else if(name == "Show Professors"){

    }

    else if(name == "Add Student"){
        string ID;
        cout << "Enter student number: ";
        cin >> ID;
        string first;
        cout << "Enter First Name: ";
        cin >> first;
        string last;
        cout << "Enter Last Name: ";
        cin >> last;
        controller.addStudent(ID, first, last);
    }

    else if(name == "Show Students"){

    }

    else if(name == "Add Course"){

    }

    else if(name == "Show All Courses"){

    }

    else if(name == "Read Members From File"){
        string mokhafaf;
        cout<<"Enter P or S or D:";
        cin >> mokhafaf;
        CommandsFromFileMenu::readMembers(mokhafaf);
    }

    else if(name == "Calculate Total Salary"){

    }

    else{
        throw invalid_argument("This Menu hase not been defined!!");
    }
}
