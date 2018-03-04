#include <iostream>

using namespace std;

class Grades{

    int grades;

public:
    Grades(int g){
        grades = g;
    }

    void display(){
        cout << "Your Grades is: " << grades << endl;
    }
    //operator overloading

    //return object of class Grades
    Grades operator() (int g1){
        grades = g1;
        cout << "Operator function is called " << endl;
        //return object of this class
        return *this;
    }

};

int main() {
    //result from constructor
    Grades grades(80);
    grades.display();

    //result from overloading operator
    grades(100); //  do not have to write down the return type again
    return 0;
}