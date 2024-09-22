#include <iostream>
using namespace std;
main(){
cout<<"Enter name of person: ";
string name;
cin>> name;

cout<<"Enter the target weight loss in kilograms: ";
float t;
cin>> t;

float time;
time= 15*t;

cout<< name <<" will need "<< time <<" days to lose " << t <<" kg of weight by following the doctor's suggestions";




}