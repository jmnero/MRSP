
#include <iostream>
#include <map>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;


void Header(){
	cout<<"\t\t\tSupermarket System \t\n";
	cout<<"\t\t\t===================\t\n\n\n";
}

////

///

void ContentMRKT(){
int num;
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
	int size = *(&list + 1) - list;
	int sum,x;
	int max_no=0;
	
	while(x >= 0){
		system("cls");
		
		Header();
		cout <<"\t\t\tLIST OF PRODUCTS\n"<<endl;
  		for (int a = 0; a < size; a++) {
   			 cout<<"\t\t" <<a<<" "<<list[a]<<endl;
  			}
		printf("\n (enter Negative number to Sum all )Enter a product number :  ");
		scanf("%d",&x);
		if(x>=0){
			sum=sum+x; 
			if(x > max_no){
				 max_no=x;
				}
		}
		
	}	
	printf("Sum of the entered  numbers : %d ",sum);
	printf("\n Highest Item  : %d ",max_no);

}



int main() {
	/*sausages */
	int pick;
	string dev = "(dev) ";
	string  MenuList[] = {"LIST" ,"TOTAL SERVICE","CHECK TRANSACTIONS", "EXIT" };
	size_t n = sizeof(MenuList)/sizeof(MenuList[0]);
	
    /*Header */
    Header();
    
	/*Menu from the list */
	for(size_t i = 0;i < n;i++ ){
		cout<< "\t\t" << i << " "<<MenuList[i] << "\n";
	
	}
	//cout<<"\t"<<MenuList[0]<<endl;

    
    cout<< "\n\t>>" ; cin >> pick;
    cout<< dev <<"/tOut put : " << pick<<endl;
    
    switch (pick){
    	case 0:
    		cout<<"0 "<< MenuList[0];
    		ContentMRKT();
    		break;
    	case 1:
    		cout<<"1"<< MenuList[1];
    		break;
    	case 2:
    		cout<<"2"<< MenuList[2];
    		break;
    	case 3:
    		cout<<"3"<< MenuList[3];
    		break;
    	default:
    		cout<<"Please Input Valid Number";
    	
    	
	}
	
   //On Building...
}
