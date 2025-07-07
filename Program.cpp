#include<iostream>
using namespace std;
int main() {
    cout<<"Hello world";
    cout<<"Hi everyone";

cout<<endl;
cout<<endl;

//Here cout<<endl is used to give gap between line and is never written with " " symbol. also cout<<"/n" can be used to do same work

    cout<<"Hello world";
    cout<<endl;
    cout<<"Hi everyone";

    cout<<endl;
    cout<<endl; 

    cout<<"Hello world"<<endl<<"Hi Everyone";
    //we can write like this too

    cout<<endl;
    cout<<endl;

    cout<<4+3;
    cout<<endl;
    cout<<"4+3";
//here whene i printed 4+3 without the "" then it performed the calculation but when i did put it with the symbol it did not cause it considered it as a text.
cout<<endl;
cout<<endl;

int x;
x = 5;
cout<<x<<endl;

cout<<endl;

int y;
y = 5;
cout<<y;

cout<<endl;
cout<<endl;

cout<<x+y;

cout<<endl;
cout<<endl;


//this can also be written as 

int a;
a = 5;
int b;
b = 5;
cout<<a+b;

cout<<endl;
cout<<endl;

int c; //declaration
c = 5; //initialization
int d;
d = 7;
cout<<c+d;

cout<<endl;
cout<<endl;

int m = 2; //this is also possible.
int n = 3;

cout<<m+n;
 
cout<<endl;
cout<<endl;


int j = 5;
cout<<j<<endl;
j = 8;
cout<<j<<endl<<endl<<endl;  //here in line 79 i have declared j variable to be 5 and in line 81 i have declared it to be 8. 
 

//once declaration is done then u can do initialization forever with the same variable u dont neeed to declare again ana again. for ex--

int t;// here i have declared t for once so i dont need to declare again and again and now i can keeo on changing the value of t
t = 1;
cout<<t<<endl;
t = 2; 
cout<<t<<endl;
t=3;
cout<<t<<endl;

cout<<endl;
cout<<endl;


//int u,i,sum;

//u = 2;
//cout<<u<<endl;

//cout<<"enter number";
//cin>> i;

//sum = u+i;

//cout<<sum<<endl;

x = 2; 
cout<<x<<endl;
x = x+5;
cout<<x<<endl;

}