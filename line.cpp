
#include<iostream>
using namespace std;
class student_detail{
public:

 char name[20];
 float math;
 float physics;
 float chemistry;

 void getdata(){
    cout<<"Enter Name =";
    gets(name);
    cout<<"Marks of Maths =";
    cin>>math;
    cout<<"Marks of Physics = ";
    cin>>physics;
    cout<<"Marks of Chemistry = ";
    cin>>chemistry;
 }

 void display(){
    cout<<"\nDetais of Student:"<<endl;
    cout<<"Student Name ="<<name<<endl;
    cout<<"Marks of Maths ="<<math<<endl;
    cout<<"Marks of physics ="<<physics<<endl;
    cout<<"Marks of chemitsry ="<<chemistry<<endl;
    cout<<"Average  ="<<(math+physics+chemistry)/3<<endl;
 }

 friend class Student;
};
    class Student{
    public:
    void marks_avg(student_detail &temp){
    cout<<"\naverge using friend class :\n";
    cout<<"Average  ="<<(temp.math+temp.physics+temp.chemistry)/3<<endl;

    }

};

int main(){
    student_detail s1;
    s1.getdata();
    s1.display();

    Student s;
    s.marks_avg(s1);
    return 0;
}