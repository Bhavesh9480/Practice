/*#include <iostream>

using namespace std;

class rectangle {
public:
    float length;
    float width;

    rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }

    void displayDetails() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    rectangle rect(5.0, 31.0); 

    rect.displayDetails();

    return 0;
}*/

/*#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    // Parameterized constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    person1.display();
    person2.display();

    return 0;
}*/

/*#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized constructor
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Copy constructor
    Student(const Student& other) {
        this->name = other.name;
        this->age = other.age;
    }
};

int main() {
    Student student1("Alice", 20);
    Student student2(student1); // Copy constructor is called

    cout << "Student 1: " << student1.name << ", " << student1.age << endl;
    cout << "Student 2: " << student2.name << ", " << student2.age << endl;

    return 0;
}*/

/*#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(num);
        cout << "Factorial of " << num << " is " << result << endl;
    }

    return 0;
}*/

#include<iostream>
#include<string>
using namespace std;

class student
{
    public:
        float sub[3];
        string name;
        float marks;
        float per;
        char grade;


};

int main()
{

    student st[3];
    for (int i = 0; i < 3;i++)
    {
        float count=0;
        cout << "Enter name : ";
        cin >> st[i].name;
       
        for (int j = 0; j < 3;j++)
        {
            cout << "Enter sub "<<j+1<<" marks :";
            cin >> st[i].sub[j];
            count += st[i].sub[j];
        }
        //calculate percentage
        st[i].per = (count / 300) * 100;
    }
    for (int i = 0; i < 3;i++)
    {
        //grades of student
        if(st[i].per > 75)
        {
            st[i].grade = 'A';
        }
        else if(st[i].per >50)
        {
            st[i].grade = 'B';
        }
         else if(st[i].per >30)
        {
            st[i].grade = 'c';
        }
    }
    //display
    for (int i = 0; i < 3;i++)
    {
        cout << "Name: " << st[i].name << endl;
        cout << "Percentage:" << st[i].per << endl;
        cout << "Grade:" << st[i].grade << endl;
    }

        return 0;
}

