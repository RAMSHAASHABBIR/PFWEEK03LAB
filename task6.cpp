#include <iostream>
using namespace std;
main(){
float size;
float cost;
float area;
float costperpound;
float costperarea;
cout << "size of bag:";
cin >> size;
cout << "cost of bag:";
cin >> cost;
cout << "area in square feet:";
cin >> area;
costperpound = cost/size;
cout << "cost off fertilizer per pound:" << costperpound;
costperarea = cost/area;
cout <<"cost of fertilizing the area per square foot:" << costperarea;
}