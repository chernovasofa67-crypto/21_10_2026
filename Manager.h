//
// Created by Евгения on 21.10.2026.
//

#ifndef INC_21_10_2026_MANAGER_H
#define INC_21_10_2026_MANAGER_H


#pragma once
#include "Employee.h"

class Manager :
    public Employee
{
protected:
    float sales;
    int procent;

public:
    Manager();
    Manager(std::string name, float salary, float sales, int procent);

    void setSales(float sales);
    float getSales() const;
    void setProcent(int procent);
    int getProcent() const;

    void show() const;
    float calcSalary() const;
};


#endif //INC_21_10_2026_MANAGER_H
