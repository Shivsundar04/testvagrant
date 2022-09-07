#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main () {
	
	struct shoppingcartType
	{
		string itemName;
		double price;
		
	};

	shoppingcartType shoppingcart[99];
	int counter = 0;
	double shoppingcarttotal;
	char moreitems;
	char correct;
	
	
	cout << "Thank you for using the Shopping Calculator. " << endl;
	cout << "This program will record the items you enter and their prices and provide a total item count and final price." << endl;
	
	
	while (moreitems != 'N' || moreitems != 'n')
	{	
		cout <<	"What is the name of your item? (No spaces, please) ";
		cin >> shoppingcart[counter].itemName;
		cout << "And what is the price of that item in dollars and cents?";
		cin >> shoppingcart[counter].price;
		cout << "You entered: ";
		cout << fixed << showpoint << setprecision(2);
		cout << shoppingcart[counter].itemName << " at $" << shoppingcart[counter].price << endl;
		cout << "Is this correct?  y/n ";
		cin >> correct;
	if (correct == 'y' || correct == 'Y')
	{
	    if (shoppingcart[counter].price>=500){
	        shoppingcart[counter].price=(shoppingcart[counter].price-(shoppingcart[counter].price*0.05));
	    }
	shoppingcarttotal = shoppingcarttotal + shoppingcart[counter].price;
	counter++;}
	else {
		cout << "Previous entry not saved, please continue." << endl;
	}	
		cout << "Current total is: " << shoppingcarttotal << " and item count is " << counter << endl;
	
		cout << "Do you wish to add more items? y/n? ";
		cin >> moreitems;
		
	
	}
	char printlist;
	int i;
	
	cout << "Would you like to print a list of your items? Y/N ";
	cin >> printlist;
	if (printlist == 'y' || printlist == 'Y')
	{	for (i = 0; i <= (counter - 1); i++)
	{cout << i + 1 << ". " << shoppingcart[i].itemName << "....." << shoppingcart[i].price << endl;
		}
	}
	cout << "Your total is: " << shoppingcarttotal << " for " << counter<< " items." << endl;
	cout << "I hope you didn't spend too much!";
		
  
    return 0;
}