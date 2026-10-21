//
// Created by Евгения on 21.10.2026.
//

#ifndef INC_21_10_2026_TEACHER_H
#define INC_21_10_2026_TEACHER_H


#pragma once
#include "Employee.h"

class Teacher: public  Employee {
protected:
    int hours;
    int cost;

public:
    Teacher();
    Teacher(std::string name, float salary, int hours, int cost);

    void setHours(int hours);
    int getHours() const;
    void setCost(int cost);
    int getCost() const;

    void show() const;
    float calcSalary() const;
};



#endif //INC_21_10_2026_TEACHER_H
