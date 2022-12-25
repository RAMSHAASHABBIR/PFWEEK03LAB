#include <iostream>
using namespace std;
main(){
float vegetableprice;
float fruitprice;
int totalvegetable;
int totalfruit;
float total;
float coins;
coins = 1.94;
cout << "Enter vegetable price :";
cin >> vegetableprice;
cout << "Enter fruit price:";
cin >> fruitprice;
cout <<"Enter total amount of vegetables:";
cin >> totalvegetable;
cout <<"Enter total amount of fruits:";
cin >> totalfruit;
total = (vegetableprice*totalvegetable)+(fruitprice*totalfruit);
cout <<"Earning of all fruits and vegetables:" << total;
coins = total*coins;
cout <<"In rupees earning:" << coins;
}

