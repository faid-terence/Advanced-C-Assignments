#include <iostream>

class Money {
private:
    int thousands;
    int hundreds;
    int tens;

public:
    Money(int thousands = 0, int hundreds = 0, int tens = 0) {
        this->thousands = thousands;
        this->hundreds = hundreds;
        this->tens = tens;
    }

    int getThousands() const {
        return thousands;
    }

    void setThousands(int thousands) {
        this->thousands = thousands;
    }

    int getHundreds() const {
        return hundreds;
    }

    void setHundreds(int hundreds) {
        this->hundreds = hundreds;
    }

    int getTens() const {
        return tens;
    }

    void setTens(int tens) {
        this->tens = tens;
    }

    int toInteger() const {
        return (thousands * 1000) + (hundreds * 100) + (tens * 10);
    }

    Money addMoney(const Money& other) const {
        int totalThousands = thousands + other.getThousands();
        int totalHundreds = hundreds + other.getHundreds();
        int totalTens = tens + other.getTens();

        // Handle conversion if necessary
        if (totalHundreds >= 100) {
            totalThousands += totalHundreds / 100;
            totalHundreds %= 100;
        }
        if (totalTens >= 10) {
            totalHundreds += totalTens / 10;
            totalTens %= 10;
        }

        return Money(totalThousands, totalHundreds, totalTens);
    }
};

int main() {
    Money money1(2, 5, 7);
    Money money2(3, 8, 4);
    Money money3(1, 12, 9);  // This will require conversion

    std::cout << "Money 1: " << money1.toInteger() << " cents" << std::endl;
    std::cout << "Money 2: " << money2.toInteger() << " cents" << std::endl;
    std::cout << "Money 3: " << money3.toInteger() << " cents" << std::endl;

    Money result = money1.addMoney(money2);
    std::cout << "Money 1 + Money 2: " << result.toInteger() << " cents" << std::endl;

    result = money1.addMoney(money3);
    std::cout << "Money 1 + Money 3: " << result.toInteger() << " cents" << std::endl;

    return 0;
}
