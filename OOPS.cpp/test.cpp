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

//Static
/*#include<iostream>
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
}*/

//Complex Number Using Friend Function
/*#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(float r, float i) : real(r), imag(i) {}

    // Friend function declaration
    friend Complex addComplex(const Complex& c1, const Complex& c2);

    void display() const {
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }
};

Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex c1(3.2, 4.5);
    Complex c2(1.3, 2.7);
    Complex sum = addComplex(c1, c2);

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}*/

/*#include<iostream>
using namespace std;

class calculate
{
    int a, b;
    public:
        void setdata(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        friend class sum;
};
class sum
{
    int sum;

public:
    int add(calculate obj)
    {
       return obj.a + obj.b;
    }
};

int main()
{
    calculate calc1;
    sum s1;
    calc1.setdata(10,20);
    cout << "Sum : " << s1.add(calc1)<<endl;

    return 0;
}*/

/*#include<iostream>
#include<string>
#include<vector>
using namespace std;

class book
{
    string title;
    string author;
    int publicationyear;

    friend class library;
  
};

class library
{
    vector<book> b;
    public:
    void addnewbook(string title,string author,int year)
    {
        book newbook;
        newbook.title=title;
        newbook.author=author;
        newbook.publicationyear=year;
        b.push_back(newbook);
    }
    void display()
    {
        for (const auto &i : b)
        {
            cout << "Details for Book : "<<endl;
            cout << i.title << "\n"
                 << i.author << "\n"
                 << i.publicationyear << endl;
        }
    }

};


int main()
{
    library lib;
    lib.addnewbook("Book1","Author1",2010);
    lib.addnewbook("Book2","Author2",2015);
    lib.display();
    
    return 0;
}*/

//Polymorphism
/*#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Some generic animal sound\n";
    }
};

// Derived class
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof Woof\n";
    }
};

// Derived class
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow Meow\n";
    }
};

int main() {
    Animal* a1 = new Animal();
    Animal* a2 = new Dog();
    Animal* a3 = new Cat();

    a1->makeSound();  
    a2->makeSound();  
    a3->makeSound();  

    delete a1;
    delete a2;
    delete a3;
    
    return 0;
}*/

//File handling
/*#include<iostream>
#include<fstream>

// The classes used for file handling are :
// 1.fstreambase
// 2.ifstream-->derived from fstreambase
// 2.ofstream-->derived from fstreambase

// There are two ways to open file
// 1.Using constructor
// 2.Using member function open() function of the class


using namespace std;

int main()
{
    string sh="Bhavesh Suthar";
    string sh2;
    // Opening file using constructor
    ofstream out("sample.txt"); // Write opretion
    out << sh;// Writing data to file
    out.close();

    ifstream in("sample.txt"); // Read operation
    //in >> sh2;
    getline(in, sh2);
    cout << sh2;
    return 0;
}*/

//C++ program to take twenty integer inputs, store even numbers in a file named "Even", and odd numbers in a file named "Odd". Then it will read the contents of each file and print them:
/*#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream even("Even.txt"), odd("Odd.txt");
    int num[10];
    cout << "Enter 20 integer values"<<endl;
    for (int i = 0; i < 10;i++)
    {
        cin >> num[i];// Taking 10 integer inputs
        if(num[i]%2==0)
        {
            even << num[i] << endl;
        }
        else
        {
            odd << num[i] << endl;
        }
    }
    even.close();
    odd.close();

    string line;
    ifstream file1("Even.txt"), file2("Odd.txt");
    cout << "Even numbers are: "<<endl;
    while(getline(file1, line))
    {
        cout << line << endl;
    }
    file1.close();
    cout << "Odd numbers are: "<<endl;
    while(getline(file2, line))
    {
        cout << line << endl;
    }
    file2.close();

    return 0;
}*/

//For copying one file data tto anathoer file
/*#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream main("main.txt");
    ofstream copy("copy.txt");

    // string sh = "The only limit to our realization of tomorrow is our doubts of today. Let us move forward with strong and active faith. The future belongs to those who believe in the beauty of their dreams.";
    string line;
    int countword = 0;
    int charcount = 0;
    while (getline(main, line))
    {
        countword += line.length();

        copy << line << endl;
   }
   cout << "No of words count are : " << countword;
   main.close();
   copy.close();

   return 0;
}*/

