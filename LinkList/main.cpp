//
//  main.cpp
//  LinkList
//
//  Created by Eddie on 3/17/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#include <iostream>
#include "StudentLinkList.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    StudentLinkList *studentList = new StudentLinkList();
    
    
    studentList->addStudent(new StudentData("idrees","1"));
    studentList->addStudent(new StudentData("idrees","2"));
    studentList->addStudent(new StudentData("idrees","3"), 0);
    studentList->addStudent(new StudentData("idrees","9"), 0);
    studentList->addStudent(new StudentData("idrees","5"), 3);
    
    //studentList->printAllStudents();
    
    studentList->removeAll();
    
    studentList->printAllStudents();
    
    
    return 0;
}
