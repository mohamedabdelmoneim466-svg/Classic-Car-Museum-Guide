#include<iostream>
#include <limits>
using namespace std;

int main(){
	while(true){
		cout << "************************************************" << endl;

		cout << "Welcome to the Classic Car Museum!" << endl;

		cout << "************************************************" << endl;

		cout << "Please select a car to learn more about it:" << endl;

		cout << "************************************************" << endl;

		cout << "1. Ford Mustang (1964)" << endl;

		cout << "************************************************" << endl;

		cout << "2. Volkswagen Beetle (1963) " << endl;

		cout << "************************************************" << endl;

		cout << "3. Dodge Charger (1969) " << endl;

		cout << "************************************************" << endl;

		cout << "4. Chevrolet Corvette C2 (1963) " << endl;

		cout << "************************************************" << endl;

		cout << "5. Porsche 911 (1964) " << endl;

		cout << "************************************************" << endl;

		cout << "6. Exit" << endl;

		cout << "************************************************" << endl;

		int choice;

		if (!(cin >> choice)) {  // Check if the input is not an integer

			cin.clear();// Clear the error state
			cin.ignore(numeric_limits<streamsize>::max(), '\n');// Ignore the rest of the input
			cout << "Invalid input. Please enter a number." << endl;// Prompt the user to try again
            continue;
        }
		switch(choice){
		case 1: 
			cout << "*************************************************\n"  
			    << "Car name: Ford Mustang (1964)\n"
		    	<< "*************************************************\n"  
				<< " * Engine: 4.7L V8\n"
				<< " * Horsepower: 271 hp\n"
				<< " * Top Speed: 120 mph\n"
				<< " * 0-60 mph: 7.5 seconds\n"
				<< " * Notable Features: Iconic design, affordable price, and strong performance." << endl;
			break;
		case 2:
			cout << "*************************************************\n"
				<< "Car name: Volkswagen Beetle (1963)\n"
				<< "*************************************************\n"
				<< " * Engine: 1.2L flat-four\n"
				<< " * Horsepower: 40 hp\n"
				<< " * Top Speed: 68 mph\n"
				<< " * 0-60 mph: 30 seconds\n"
				<< " * Notable Features: Unique design, reliability, and cultural significance." << endl;
			break;
		case 3:
			cout << "*************************************************\n"
				<< "Car name: Dodge Charger (1969)\n"
				<< "*************************************************\n"
				<< " * Engine: 7.0L V8\n"
				<< " * Horsepower: 425 hp\n"
				<< " * Top Speed: 155 mph\n"
				<< " * 0-60 mph: 5.3 seconds\n"
				<< " * Notable Features: Aggressive styling, powerful engine options, and muscle car status." << endl;
			break;
		case 4:	
			cout << "*************************************************\n"
				<< "Car name: Chevrolet Corvette C2 (1963)\n"
				<< "*************************************************\n"
				<< " * Engine: 5.4L V8\n"
				<< " * Horsepower: 360 hp\n"
				<< " * Top Speed: 150 mph\n"
				<< " * 0-60 mph: 5.8 seconds\n"
				<< " * Notable Features: Sleek design, advanced engineering, and racing heritage." << endl;
			break;
		case 5:
			cout << "*************************************************\n"
				<< "Car name: Porsche 911 (1964)\n"
				<< "*************************************************\n"
				<< " * Engine: 2.0L flat-six\n"
				<< " * Horsepower: 130 hp\n"
				<< " * Top Speed: 130 mph\n"
				<< " * 0-60 mph: 8.5 seconds\n"
				<< " * Notable Features: Timeless design, rear-engine layout, and exceptional handling." << endl;
			break;
			case 6:
				cout << "*************************************************\n" 
					<< "Thank you for visiting the Classic Car Museum! Goodbye!"
					<< "*************************************************" << endl;
				return 0;
				default:
					cout << "*************************************************\n" 
						<< "Invalid choice. Please try again."
						<< "*************************************************" << endl;
					break;
				
				
				
		}

		cout << endl;
	}



}