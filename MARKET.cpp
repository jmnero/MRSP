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

string price[]={
    "25.00",
    "34.00",
    "50.00",
    "10.00",
    "9.00",
    "60.00",
    "70.00",
    "100.70",
    "50.70",
    "70.00",
    "80.00",
    "110.00",
    "90.00",
    "350.00",
    "55.00",
    "150.00",
    "250.00",
};

void description(int product){

    
    cout<<list[product]<<endl;
    
    cout<<price[product];
    
}





void listofproducts(){
  int num;

  cout <<"LIST OF PRODUCTS"<<endl;
  for (int a = 0; a < COUNT; a++) {
    cout <<(a+1)<<" "<<list[a]<<endl;
  }

  cin>>num;


  description(num);

}



int main() {
   listofproducts();
    return 0;
}