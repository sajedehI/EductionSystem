
#include "DoubleMajorStudent.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <map>
DoubleMajorStudent::DoubleMajorStudent(const std::string &studentId, std::string first, std::string last,
                                       double workHours, std::vector<std::string> passedCourses,
                                       std::map<std::string, double> currentSemesterCourses, std::string major2) :
        Student( (std::move(studentId)), (std::move(first)), (std::move(last)), workHours,
                 (std::move(passedCourses)), (std::move(currentSemesterCourses)) ) , major2{std::move(major2)}
{}

double DoubleMajorStudent::calculateSalary() const{
    return 6500 * getWorkHours();
}



