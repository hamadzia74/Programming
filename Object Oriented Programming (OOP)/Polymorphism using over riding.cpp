// Program is Not Completed 
#include<iostream>
using namespace std;
class Vehicle
{
	public:
		string Vehicle_Type, Vehicle_Info, Vehicle_name; 
		int Vehicle_no;
		void Generalinfo()
		{
			cout<<"Enter the Type of Vehicle:"<<endl;
			cin>>Vehicle_Type;
			cout<<"Enter the Info. of Vehicle:"<<endl;
			cin>>Vehicle_Info;
			cout<<"Enter the Name of Vehicle:"<<endl;
			cin>>Vehicle_name;
			cout<<"Enter the Number of Vehicle:"<<endl;
			cin>>Vehicle_no;
		}
		void Vehicleinfo()
		{
			cout<<"The Type of Vehicle is "<<Vehicle_Type<<endl;
			cout<<"The Info. of Vehicle is "<<Vehicle_Info<<endl;
			cout<<"The Name of Vehicle is "<<Vehicle_name<<endl;
			cout<<"The Number of Vehicle is "<<Vehicle_no<<endl;
		}
};
class Car:public Vehicle
{   
    public:
	string Vehicle_Company, Vehicle_Owner_name;
	int Vehicle_Capacity, Vehicle_Engine_No; 
	void Generalinfo()
	{
		Vehicle::Vehicleinfo();
			cout<<"Enter the Company of Car:"<<endl;
			cin>>Vehicle_Company;
			cout<<"Enter the Capacity of Car:"<<endl;
			cin>>Vehicle_Capacity;
			cout<<"Enter the Engine No. of Car:"<<endl;
			cin>>Vehicle_Engine_No;
			cout<<"Enter the Owner Name of Car:"<<endl;
			cin>>Vehicle_Owner_name;
	}
	void Vehicleinfo()
		{
			cout<<"The Company of Car is "<<Vehicle_Company<<endl;
			cout<<"The Capacity of Car is "<<Vehicle_Capacity<<endl;
			cout<<"The Engine No. of Car is "<<Vehicle_Engine_No<<endl;
			cout<<"The  Owner Name of Car is "<<Vehicle_Owner_name<<endl;
		}
};
class Truck:public Vehicle
{
	public:
	string Truck_Company, Truck_Root, Truck_Loading_Company; 
	int Truck_Capacity;
	void Generalinfo()
	{
		Vehicle::Vehicleinfo();
			cout<<"Enter the Company of Truck:"<<endl;
			cin>>Truck_Company;
			cout<<"Enter the Capacity of Truck:"<<endl;
			cin>>Truck_Capacity;
			cout<<"Enter the Root of Truck:"<<endl;
			cin>>Truck_Root;
			cout<<"Enter the Loading Company of Truck:"<<endl;
			cin>>Truck_Loading_Company;
	}
	void Vehicleinfo()
		{
			cout<<"The Company of Truck is "<<Truck_Company<<endl;
			cout<<"The Capacity of Truck is "<<Truck_Capacity<<endl;
			cout<<"The Root of Truck is "<<Truck_Root<<endl;
			cout<<"The Loading Company of Truck is "<<Truck_Loading_Company<<endl;
		}
};
class Bike:public Vehicle
{
	public:
		string Vehicle_Type, Vehicle_Info, Vehicle_name; 
		int Vehicle_no;
	void Generalinfo()
	{
		Vehicle::Vehicleinfo();
			cout<<"Enter the Type of Vehicle:"<<endl;
			cin>>Vehicle_Type;
			cout<<"Enter the Info. of Vehicle:"<<endl;
			cin>>Vehicle_Info;
			cout<<"Enter the Name of Vehicle:"<<endl;
			cin>>Vehicle_name;
			cout<<"Enter the Number of Vehicle:"<<endl;
			cin>>Vehicle_no;
	}
	void Vehicleinfo()
		{
			cout<<"The Type of Vehicle is "<<Vehicle_Type<<endl;
			cout<<"The Info. of Vehicle is "<<Vehicle_Info<<endl;
			cout<<"The Name of Vehicle is "<<Vehicle_name<<endl;
			cout<<"The Number of Vehicle is "<<Vehicle_no<<endl;
		}
};
int main()
{
	Vehicle *V;
	V->Generalinfo();
	V->Vehicleinfo();
	Car *C;
	C->Generalinfo();
	C->Vehicleinfo();
	Truck *T;
	T->Generalinfo();
	T->Vehicleinfo();
	Bike *B;
	B->Generalinfo();
	B->Vehicleinfo();
	system("pause");
}
