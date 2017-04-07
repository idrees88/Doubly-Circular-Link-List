//
//  StudentLinkList.hpp
//  LinkList
//
//  Created by Eddie on 3/18/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#ifndef StudentLinkList_hpp
#define StudentLinkList_hpp

#include <stdio.h>
#include "StudentData.hpp"

class StudentLinkList {
    StudentData *head;
    int size;
    
public:
    StudentLinkList();
    void addStudent(StudentData *studentData);
    void addStudent(StudentData *studentData, int position);
    void removeStudent(StudentData *studentData);
    void removeStudentAtPosition(int position);
    void removeLastStudent();
    void removeAll();
    void printAllStudents();
};


#endif /* StudentLinkList_hpp */
