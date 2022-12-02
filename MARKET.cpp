// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

const int COUNT = 17;
string list[] = {
  "Apple Juice",
  "Bubblegum",
  "Cat Food",
  "Dundun",
  "Eggs",
  "Fudgebar",
  "San Miguel Gin",
  "Hansel",
  "Jackfruit",
  "Kill this love",
  "Lemon Juice",
  "Mango Pie",
  "Nova",
  "Oishi",
  "Piattos",
  "Queen",
  "Ror",
};

void listofproducts(){
  int num;

  cout <<"LIST OF PRODUCTS"<<endl;
  for (int a = 0; a < COUNT; a++) {
    cout <<(a+1)<<" "<<list[a]<<endl;
  }

  cin>>num;

}



int main() {
   listofproducts();
    return 0;
}