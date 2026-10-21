//
// Created by Евгения on 21.10.2026.

#include "Teacher.h"


 Teacher::Teacher() {
    hours = 0;
    cost = 0;

}

 Teacher::Teacher(std::string name, float salary, int hours, int cost):Employee(name, salary) {
    this->hours = hours;
    this->cost = cost;

}

 void Teacher::setHours(int hours) {
    this->hours = hours;

}

 int Teacher::getHours() const {
    return hours;
}

 void Teacher::setCost(int cost) {
    this->cost = cost;
}

int Teacher::getCost() const {
    return  cost;
}

 void Teacher::show() const {
    Employee:: show();
    std::cout <<"\nHours:\t"<<hours<<"\nCost:\t"<<cost<<"\n";
}

 float Teacher::calcSalary() const {
    return (salary + hours * cost) * 0.83;

}