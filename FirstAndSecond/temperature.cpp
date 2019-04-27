//
// Created by Александр Машенцев on 2019-04-27.
//

double celsiusToFahrenheit(double cels) {
    double fahr = 1.8 * cels + 32;
    return fahr;
}

double fahrenheitToCelsius(double fahr) {
    double cels = (fahr - 32) / 1.8;
    return cels;
}

