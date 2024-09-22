#include <iostream>
using namespace std;
main(){
cout<<"Enter vegetable price per kilogram (in coins): ";
float N;
cin>> N;

cout<<"Enter fruit price per kilogram (in coins): ";
float M;
cin>> M;

cout<<"Enter total kilograms of vegetables: ";
int veg;
cin>> veg;

cout<<"Enter total kilograms of fruits: ";
int fruit;
cin>> fruit;

float earning;
earning= (M*veg+N*fruit)/1.94;
cout<<"Total earnings in Rupees (Rps): "<<earning;
}
 

