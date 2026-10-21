//
// Created by Евгения on 21.10.2026.
//

#ifndef INC_21_10_2026_EMPLOYEE_H
#define INC_21_10_2026_EMPLOYEE_H


#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
    string name;
    float salary;

public:
    Employee();
    Employee(string name, float salary);
    void setName(string name);
    void setSalary(float salary);
    string getName()const;
    float getSalary()const;

    void show()const;
    float calcSalary()const;
};



#endif //INC_21_10_2026_EMPLOYEE_H
