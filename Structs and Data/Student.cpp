#include "Student.h"
#include <iostream>

void relevInfo(Student student1)
{
	
	std::cout << "Student ID: " << student1.ID << std::endl;
	std::cout << "Course currently in: " << student1.Course << std::endl;
	std::cout << "Latest exam score: " << student1.Score << std::endl;
	
}
