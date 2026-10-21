//
// Created by Евгения on 21.10.2026.
//

#include "Manager.h"

Manager::Manager()
{
    sales = 0.0f;
    procent = 0;
}

Manager::Manager(std::string name, float salary, float sales, int procent)
    : Employee(name, salary)
{
    this->sales = sales;
    this->procent = procent;
}

void Manager::setSales(float sales)
{
    this->sales = sales;
}

float Manager::getSales() const
{
    return sales;
}
void Manager::setProcent(int procent)
{
    this->procent = procent;
}

int Manager::getProcent() const
{
    return procent;
}

void Manager::show() const
{
    Employee::show();
    std::cout << "\nSales:\t" << sales <<
        "\nProcent:\t" << procent << "\n";
}

float Manager::calcSalary() const
{
    return (salary + sales * procent / 100) * 0.83;
}

