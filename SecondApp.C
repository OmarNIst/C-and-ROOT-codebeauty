
/*
To run this C++ code   just type this line in the terminal :
 g++ SecondApp.cpp -o SecondApp && ./SecondApp


#include <iostream>
using namespace std;

int main()
{
    float annualSalary = 50000.99;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary;

    system("pause>0");
}
*/    
/*
// to RUN it by ROOT

void SecondApp() {
    float annualSalary = 50000.99;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
}
*/



// To run this C++ code   just type this line in the terminal :
/*

#include <iostream>
using namespace std;

int main() {
    float annualSalary;
    cout << "Please enter your annual salary ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary;
    cout << "In 10 years you will earn " << annualSalary * 10;
    system("pause>0");
    return 0;
}
*/


// to RUN it by ROOT

/*

void SecondApp() {
    float annualSalary;
    cout << "Please enter your annual salary: ";
    cin >> annualSalary;
    
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    
    float totalSalaryIn10Years = annualSalary * 10;
    cout << "In 10 years you will earn " << totalSalaryIn10Years << endl;       // when we want to write text  we use "  "
}

void runSecondApp() {
    SecondApp();
}

*/

/*
#include <iostream>
using namespace std;

int main() {
    int yearOfBirth = 1995;
    char gender = 'f' ;
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 45678945856;
cout << "Size of int is " << sizeof(int) << "bytes\n"; 

    system("pause>0");
    return 0;
}

*/

void SecondApp() {
    char gender = 'f' ;
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 45678945856;
cout << "Size of int is " << sizeof(int) << " bytes\n";

// sizeof operator is used to see exactly how much each of the data type takes

cout << "The result in the previous command shows that it takes four bytes of memory" << endl;

cout << "Int min value is " << INT_MIN << endl;
}

void runSecondApp() {
    SecondApp();
}