//Template
/*#include<iostream>
using namespace std;
//template<class T>
class vector
{
    public:
    int *arr;// pointer to the array
    int size;


    vector(int m)
    {
        size = m;
        arr=new int[size];
    }
    int sumvec(vector &v)
    {
        int s = 0;
        for (int i = 0; i < size;i++)
        {
            s += this->arr[i]+v.arr[i];
        }
        return s;
    }
};

int main()
{
    vector v1(5);
    v1.arr[0] = 1;
    v1.arr[0] = 2;
    v1.arr[0] = 3;
    v1.arr[0] = 4;
    v1.arr[0] = 5;

    vector v2(5);
    v1.arr[0] = 1;
    v1.arr[0] = 2;
    v1.arr[0] = 3;
    v1.arr[0] = 4;
    v1.arr[0] = 5;

    int a = v1.sumvec(v2);
    cout << a << endl;
    return 0;
}*/

//Template
/*#include<iostream>
using namespace std;

template<typename t>
class vector
{
    public:
    t *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new t[size];
    }
    t sum()
    {
        t s = 0;
        for (int i = 0; i < size;i++)
        {
            s += arr[i];
        }
        return s;
    }
    ~vector()
    {
        delete[] arr;
    }
};

int main()
{
    vector<int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    int s = v1.sum();
    cout<<"sum of integers : "<<s<<endl;

    vector<double> v2(3);
    v2.arr[0] = 4.009586;
    v2.arr[1] = 5.5143992;
    v2.arr[2] = 6.5567834;
    double sd = v2.sum();
    cout<<"sum of doubles : "<<sd<<endl;

    return 0;
}*/

//Fstream
/*#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string sh = "Bhavesh Suthar Is a good boy  ";
    string st = "How can I Help you ?   ";

    ofstream out("sample.txt");
    out << sh;
    out << st;
    out.close();

    ifstream in("sample.txt");
    string s;
    getline(in, s);
    cout << s;

    return 0;
}*/

//Exception Handling
/*#include<iostream>
#include<exception>
using namespace std;

int result(int a)
{
if(a%2==0)
{
    return 1;
}
else
{
    throw runtime_error("Provided No is odd");
}
}

int main()
{
    int a;
    cout << "Enter a no to check even or odd : ";
    cin >> a;

    try
    {
        int fresult = result(a);
        cout << "Result is even" ;
    }
    catch(const runtime_error & e)
    {
        cout << e.what() << '\n';
    }
    

    return 0;
}*/

//Staticdata members
/*#include<iostream>
#include<vector>
using namespace std;

class employee
{
    public:
        static int count;
        vector<string> name;
        employee(string name)
        {
            this->name.push_back(name);
            count++;
        }
        static void getcount()
        {
            cout << "counted employee are : " << count << endl;
        }

};
int employee::count = 0;

int main()
{
    vector<employee> emp;
    string name;
    
    cout << "When You want to end press e" << endl;
    cout << "Now enter names"<<endl;
while(true)
{
    
    cout << "Name : ";
    cin >> name;
    if(name == "e")
    {
        break;
    }
    emp.push_back(employee(name));
}
 employee::getcount();
return 0;
}*/

//Multiple Inheritance
/*#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "I am class A"<<endl;
    }
};
class B
{
    public:
    B()
    {
        cout << "I am class B"<<endl;
    }
};
class C : public A , public B
{
    public:
    C()
    {
        cout << "I am class C"<<endl;
    }
};

int main()
{
    C c;

    return 0;
}*/

//Hierarchial Inheritance
/*#include<iostream>
using namespace std;

class A
{
    public:
    void show()
    {
        cout << " I am parent class";
    }
};

class B:public A
{

};
class C:public A
{
    
};
class D:public A
{
    
};

int main()
{
    D d;
    d.show();

    return 0;
}*/


//Ambiguity can solve using scope resolution opretor
/*#include<iostream>
using namespace std;

class A 
{
    public:
    void show()
    {
        cout << "class A";
    }
};
class B 
{
    public:
    void show()
    {
        cout << "class B";
    }
};
class C : public A , public B 
{
    public:
    void show()
    {
        cout << "class C";
    }
};


int main()
{
    C c;
    c.show();
    return 0;
}*/

//Virtual Base class
/*#include<iostream>
using namespace std;

class A 
{
    public:
    void show()
    {
        cout << "I am class A";
    }
};
class B : virtual public A
{
};

class C : virtual public A 
{
};

class D : public B , public C
{
};

int main()
{
    D d;
    d.show();

    return 0;
}*/

//gcd
#include<iostream>
using namespace std;

int main()
{
    cout << "----------------Greatest common Divisior-----------------" << endl;
    int a,b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    int n = (a > b) ? a : b, greatest = 0;
    for (int i = 1; i <= n;i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if(i>greatest)
            {
                greatest = i;
            }
            
        }
    }
    cout << "Greatest common divisior is : " << greatest << endl;

    return 0;
}