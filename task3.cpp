#include <iostream>
using namespace std;
main(){
float initialvelocity;
float acceleration;
float time;
float finalvelocity;
cout << "Enter initialvelocity:";
cin >> initialvelocity;
cout << "Enter acceleration:";
cin >> acceleration;
cout << "Enter time:";
cin >> time;
finalvelocity = initialvelocity+(acceleration*time);
cout << "Finalvelocity is:" << finalvelocity;
}