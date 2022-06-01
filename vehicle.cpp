#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    int price;
    string mileage;
    void set_vehicle_data();
};
class Car : public Vehicle
{
protected:
    int ownship_cost, seating_capacity;
    string fuel_type, warranty;

public:
    void set_car_data();
    void get_car_details()
    {
        cout << "The cost of the Car is: " << price << endl;
        cout << "The ownship cost of Car bn is: " << ownship_cost << endl;
        cout << "The seating Capacity of the Car is: " << seating_capacity << endl;
        cout << "The mileage of the Car is: " << mileage << endl;
        cout << "The waranty of the Car is: " << warranty << endl;
        cout << "Fuel type: " << fuel_type << endl;
        cout << "-----------------------------------------------------------------------------------\n"<< endl;
    }
};

class Audi : public Car
{
protected:
    string model_type;

public:
    void set_audi_details()
    {
        Vehicle set_vehicle_data();
        {
            mileage = "18.25 kmpl";
            price = 4080000;
        }
        Car set_car_data();
        {
            ownship_cost = 4771808;
            seating_capacity = 5;
            fuel_type = "Diesel";
            warranty = "24 Months";
        }
        model_type = " Audi A4";
    }
    void get_Audi_details()
    {
        cout << "The model of Car is: " << model_type << endl;
        get_car_details();
    }
};
class Ford : public Car
{
protected:
    string model_type;

public:
    void set_ford_details()
    {
        Vehicle set_vehicle_data();
        {
            mileage = "12.9 kmpl";
            price = 3180000;
        }
        Car set_car_data();
        {
            ownship_cost = 3320000;
            seating_capacity = 7;
            fuel_type = "Petrol";
            warranty = "24 Months";
        }
        model_type = "Ford Endeavour";
    }
    void get_ford_details()
    {
        cout << "The model of Car is: " << model_type << endl;
        get_car_details();
    }
};
class Bike : public Vehicle
{
protected:
    int number_of_cylinder, number_of_gears, fuel_tank;
    string wheel_type, cooling_type;

public:
    void set_bike_details();
    void get_bike_details()
    {
        cout << "Price: " << price << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Number of cylinder: " << number_of_cylinder << endl;
        cout << "Number of gears: " << number_of_gears << endl;
        cout << "Capacity of Fuel Tank: "<<fuel_tank<<"L"<< endl;
        cout << "Wheel Type: " << wheel_type << endl;
        cout << "Cooling Type: " << cooling_type << endl;
        cout << "-----------------------------------------------------------------------------------\n"<< endl;
    }
};

class Bajaj : public Bike
{
protected:
    string make_type;

public:
    void set_Bajaj_details()
    {
        Vehicle set_vehicle_data();
        {
            price = 130000;
            mileage = "40.84 kmpl";
        }
        Bike set_bike_details();
        {
            number_of_cylinder = 1;
            number_of_gears = 6;
            fuel_tank = 12;
            wheel_type = "Alloys";
            cooling_type = "Oil";
        }
        make_type = "Bajaj Pulsar NS200";
    }
    void get_Bajaj_details()
    {
        cout << "The model of the Bike is: " << make_type << endl;
        get_bike_details();
    }
};
class TVS : public Bike
{
protected:
    string make_type;

public:
    void set_TVS_details()
    {
        Vehicle set_vehicle_data();
        {
            price = 103000;
            mileage = "35.44 kmpl";
        }
        Bike set_bike_details();
        {
            number_of_cylinder = 1;
            number_of_gears = 6;
            fuel_tank = 10;
            wheel_type = "Alloys";
            cooling_type = "Oil";
        }
        make_type = "TVS Apache RTR 160";
    }
    void get_TVS_details()
    {
        cout << "The model of the Bike is: " << make_type << endl;
        get_bike_details();
    }
};

int main()
{
    Audi A;
    A.set_audi_details();
    A.get_Audi_details();
    Ford B;
    B.set_ford_details();
    B.get_ford_details();
    Bajaj C;
    C.set_Bajaj_details();
    C.get_Bajaj_details();
    TVS D;
    D.set_TVS_details();
    D.get_TVS_details();
    return 0;
}