// Filename: Q3.cpp
// EE 5103 Assignment 3; Problem 3
// Miguel Lopez
// 03/24/2021

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
            cout<<"*Shifted into gear "<<gear<<"*"<<endl;
            if(gear > 6) 
			{
				cout<<"*You're in the highest gear already!*"<<endl;
                gear = 6;
            }
        }
        void gearDown() 
		{
            gear--;
            cout<<"*Shifted into gear "<<gear<<"*"<<endl;
            if(gear < 1) 
			{
				cout<<"*You're already in first gear!*"<<endl;
                gear = 1;
            }
        }
		void changeLane(char c)
		{
			if(c=='l')
			{
					if(lane=="left")
					{
						cout<<"*Already in left-most lane!*"<<endl;
					}
					else if(lane=="middle")
					{
						cout<<"*Switched to left lane*"<<endl;
						lane="left";
					}
					else if(lane=="right")
					{
						cout<<"*Switched to middle lane*"<<endl;
						lane="middle";
					}
			}
			if(c=='r')
			{
					if(lane=="right")
					{
						cout<<"*Already in right-most lane!*"<<endl;
					}
					else if(lane=="middle")
					{
						cout<<"*Switched to right lane*"<<endl;
						lane="right";
					}
					else if(lane=="left")
					{
						cout<<"*Switched to middle lane*"<<endl;
						lane="middle";
					}
			}
		}
        void accelerate() 
		{
		    cout<<"*Speeding up by 5 MPH*"<<endl;
            speed += 5;
        }
        void deaccelerate() 
		{
		    cout<<"*Slowing down by 5 MPH*"<<endl;
            speed -= 5;
            if(speed < 0) 
			{
                speed = 0;
            }
        }
		void displayStatus()
		{
			cout<<"\nMake: "<< make<<endl;
			cout<<"Model: "<< model<<endl;
			cout<<"Gear: "<< gear<<endl;
			cout<<"Lane: "<< lane<<endl;
			cout<<"Speed: "<< speed<<" MPH"<<endl;
		}
};


int main ()
{
	Car mycar("Ford","Mustang");
	Car my2car("Chevrolet","Camaro");
	Car my3car("Dodge","Charger");
	
	mycar.displayStatus();  // initially stationary.
	mycar.accelerate();mycar.accelerate();
	mycar.displayStatus();
	mycar.changeLane('r');mycar.gearUp();
	mycar.displayStatus();
	
	my2car.displayStatus(); // initially stationary.
	my2car.accelerate();
	my2car.displayStatus();
	my2car.changeLane('l');my2car.changeLane('l');
	my2car.accelerate();my2car.gearUp();
	my2car.accelerate();my2car.gearUp();
	my2car.deaccelerate();my2car.gearDown();
	my2car.displayStatus();
	
	my3car.displayStatus(); // initially stationary.
	my3car.accelerate();my3car.gearUp();
	my3car.changeLane('l');
	my3car.accelerate();my3car.gearUp();
	my3car.displayStatus();
	
	return 0;
}
