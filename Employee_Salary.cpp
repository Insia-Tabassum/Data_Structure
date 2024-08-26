#include <iostream>
using namespace std;


struct Employee {
    string ID;
    string name;
    int basicPay;
    double houseRent;
    double transportAllowance;
    const double medicalAllowance = 2000;
    double pfDeduction;
    double grossPay;
    double netPay;
};


void calculateBenefits(Employee& emp) {
    if (emp.basicPay <= 10000) {
        emp.houseRent = 0.45 * emp.basicPay;
    }
    else if (emp.basicPay > 10000 && emp.basicPay <= 20000) {
        emp.houseRent = 0.4 * emp.basicPay;
    }
    else {
        emp.houseRent = 0.35 * emp.basicPay;
    }

    emp.transportAllowance = 0.05 * emp.basicPay;
    emp.pfDeduction = 0.1 * emp.basicPay;
    emp.grossPay = emp.basicPay + emp.houseRent + emp.transportAllowance + emp.medicalAllowance;
    emp.netPay = emp.grossPay - emp.pfDeduction;
}

int main() {

    Employee employees[2];


    for (int i=0; i<2; i++) {
        cout<<i+1 <<"." << "Enter ID for employee :" ;
        cin >> employees[i].ID;

        cout<<i+1 <<"." << "Enter Name for employee:";
        cin >> employees[i].name;

        cout<<i+1 <<"." << "Enter Basic Pay for employee:";
        cin >> employees[i].basicPay;


        calculateBenefits(employees[i]);

        cout << endl;
    }


    cout << "ID\tName\tBasic Pay\tGross Pay\tNet Pay\n";
    for (int i=0; i<2;i++) {
        cout << employees[i].ID << "\t" << employees[i].name << "\t" << employees[i].basicPay << "\t\t"
             << employees[i].grossPay << "\t\t" << employees[i].netPay << endl;
    }

    return 0;
}
