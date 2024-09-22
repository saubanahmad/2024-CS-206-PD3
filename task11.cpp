#include <iostream>
using namespace std;
main(){
cout<<"Enter the person's age: ";
int age;
cin>> age;

cout<<"Enter the numver of times they've moved: ";
int n ;
cin>> n;

int yrs;
yrs= age/(n+1);

cout<<"Average number of years lived in the same house: "<<yrs;

}