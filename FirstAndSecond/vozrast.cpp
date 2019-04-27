//
// Created by Александр Машенцев on 2019-04-27.
//

#include <iostream>

int yearsToMonths(int);

int main() {
    int years;
    std::cout << "Enter your age: ";
    std::cin >> years;
    std::cout << std::endl << "You live " << yearsToMonths(years) << " months.";
    return 0;
}

int yearsToMonths(int years) {
    int monthsInYears = years * 12;
    return monthsInYears;
}