#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

class Vehicle
{
	public:
	int wheel;
	int person;
	
//	public:
	Vehicle(int w , int p)
	{
		this->wheel=w;
		this->person=p;	
	}
	void SetWheel(int w)
	{
		this->wheel=w;
	}
	void SetPerson(int p)
	{
		this->person=p;
	}
	int getWeel()
	{
		return this->wheel;
	}
	int GetPerson()
	{
		return this->person;
	}
	virtual void display()
	{
		printf("\nNo of wheel is %d",this->wheel);
		printf("\nNo of Person is %d",this->person);
	}
};
class TwoWheeler :public Vehicle
{
	public:
	
	TwoWheeler(int w, int p):Vehicle(w,p)
	{
		int tol_charge;
		printf("\nTwoWheeler\n");
		if(p>2)
		{
			p=(p-2);
			tol_charge=(p*10)+20;
			printf("tol charge is %d",tol_charge);
		}
		else
		{
			tol_charge=20;
			printf("\ntol charge on Tow Wheeler is %d\n",tol_charge);
		}
	}
};
class Threewheeler :public Vehicle
{
	public:
	
	Threewheeler(int w, int p):Vehicle(w,p)
	{
		int tol_charge;
		printf("\nThreewheeler\n");
		if(p>3)
		{
			p=(p-3);
			tol_charge=(p*20)+30;
			printf("tol charge is %d",tol_charge);
		}
		else
		{
			tol_charge=30;
			printf("\ntol charge on Three Wheeler is %d\n",tol_charge);
		}
	}
};
class FourWheeler :public Vehicle
{
	public:
	
	FourWheeler(int w, int p):Vehicle(w,p)
	{
		int tol_charge;
		printf("\nFour wheeler\n");
		if(p>4)
		{
			p=(p-4);
			tol_charge=(p*30)+40;
			printf("tol charge is %d",tol_charge);
		}
		else
		{
			tol_charge=40;
			printf("\ntol charge on Four Wheeler is %d\n",tol_charge);
		}
	}
};
class HeavyVehicle :public Vehicle
{
	public:
	
	HeavyVehicle(int w, int p):Vehicle(w,p)
	{
		printf("\nHeavy Vehicle\n");
		int tol_charge;
		if(p>6)
		{
			p=(p-6);
			tol_charge=(p*60)+60;
			printf("tol charge is %d",tol_charge);
		}
		else
		{
			tol_charge=60;
			printf("\ntol charge on Heavy Vehicle is %d\n",tol_charge);
		}
	}
};
int main()
{
//	Vehicle v1(4,4);
//	v1.display();
	int p,w;
	printf("\nEnter 2 for Two Wheeler vehicle : ");
	printf("\nEnter 3 for Three Wheeler vehicle : ");
	printf("\nEnter 4 for four Wheeler vehicle : ");
	printf("\nEnter 6 or more then 6 for heavy vehicle : ");
	
	printf("\nEnter the vehicle : ");
	scanf("%d",&w);
	printf("\nEnter the number of person : ");
	scanf("%d",&p);
	
	if(w==2)
	{
		TwoWheeler T1(w,p);
		T1.display();
	}
	if(w==3)
	{
		Threewheeler T1(w,p);
		T1.display();
	}
	if(w==4)
	{
		FourWheeler T1(w,p);
		T1.display();
	}
	if(w>4)
	{
		HeavyVehicle T1(w,p);
		T1.display();
	}	
}


