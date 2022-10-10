#include<iostream>
#include<string>
using namespace std;

struct Stud{
public:
int roll;
char name[10];
float cgpa;

 void Input( Stud*A, int n){
for(int i=0;i<n;i++){

     cout << "enter roll---"<<endl;
     cin >> A[i].roll;
     cout<<"enter name"<<endl;
     cin>> A[i].name;
     cout<<"enter cgpa--"<<endl;
     cin>> A[i].cgpa;
}
 }

   void display( Stud*A, int n){
       for(int i=0; i<n; i++){
        cout<<A[i].roll<<endl;
        cout<<A[i].name<<endl;
    cout<<A[i].cgpa<<endl;
       }
   }

};

int main(){

    Stud A[10];
    Input(A, 5);
    display(A, 5);


}