#include <iostream>

using namespace std;

int main() {
    int tankCapacity;
    double milesPerGallon;
    int totalMiles;

    // Receive input for tank capacity in gallons
    cout << "Please enter the tank capacity of your vehicle in gallons: ";
    cin >> tankCapacity;
    cout << endl;

    // Receive input for miles per gallon
    cout << "Please enter the miles per gallon of your vehicle: ";
    cin >> milesPerGallon;
    cout << endl;

    // Calculate the number of miles the car can be driven without refueling
    totalMiles = tankCapacity * milesPerGallon;

    // Output totalMiles
    cout << "Car can go " << totalMiles << " miles without refueling." << endl;

    return 0;
}