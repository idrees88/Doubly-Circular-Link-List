//
//  StudentData.cpp
//  LinkList
//
//  Created by Eddie on 3/17/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#include "StudentData.hpp"

StudentData::StudentData() {
    this->studentName  = "header";
    this->studentRollNo = "header";
    this->next = nullptr;
    this->backPointer = nullptr;
}

StudentData::StudentData(string name, string rollNo) {
    this->studentName = name;
    this->studentRollNo = rollNo;
    this->next = nullptr;
    this->backPointer = nullptr;
}


//Setters & Getters
void StudentData::setStudentName(string studentName) {
    this->studentName = studentName;
}
void StudentData::setStudentRollNo(string studentRollNo){
    this->studentRollNo = studentRollNo;
}
void StudentData::setNext(StudentData *nextNode) {
    this->next = nextNode;
}
void StudentData::setBack(StudentData *backNode) {
    this->backPointer = backNode;
}

string StudentData::getStudentName() {
    return this->studentName;
}
string StudentData::getStrudentTollNo() {
    return this->studentRollNo;
}
StudentData* StudentData::getNext() {
    return this->next;
}
StudentData* StudentData::getBack() {
    return this->backPointer;
}





