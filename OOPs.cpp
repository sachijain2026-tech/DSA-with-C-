// BASIC IMPLEMENTATION
/*
#include <iostream>
#include <string>
using namespace std;
class Person
{
    Person()
    {
    }
    public:
    string name;
    int age;
    char gender;
    // string getName(){
    //     return name;
    // }
    // void setName(string s){
    //     name=s;
    // }

    Person(string s, int age, char g)
    {
        cout<<"Constructor called"<<endl;
        this->age=age;
        this->gender=g;
        this->name=s;
        cout<<"Successfulyl initialized"<<endl;
    }

};
int main()
{
    Person P1("john", 20, 'M');
    // P1.setName("Sachi");
    // cout<<"Name is "<<P1.getName()<<endl;
    // P1.age=20;
    cout<<"Age is "<<P1.age<<endl;
    // P1.gender='F';
    cout<<"Gender is "<<P1.gender<<endl;
    cout<<P1.name;


}
    */

// #include <iostream>
// using namespace std;
// class Person{
//     public:
//     string* namePtr;
//     int age;
//     static char gender;
//     static void func(){
//         cout<<gender<<endl;
//     }

//     // Person(){
//     // }
//     // Person(string s,int a, char g){
//     //     namePtr=new string;
//     //     *namePtr=s;
//     //     this->age=a;
//     //     this->gender=g;
//     //     cout<<"Done"<<endl;
//     // }
//     // void getInfo(){
//     //     cout<<"name: "<<*(this->namePtr)<<endl;
//     //     cout<<"Age: "<<this->age<<endl;
//     //     cout<<"gender: "<<this->gender<<endl;
//     // }

//     // //copy constructor
//     // Person(Person &temp){
//     //     namePtr=new string;
//     //     *namePtr=*(temp.namePtr);
//     //     this->age=temp.age;
//     // }
//     // ~Person(){
//     //     cout<<"Hi, I'm Destructor"<<endl;
//     // }
// };
// char Person::gender='F';

// int main(){
//     // Person P1("Sonia",20,'F');
//     // Person P2;
//     // P2=P1;
//     // P1.getInfo();
//     // cout<<"----------------------------------"<<endl;
//     // P2.getInfo();
//     // cout<<"----------------------------------"<<endl;
//     // *(P1.namePtr)="Ankita";
//     // P1.getInfo();
//     // cout<<"----------------------------------"<<endl;
//     // P2.getInfo();
//     // cout<<"----------------------------------"<<endl;
//     Person p1;
//     cout<<Person::gender<<endl;
//     p1.func();
//     Person::func();

// }

/*
//MULTIPLE INHERITANCE
#include <iostream>
using namespace std;
class Female
{
public:
    string name;
    int age;
    void speak()
    {
        cout<<"I speak!"<<endl;
    }
    Female()
    {
        cout<<"Female Constructor called"<<endl;
    }
    ~Female()
    {
        cout<<"Female destructor called"<<endl;
    }
};
class Male
{
    public:
    void walk()
    {
        cout<<"i walk!"<<endl;
    }
    public:
    void speak(){
        cout<<"I speak!"<<endl;
    }
    Male(){
        cout<<"Male Constructor called"<<endl;
    }
    ~Male(){
        cout<<"Male destructor called"<<endl;
    }

};
class Child:public Female, public M
ale
{
public:
    Child()
    {
        cout<<"Child Constructor called"<<endl;
    }
    ~Child()
    {
        cout<<"Child destructor called"<<endl;
    }

};
int main()
{
    Child C1;
}
*/

/*
//PLOYMORPHISM
#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imag;
    bool operator ==(Complex &obj)
    {
        return(this->real==obj.real) && (this->imag==obj.imag);

    }
    void setNum(int r, int i)
    {
        this->real=r;
        this->imag=i;
        cout<<r<<" + "<<i<<"i"<<endl;
    }

};
int main()
{
    Complex c1;
    Complex c2;
    c1.setNum(2,2);
    c2.setNum(2,2);
    cout<<(c1==c2)<<endl;
}
    */

// //RUN TIME POLYMORPHISM
// #include <iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;
//     void func(){
//         cout<<"I have 4 legs"<<endl;
//     }
//     virtual void speak(){
//         cout<<"I speak"<<endl;
//     }
// };

// class Dog:public Animal{
// public:
//     void speak(){
//         cout<<"I bark"<<endl;
//     }
// };
// int main(){
//     Dog d1;
//     d1.func();
//     d1.speak();
// }

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    void show()
    {
        cout << "Base ";
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived ";
    }
};

int main()
{
    Derived d;
    Base b1;
    b1.a = 10;
    Base b2 = b1;
    cout << b2.a << endl;
    b1.a = 20;
    cout << b2.a << endl;

    return 0;
}
