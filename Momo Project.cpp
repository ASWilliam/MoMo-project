#include <iostream>
using namespace std;

int main() {
	
	const int defaultpin = 0000;
	const float defaultbal = 1000;
	int new_pin;
	int availablebal;
    float float_amt;
	int confirm = 1;
	int num;
	int option;
	int count=0;
	int a = defaultpin;
	int counter = 0;

	/* A Menu Appears */;
	
	
	while(true) {
	cout << "Main Menu" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Reset PIN" << endl;
	cout << "3. Send Money" << endl;
	cout << "4. Exit" << endl;
	cout << "Select an option" << endl;
	cin >> option;
	
	switch (option) {
		
		case 1:
			
			while (counter < 3) {
			cout << "Please enter your momo pin to check balance" << endl;
			cin >> a;
			if(a == defaultpin ) {
			cout << "Your current balance is " << "GHC" << defaultbal << endl;
			break;
		}
		else { cout << "Wrong Pin!" << endl;
		counter++;
		}
			
    	case 2:
		cout << "Enter Old Pin" << endl;
		cin >> a;
		if (a != 0000) { cout << "Invalid PIN, Try Again!" << endl;
		break;
		}
		cout << "Enter New Pin" << endl;
		cin >> new_pin;
		cout << "You have successfully reset your pin" << endl;
		break;
        
    	case 3:
        cout << "Enter Reciepient's Number" << endl;
    	cin >> num; 
    	cout << "Enter amount you want to send " << "GHC" << endl;
		cin >> float_amt; 
    	if (float_amt > defaultbal) { cout << "Not Enough Funds To Perform Transaction" << endl;
    	break;
    }
    	if (float_amt < defaultbal) { availablebal = defaultbal - float_amt;
    	cout << "You have successfully sent : GHC" << float_amt << " to: " << num << endl; }
    	if (availablebal = defaultbal - float_amt) { cout << "Your Current Balance is " << "GHC" << availablebal << endl;}
		break;
	

        case 4:
		cout << "Thank You For Using MTN MoMo" << endl;
      	return 0;
     	default:
		cout << "Invalid Choice, Try Again" << endl;
		break;
	} 
	
  }  

 }
	
	
	 
	 
	 return 0;

}
    







