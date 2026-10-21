#include "Manager.h"
#include "Employee.h"
#include "Teacher.h"
#include <vector>
#include <iostream>

int main()
{
    Employee Nikita("Nikita", 200000);
    /*Nikita.show();
    cout << "Total salary: " << Nikita.calcSelary() << endl;*/

    Manager NIkitta("NIkitta", 500000, 99999, 70);
    /*NIkitta.show();
    cout << "Total salary: " << NIkitta.calcSelary() << endl;*/

    Teacher Nikittta("Nikittta", 222222, 100, 40);
    //Nikittta.show();
    //cout << "Total salary: " << Nikittta.calcSelary() << endl;

    vector<Employee*> company = {
        &Nikita, &NIkitta, &Nikittta,
        new Manager("Andre", 50000, 300, 40),
        new Teacher("Marina", 30000, 20, 300)
    };

    for (int i = 0; i < company.size(); i++)
    {
        /*cout << company[i] << endl;*///адреси об'єктів
        /*(*company[i]).show();*/
        company[i]->show();
        cout << "Total salary: " << company[i]->calcSalary() << endl;
        cout << endl;
    }
    cout<<"==================================================================================="<<endl;

    //Всім викладачам збільшити суму оплати за пару на 50 грн!!!!!
    for (int i = 0; i < company.size(); i++) {
        //cout << typeid(*Company[i]).name() << endl;
        if (typeid(*company[i]) == typeid(Teacher)) {
            cout << company[i]->getName() << endl;
            int price = ((Teacher*)company[i])->getCost()+50;
            ((Teacher*)company[i])->setCost(price);
            cout<<"New cost:"<< ((Teacher*)company[i])->getCost()<<endl;

        }

    }
};
