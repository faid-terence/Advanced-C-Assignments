#include <iostream>
#include <string>

class Flight {
private:
    int flightNumber;
    std::string destination;
    float distance;
    float fuel;

    // Private member function to calculate fuel based on distance
    void CALFUEL() {
        if (distance <= 1000) {
            fuel = 500.0f;
        } else if (distance <= 2000) {
            fuel = 1100.0f;
        } else {
            fuel = 2200.0f;
        }
    }

public:
    // Public member function to input data and calculate fuel
    void FEEDINFO() {
        std::cout << "Enter Flight Number: ";
        std::cin >> flightNumber;
        std::cin.ignore(); // Clear the newline character from the input buffer

        std::cout << "Enter Destination: ";
        std::getline(std::cin, destination);

        std::cout << "Enter Distance (in miles): ";
        std::cin >> distance;

        CALFUEL(); // Calculate fuel based on distance
    }

    // Public member function to display flight information
    void SHOWINFO() const {
        std::cout << "Flight Number: " << flightNumber << std::endl;
        std::cout << "Destination: " << destination << std::endl;
        std::cout << "Distance: " << distance << " miles" << std::endl;
        std::cout << "Fuel Required: " << fuel << " liters" << std::endl;
    }
};

int main() {
    Flight flight;

    // Input flight information and calculate fuel
    flight.FEEDINFO();

    // Display flight information
    std::cout << "\nFlight Information:\n";
    flight.SHOWINFO();

    return 0;
}
