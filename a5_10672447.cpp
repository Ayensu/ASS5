#include <iostream>
#include <fstream>
#include <iomanip>
#include <String>

using namespace std;

struct student{
  string id;
  int age;
  float score;
  char gender;
  string name;
  char grade;
};

int main()
{
    ofstream in;
    int mcounter,fcounter;
    student info[5];
    int tAge=0;
    float tScore=0.0;
    for(int i=1; i<=5; i++){
    cout<<"ID"<<endl;
    cin>>info[i].id;
    cout << "Name" << endl;
    cin>>info[i].name;
    cout<<"Age"<<endl;
    cin>>info[i].age;
    tAge=tAge+info[i].age;
    cout<<"Gender"<<endl;
    cin>>info[i].gender;
    if(info[i].gender=='m'|| info[i].gender=='M'){
        mcounter+=1;

    }
    else if (info[i].gender=='f' || info[i].gender=='F')
    cout<<"Score"<<endl;
    cin>>info[i].score;
    tScore=tScore + info[i].score;
    if (info[i].score<=100 && info[i].score>=80){
        info[i].grade = 'A';
    }
    else if(info[i].score<=79 && info[i].score>=70){
        info[i].grade = 'B';
    }
    else if(info[i].score>=69 && info[i].score<=60){
        info[i].grade = 'C';
    }
    else if(info[i].score>=59 && info[i].score<=50){
        info[i].grade = 'D';
    }
    else if(info[i].score>=49 && info[i].score<=40){
        info[i].grade = 'E';
    }
    else if(info[i].score>=39 && info[i].score<=0){
        info[i].grade = 'F';
    }
    }
    float avgA=tAge/5.0;
    float avgS=tScore/5.0;

    in.open("");

    in <<"No." << "Id" << "Name" << "Age" << "Gender" << "score" << "Grade" << endl;

    for(int i=0; i<5; i++){
        in << i+1 << info[i].id << info[i].name << info[i].age << info[i].gender << info[i].score << info[i].grade << endl;
    }

    in << "Average Age " << avgA;
    in << "Average Score " << avgS;
    in << "Male Count " << mcounter;
    in << "Female Count " << fcounter;

    return 0;
}
