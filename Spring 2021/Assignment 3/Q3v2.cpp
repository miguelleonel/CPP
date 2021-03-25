// Filename: Q3.cpp
// EE 5103 Assignment 3; Problem 3
// Miguel Lopez
// 03/24/2021 - Updated with user control of vehicles.

#include <iostream>
#include<string>
using namespace std;

class Car
{
	private:
	string make, model, lane;
	int speed, gear;
	
	public:
	    Car(string make, string model) 
    	{
    		this->make = make;
		this->model = model;
    		speed = 0;
    		gear = 1;
    		lane = "right";
    	}
        void gearUp() 
	{
            gear++;
            if(gear > 6) 
		{
		cout<<"*You're in the highest gear already!*"<<endl;
                gear = 6;
    		}
        }
        void gearDown() 
	{
		gear--;
		if(gear < 1) 
		{
			cout<<"*You're already in first gear!*"<<endl;
			gear = 1;
		}
        }
	void changeLane(char c)
	{
		switch(c)
		{
			case 'l':
				if(lane=="left")
				{
					cout<<"*Already in left-most lane!*"<<endl;
					break;
				}
				else if(lane=="middle")
				{
					cout<<"*Switched to left lane*"<<endl;
					lane="left";
					break;
				}
				else if(lane=="right")
				{
					cout<<"*Switched to middle lane*"<<endl;
					lane="middle";
					break;
				}
			case 'r':
				if(lane=="right")
				{
					cout<<"*Already in right-most lane!*"<<endl;
					break;
				}
				else if(lane=="middle")
				{
					cout<<"*Switched to right lane*"<<endl;
					lane="right";
					break;
				}
				else if(lane=="left")
				{
					cout<<"*Switched to middle lane*"<<endl;
					lane="middle";
					break;
				}
		}
	}
        void accelerate() 
	{
            speed += 5;
            if (speed>85)
            {
                cout<<"*Speed limit 85.*"<<endl;
                speed=85;
            }
        }
        void deaccelerate() 
	{
		speed -= 5;
		if(speed < 0) 
		{
			cout<<"*You're already at 0 MPH.*"<<endl;
			speed = 0;
            	}
        }
	void displayStatus()
	{
		cout<<"\nMake: "<< make<<endl;
		cout<<"Model: "<< model<<endl;
		cout<<"Gear: "<< gear<<endl;
		cout<<"Lane: "<< lane<<endl;
		cout<<"Speed: "<< speed<<" MPH\n";
	}
};

void actionMenu()
{
	cout<<"\nWhat would you like to do?"<<endl;
	cout<<"w. Speed up"<<endl;
	cout<<"s. Slow down"<<endl;
	cout<<"a. Move left"<<endl;
	cout<<"d. Move right"<<endl;
	cout<<"t. Shift up"<<endl;
	cout<<"g. Shift down"<<endl;
	cout<<"m. Car menu"<<endl;
	cout<<"\nq. Quit program."<<endl;
	cout<<"Your choice: ";	
}

void carMenu()
{
	cout<<"\nWhich vehicle would you like to take for a spin?"<<endl;
	cout<<"1. Ford Mustang"<<endl;
	cout<<"2. Chevrolet Camaro"<<endl;
	cout<<"3. Dodge Charger"<<endl;
	cout<<"\nq. Quit program."<<endl;
	cout<<"Your choice: ";	
}


int main ()
{
	char c,n;   // action choice & car choice
		// easier to check for valid input when used as char versus int

	Car mycar("Ford","Mustang");
	Car my2car("Chevrolet","Camaro");
	Car my3car("Dodge","Charger");
	cout<<"Enter q at any time to quit."<<endl;
	
	VEHICLE:carMenu();cin >> n;
	switch (n)
	{
	    case 'q':
		break;
		case '1':         // Mustang
			LOOP1:mycar.displayStatus();actionMenu();cin >> c;
			switch(c)
			{
				case 'w':
					mycar.accelerate();
					goto LOOP1;  
				case 'a':
					mycar.changeLane('l');
					goto LOOP1;  
				case 's':
					mycar.deaccelerate();
					goto LOOP1;  
				case 'd':
					mycar.changeLane('r');
					goto LOOP1;  
				case 't':
					mycar.gearUp();
					goto LOOP1;  
				case 'g':
					mycar.gearDown();
					goto LOOP1;  
				case 'm':
					goto VEHICLE;  
				case 'q':   // using this case instead of while(c!='q')
					break;
				default:
					cout<<"Invalid key"<<endl;
					goto LOOP1;  
			}
			break;
		case '2':         // Camaro
			LOOP2:my2car.displayStatus();actionMenu();cin >> c;
			switch(c)
			{
				case 'w':
					my2car.accelerate();
					goto LOOP2;  
				case 'a':
					my2car.changeLane('l');
					goto LOOP2;  
				case 's':
					my2car.deaccelerate();
					goto LOOP2;  
				case 'd':
					my2car.changeLane('r');
					goto LOOP2;  
				case 't':
					my2car.gearUp();
					goto LOOP2;  
				case 'g':
					my2car.gearDown();
					goto LOOP2;  
				case 'm':
					goto VEHICLE;  
				case 'q':   // using this case instead of while(c!='q')
					break;
				default:
				    	cout<<"Invalid key"<<endl;
				    	goto LOOP2;  
			}
			break;
		case '3':         // Charger
			LOOP3:my3car.displayStatus();actionMenu();cin >> c;
			switch(c)
			{
				case 'w':
					my3car.accelerate();
					goto LOOP3;  
				case 'a':
					my3car.changeLane('l');
					goto LOOP3;  
				case 's':
					my3car.deaccelerate();
					goto LOOP3;  
				case 'd':
					my3car.changeLane('r');
					goto LOOP3;  
				case 't':
					my3car.gearUp();
					goto LOOP3;  
				case 'g':
					my3car.gearDown();
					goto LOOP3;  
				case 'm':
					goto VEHICLE;  
				case 'q':   // using this case instead of while(c!='q')
					break;
				default:
			    		cout<<"Invalid key"<<endl;
			    		goto LOOP3;  
			}
			break;
		default:
		    cout<<"Invalid key"<<endl;
		    goto VEHICLE;
		} 
	return 0;
}
