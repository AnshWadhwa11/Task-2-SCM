#include<iostream>
#include<string>
using namespace std;

class Student{
    protected:
        string name;
        int roll_number;
    public:
        void set_data(string n, int r){
            name = n;
            roll_number = r;
        }
        void get_data(){
            cout<<"Your Name is: "<<name<<endl;
            cout<<"Your roll number is: "<<roll_number<<endl;
        }
};

class marks : virtual public Student{
    protected:
        float physics,maths;
    public:
        void set_marks(float a, float b){
            physics = a;
            maths = b;
        }
        void get_marks(){
            cout<<"Marks in physics is: "<<physics<<endl;
            cout<<"Marks in maths is: "<<maths<<endl;
        }
};

class score : virtual public Student{
    protected:
        int score;
    public:
        void set_score(int s){
            score = s;
        }
        void get_score(){
            cout<<"Your match score is: "<<score<<endl;
        }
};

class result : public marks, public score{
    public:
        void get_result()
        {
            get_data();
            get_marks();
            get_score();
            cout<<"Your total marks is: "<<maths + physics + (score *10)<<endl;
        }

};

int main(){
    result ansh;
    ansh.set_data("Ansh",217);
    ansh.set_marks(90,98);
    ansh.set_score(8);
    ansh.get_result();
    return 0;
}