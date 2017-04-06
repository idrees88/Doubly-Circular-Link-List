//
//  StudentData.hpp
//  LinkList
//
//  Created by Eddie on 3/17/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#ifndef StudentData_hpp
#define StudentData_hpp

#include <stdio.h>
#include <string>
using namespace std;

class StudentData {
    string studentName;
    string studentRollNo;
    StudentData *next;
    StudentData *backPointer;
    
public:
    StudentData();
    StudentData(string name, string rollNo);
    
    void setStudentName(string studentName);
    void setStudentRollNo(string studentRollNo);
    void setNext(StudentData *nextNode);
    void setBack(StudentData *backNode);
    
    string getStudentName();
    string getStrudentTollNo();
    StudentData* getNext();
    StudentData* getBack();
};

#endif /* StudentData_hpp */


