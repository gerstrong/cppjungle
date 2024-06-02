#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n,
           const int a) : name(n), age(a) {}

    // Zu 4.
    virtual void display() const = 0;

    void displayBase() const {
        std::cout << "Name: " << name
                  << ", Age: " << age
                  << std::endl;
    }

    /*
    virtual void display() const {
        std::cout << "Name: " << name
                  << ", Age: " << age
                  << std::endl;
    }*/
};

class Student : public Person {
    int studentID;
public: // Zu 1.
    Student(const std::string& n,
            const int a,
            const int id) : Person(n, a), studentID(id) {}

    void display() const override {
        //Person::display(); // Zu 2. Die Rekursion ist hier und 3. Wir rufen display von Person auf
        displayBase();
        std::cout << "Student ID: " << studentID << std::endl;
    }
};

class Teacher : public Person {
private:
    std::string subject;

public:
    Teacher(const std::string& n,
            const int a,
            const std::string& sub) :
        Person(n, a), subject(sub) {}

    void display() const override {
        //display(); // Zu 2. Die Rekursion ist hier und 3. Wir rufen display von Person auf
        displayBase();
        std::cout << "Subject: " << subject
                  << std::endl;
    }
};

int main() {

    Student student("Alice", 20, 12345);
    Teacher teacher("Mr. Smith", 35, "Mathematics");

    std::cout << "Student Information:"
              << std::endl << std::endl;
    student.display();

    std::cout << "Teacher Information:" << std::endl;
    teacher.display();

    return 0;
}
