#include <cstddef>
#include <iostream>

using namespace std;

class Student {
    public: 
        string name; 
        string major; 
        int age;

    Student(){
        this->name = "Default name";
        this->major = "Default major";
        this->age = 15; 
    }
    Student(string name, string major, int age) {
        this->name = name; 
        this->major = major; 
        this->age = age; 
    }
};

int main() {
    Student* a = new Student(); 
    cout << "A's name: " << a->name << endl; 
    cout << "A's major: " << a->major << endl; 
    cout << "A's age: " << a->age << endl; 

    Student* b = new Student("Bob", "CS", 20); 
    cout << "B's name: " << b->name << endl; 
    cout << "B's major: " << b->major << endl; 
    cout << "B's age: " << b->age << endl; 

    b->name = "Mike"; 
    cout << "B's name: " << b->name << endl; 
    


    

}