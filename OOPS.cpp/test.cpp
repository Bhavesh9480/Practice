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

/*#include<iostream>
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
}*/

/*#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    float marks;
    char grade;
    void display();
};
char grade(float marks) {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }
void display(char grade ,string name , float marks) {
    
    cout << "Name: " << name<< endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    }

int main() {
    Student st;
    
    cout << "Enter student name: ";
    getline(cin, st.name);
    cout << "Enter marks: ";
    cin >> st.marks;

   st.grade = grade(st.marks);
   st.display();

   return 0;
}*/

//binary opretor overloading
/*#include <iostream> 
using namespace std; 
 
class ComplexNumber { 
    int real, imag; 
 
public: 
    ComplexNumber(int r = 0, int i = 0) : real(r), imag(i) {} 
 
    // Overload unary ++ operator 
    ComplexNumber operator++() { 
        real++; 
        imag++; 
        return *this; 

} 
// Overload binary + operator 
ComplexNumber operator+(const ComplexNumber &obj) { 
return ComplexNumber(real + obj.real, imag + obj.imag); 
} 
void display() { 
cout << real << " + " << imag << "i" << endl; 
} 
}; 
int main() { 
ComplexNumber c1(3, 4), c2(1, 2), c3; 
++c1; 
c1.display(); 
c3 = c1 + c2; 
c3.display(); 
return 0; 
}*/

/*#include <iostream>

using namespace std;

// Function templates for calculating volume
template <typename T>
T volume(T side) {
    return side * side * side;
}

template <typename T>
T volume(T radius, T height) {
    return 3.14159 * radius * radius * height;
}

template <typename T>
T volume(T length, T breadth, T height) {
    return length * breadth * height;
}

int main() {
    int choice;

    cout << "Choose the shape:\n";
    cout << "1. Cube\n";
    cout << "2. Cylinder\n";
    cout << "3. Rectangular Box\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            int side;
            cout << "Enter the side of the cube: ";
            cin >> side;
            cout << "Volume of the cube: " << volume(side) << endl;
            break;
        }
        case 2: {
            float radius, height;
            cout << "Enter the radius and height of the cylinder: ";
            cin >> radius >> height;
            cout << "Volume of the cylinder: " << volume(radius, height) << endl;  
            break;
        }
        case 3: {
            int length, breadth, height;
            cout << "Enter the length, breadth, and height of the rectangular box: ";
            cin >> length >> breadth >> height;
            cout << "Volume of the rectangular box: " << volume(length, breadth, height) << endl;
            break;
        }
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}*/

