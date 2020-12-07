/* C++ program to read and print employee information using multiple inheritance.*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
 
class basicInfo
{ 
public:
        char    name[30];
        int     empId;
        char    gender;
        
        void getBasicInfo()
        {
            cout << "Enter Name: "; 
            cin.getline(name,30);
            cout << "Enter Emp. Id: ";
            cin  >> empId;
            cout << "Enter Gender: ";
            cin  >> gender;
        }
};
 
class deptInfo
{
public:
        string deptName;
        string assignedWork;
        int     time2complete;
        void getDeptInfo()
        {
            cout << "Enter Department Name: ";  
            cin >> deptName;
            cout << "Enter assigned work: ";  
            cin >> assignedWork;
            cout << "Enter time in hours to complete work: ";
            cin  >> time2complete;
        }
};
  
class employee:private basicInfo, private deptInfo
{
public:
        void getEmployeeInfo(){
            cout << "Enter employee's basic info: " << endl; 
            getBasicInfo();     
            cout << "Enter employee's department info: " << endl; 
            getDeptInfo();    
        }
        void printEmployeeInfo()
        {
            cout <<endl<< "Employee's Information is: "     << endl;
            cout << "Basic Information...:"       << endl;
            cout << "Name: "      << name   << endl;      
            cout << "Employee ID: " << empId  << endl;      
            cout << "Gender: "        << gender << endl << endl;
            cout << "Department Information...:"  << endl;
            cout << "Department Name: "           << deptName   << endl; 
            cout << "Assigned Work: "             << assignedWork << endl;
            cout << "Time to complete work: "     << time2complete<< endl; 
        }
};
 
int main()
{
    employee emp;
     
    emp.getEmployeeInfo();
    emp.printEmployeeInfo();
     
    return 0;
}



//  WAP in C++ to convert kilometer to meter.

#include <iostream>

using namespace std ;

int convertToKilo(int meter){
    return meter*1000;
}

int main(){ 
    int toConvert = 0; 
    cout << "enter the value to be converted";
    cin >> toConvert;
    cout << convertToKilo( toConvert ); 
    return 0 ;
}



// Write an object oriented program to calculate the area of the circle with given radius.
// ( initialize the radius using constructor ) in C++


#include <iostream>
using namespace std ;
class calculateArea{
    public:
        double radius , area ;
        calculateArea(){
            cout << "Enter the radius of the circle";
            cin >> radius;
            area = 3.14 * radius*radius ;
        }
        void printArea(){
            cout << "The area of the circle with the radius : " << radius << " is : " << area; 
        }
};

int main(){
    calculateArea circle;
    circle.printArea();
    return 0;
}

//  WAP in C++ to convert the temperature from c to f using class and objects

#include <iostream>

using namespace std ;

class converTemp {
    public:
    float temp;
        converTemp(float c){
            temp = (c * 9/5) + 32;
        }
        void print(){
            cout << "the temperature is :- " << temp << " degree fahrenheit";
        }
};


int main(){
    float enteredTemp;
    cout << "enter the temperature to convert to fahrenheit ";
    cin >> enteredTemp;
    converTemp temperature(enteredTemp);
    temperature.print();
    return 0;
}



//  Create a class student having data member Name, Marks, Grade Write a program to display  
// student information using array of object

// understanding the problem to solve [{ student1  } , { student2 }, ...]
#include <iostream>
#include <string>

using namespace std;

class student{
  public:
    string Name;
    int Marks, Grade;
    
    void setStudent(string N , int M , int G){
        Name = N;
        Marks = M;
        Grade = G;
    }
    void printInfo(){
        cout << "the name of the student is :- " << Name << endl;
        cout << "the Grade of the student is :- " << Grade << endl;
        cout << "the Marks of the student is :- " << Marks << endl << endl;
    }
};

int main(){
    student studentArray[2];
    int i ; 
    studentArray[0].setStudent("SarojRegmi" , 100 , 10 );
    studentArray[1].setStudent("RajeshKhadka" , 95 , 10);
    for (i=0; i<2; i++){
        studentArray[i].printInfo();
    }
    return 0;
}

