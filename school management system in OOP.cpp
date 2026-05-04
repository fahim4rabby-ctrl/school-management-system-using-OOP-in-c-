#include<iostream>
using namespace std;

class People{
   protected:
       string name;
       int age;
   public:
       void getPeople(string n,int a){
         name=n;
         age=a;
    }
       void displayPeople(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
       }
};
class Student:public People{
protected:
    string grade;
    int studentID;
public:
    void getStudent(string n,int a,int i,string g){
        getPeople(n,a);
        grade=g;
        studentID=i;
    }
    void displayStudent(){
               displayPeople();
               cout<<"students id : "<<studentID<<endl;
               cout<<"Grade : "<<grade<<endl;
    }
};

class Teacher:public People{
protected:
    string subject;
    int teacherID;
public:
    void getTeacher(string n,int a,int i,string s){
        getPeople(n,a);
        subject=s;
        teacherID=i;
    }
    void displayTeacher(){
               displayPeople();
               cout<<"teachers id : "<<teacherID<<endl;
               cout<<"Subject : "<<subject<<endl;
    }
};

int main(){
    Student students[100];
    Teacher teachers[50];
    int studentCount=0;
    int teacherCount=0;
    int choice;

    do{
      cout<<"\n___School Management System___"<<endl;
      cout<<"1.Add Student"<<endl;
      cout<<"2.Add Teacher"<<endl;
      cout<<"3.show Students"<<endl;
      cout<<"4.show teachers"<<endl;
      cout<<"5.exit"<<endl;
      cin>>choice;
      if(choice==1){
        string name,grade;
        int age,id;
        cout<<"\nEnter Name :";
        cin>>name;
        cout<<"\nEnter Age :";
        cin>>age;
        cout<<"\nEnter Student ID :";
        cin>>id;
        cout<<"\nEnter Grade :";
        cin>>grade;
        students[studentCount].getStudent(name,age,id,grade);
        studentCount++;
      }
        else if(choice==2){
        string name,subject;
        int age,id;
        cout<<"\nEnter Name :";
        cin>>name;
        cout<<"\nEnter Age :";
        cin>>age;
        cout<<"\nEnter Teacher ID :";
        cin>>id;
        cout<<"\nEnter Subject :";
        cin>>subject;
        teachers[teacherCount].getTeacher(name,age,id,subject);
        teacherCount++;
      }
      else if(choice==3){
        cout<<"\n__Students list__"<<endl;
        for(int i=0;i<studentCount;i++){
        students[i].displayStudent();
      }
     }
       else if(choice==4){
        cout<<"\n__Teachers list__"<<endl;
        for(int i=0;i<teacherCount;i++){
        teachers[i].displayTeacher();
      }
     }
    }while(choice!=5);

    return 0;
}
