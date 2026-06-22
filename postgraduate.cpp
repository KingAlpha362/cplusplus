#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string studentNumber;
    string name;
    string surname;

public:
    // Constructor to initialise with given values
    Student(const string& num, const string& n, const string& sn)
        : studentNumber(num), name(n), surname(sn) {}

    // Virtual display method – can be overridden in derived classes
    virtual void display() const {
        cout << "====== Student information ======" << endl;
        cout << "Student Number: " << studentNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
    }

    // Virtual destructor (good practice)
    virtual ~Student() {}
};

class Postgraduate : public Student {
private:
    string researchTopic;
    int yearOfStudy;

public:
    // Constructor calls base constructor and initialises its own members
    Postgraduate(const string& num, const string& n, const string& sn,
                 const string& topic, int year)
        : Student(num, n, sn), researchTopic(topic), yearOfStudy(year) {}

    // Override display() – call base display then add postgrad details
    void display() const override {
        cout << "====== Postgraduate information ======" << endl;
        // Call base class display to print student details
        Student::display();
        cout << "Research Topic: " << researchTopic << endl;
        cout << "Year of Study: " << yearOfStudy << endl;
    }
};

int main() {
    // Create a Student object with the given data
    Student studentObj("402250167", "Benjamin", "Montague");

    // Create a Postgraduate object with the given data
    Postgraduate postgradObj("402214559", "Mabutho", "Mthethwa",
                             "Programming", 2);

    // Display both objects
    studentObj.display();
    cout << endl;
    postgradObj.display();

    return 0;
}