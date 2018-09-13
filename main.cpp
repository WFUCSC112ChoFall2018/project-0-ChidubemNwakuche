#include <iostream>
using namespace std;

class CarRecord {
public:
    void   SetYearMade(int originalYear);
    void   SetVehicleIdNum(int vehIdNum);
    void   Print() const; // calls the function
    CarRecord();
private:
    int    yearMade;
    int    vehicleIdNum;
};

// FIXME: Write constructor, initialize year to 0, vehicle ID num to -1.

CarRecord::CarRecord() //the constructor which is a special function // initializing the numbers
{
    yearMade = 0;
    vehicleIdNum = -1;
}

// after this executes it returns to main

void CarRecord::SetYearMade(int originalYear) {
    yearMade = originalYear;
}

void CarRecord::SetVehicleIdNum(int vehIdNum) {
    vehicleIdNum = vehIdNum;
}

void CarRecord::Print() const { //function to print
    cout << "Year: " << yearMade << ", VIN: " << vehicleIdNum << endl;
}

int main() {
    CarRecord familyCar; // create an instance of car record named familyCar and calls the constructor

    familyCar.Print(); // print out the value changed  constructor
    familyCar.SetYearMade(2009);
    familyCar.SetVehicleIdNum(444555666);
    familyCar.Print(); // print out the value changed by the SetYearMade and SetVehicleIdNum

    return 0;
}