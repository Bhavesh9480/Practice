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

/*#include<iostream>
using namespace std;

class base1
{
    public:
    void display()
    {
        cout << "Parent 1 is called :";
    }
};

class base2
{
    public:
    void display()
    {
        cout << "Parent 2 is called :";
    }
};

class child : public base1 , public base2
{
    public:
    void display()
    {
        cout << "I am a child class :";
    }
};

int main()
{
    child Child;
    Child.base1::display();
    Child.base2::display();
    Child.display();

    return 0;
}*/

/*#include<iostream>
using namespace std;

class gcd
{
    public:
    int n1,n2;

    void input()
    {
        cout<<"Enter Two Number : ";
        cin>>n1>>n2;
    }

    int calculate(int a,int b)
    {
        if(b==0)
        return a;

        return calculate(b, a % b);
    }
};

int main()
{
    gcd calculator;
    calculator.input();
    int result = calculator.calculate(calculator.n1, calculator.n2);

    cout << "Greatest Common Divisior is : " << result;
    return 0;
}*/


/*#include <iostream>
#include <string>

using namespace std;

struct Book {
    string name;
    int pages;
    float price;
};

int main() {
    Book books[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, books[i].name);
        cout << "Pages: ";
        cin >> books[i].pages;
        cout << "Price: ";
        cin >> books[i].price;
        cin.ignore();
    }

    cout << "\nBook Details:\n";
    for (const auto& book : books) {
        cout << "Name: " << book.name << endl;
        cout << "Pages: " << book.pages << endl;
        cout << "Price: " << book.price << endl;
    }

    return 0;
}*/

//Inline Function
/*#include <iostream>

using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero" << endl;
        return 0;
    } else {
        return a / b;
    }
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int product = multiply(num1, num2);
    int quotient = divide(num1, num2);

    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}*/

//Friend Function
/*#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    // Constructor to initialize width
    Box(double w) : width(w) {}

    // Friend function declaration
    friend void printWidth(Box box);
};

// Friend function definition
void printWidth(Box box) {
    // Accessing private member width
    cout << "Width of the box: " << box.width << endl;
}

int main() {
    Box box1(10.5);  // Create an object of Box with width 10.5

    // Call the friend function
    printWidth(box1);

    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                } else
                    continue;
            }
        }
        return {};
    }
};

int main() {
    Solution soul;
    vector<int> nums1 = {2, 7, 11, 15};
    int target = 13;
    vector<int> result = soul.twoSum(nums1, target);
    cout << "[" << result[0] << "," << result[1] << "]";
    return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public:
        void read();
        void check();
        void ones();
        void display();
};

void binary::read()
{
    cout << "Enter a binary number : ";
    cin >> s;
}
void binary ::check()
{
    for (int i = 0; i < s.length();i++)
    {
        if(s[i]!='0' && s[i]!='1')
        {
            cout << "Invalid" << endl;
            exit(0);
        }
    }
}
void binary::ones()
{
    for (int i = 0; i < s.length();i++)
    {
        if(s[i] == '1')
        {
            s[i] = '0';
        }
        else if(s[i]=='0')
        {
            s[i] = '1';
        }
    }   
}
void binary::display()
{
    for (int i = 0; i < s.length();i++)
    {
        cout << s[i];
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.check();
    b.display();
    b.ones();
    b.display();
    return 0;
}*/

#include<iostream>
#include<string>
using namespace std;

class student
{
    int id;
    string name;
    static int count;

    public:

    void setdata()
    {
        cout << "Enter id and Name: ";
        cin >> id >> name;
        count++;
    }
    void getdata()
    {
        cout << "Details : \n"
             << "id: " << id << " name: " << name << "  Total :" << count <<endl;
    }
};

//int student::count;

int main()
{
    student s[5];
    for(int i = 0; i < 5; i++)
    {
        s[i].setdata();
        s[i].getdata();
    }
    return 0;
}