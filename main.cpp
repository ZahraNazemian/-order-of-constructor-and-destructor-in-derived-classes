#include <iostream>

class Person {
protected:
    std::string name;
public:
    Person(std::string name) {
        std::cout << "Person constructor" << std::endl;
        this->name = name;
    }
    
    ~Person() {
        std::cout << "Person does not exits anymore! "  << std::endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;
public:
    Student (std::string name, int rollNo) : Person(name) {
        std::cout << "Student constructor "  << std::endl;
        this->rollNo = rollNo;
    }
    ~Student() {
        std::cout << "Student does not exits anymore! "  << std::endl;
    }
    void show(){
        std::cout << "Student name: " << name  << std::endl;
        
    }

};



class Teachers :virtual public Person {
protected:
    std::string subject;
public:
    Teachers (std::string name, std::string subject) : Person(name) {
        std::cout << " constructor Teachers"  << std::endl;
        this->subject = subject;
    }
    ~Teachers() {
        std::cout << "Teachers does not exits anymore! "  << std::endl;
    }
    

};

class TA : public Teachers, public Student {

public:
    TA (std::string name, std::string subject, int rollNo): Person(name), Student ( name, rollNo), Teachers( name,  subject) {
        std::cout << " constructor TA"  << std::endl;
    }
    ~TA () {
        std::cout << "TA does not exits anymore! "  << std::endl;
    }
    

};



int main() {
    
    TA("Ali","Math" , 29);
    
    return 0;
}
