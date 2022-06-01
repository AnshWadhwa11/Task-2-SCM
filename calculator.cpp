#include<iostream>
#include<cmath>
using namespace std;

class Simple_Calculator{
    protected:
    float num1 , num2;
    public:
    void set_value();
    void display1();
};
void Simple_Calculator :: set_value(){
    cout<<"Enter the value of first number: ";
    cin>>num1;
    cout<<"Enter the value of second number: ";
    cin>>num2;
}
void Simple_Calculator :: display1(){
    int a;
    cout<<"\nEnter 1 for Addition, Enter 2 for Subtraction, Enter 3 for Multiplication, Enter 4 for Division: ";
    cin>>a;
    switch (a)
    {
    case 1:
        cout <<"The answer is: "<<num1 + num2<<endl;
        break;
    case 2:
        cout<<"The answer is: "<<num1 - num2<<endl;
        break;
    case 3:
        cout<<"The answer is: "<<num1 * num2<<endl;
        break;
    case 4:
        cout<<"The answer is: "<<num1 / num2<<endl;
        break;
    default:
        cout<<"ERROR!!"<<endl;
        break;
    }
}
class Scientific_Calculator{
    protected: 
    int num;
    public:
    void set_value1();
    void display();
};
void Scientific_Calculator :: set_value1(){
    cout<<"Enter the number: ";
    cin>>num;
}
void Scientific_Calculator :: display(){
    int x;
    cout<<"\nEnter 1 for Square, Enter 2 for Cube, Enter 3 for SquareRoot, Enter 4 for Absolute: ";
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<"The answer is: "<<pow(num,2);
        break;
    case 2:
        cout<<"The answer is: "<<pow(num,3);
        break;
    case 3:
        cout<<"The answer is: "<<sqrt(num);
        break;
    case 4:
        cout<<"The answer is: "<<abs(num);
        break;
    default:
        cout<<"ERROR!!";
        break;
    }
}

class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator{
    public:
        void simple_calculator(){
            cout<<"SIMPLE CALCULATOR"<<endl;
            set_value();
            display1();
        }
        void scientific_calculator(){
            cout<<"\nSCIENTIFIC CALCULATOR"<<endl;
            set_value1();
            display();
        }
};

int main(){
    Hybrid_Calculator h;
    h.simple_calculator();
    h.scientific_calculator();
    return 0;
}