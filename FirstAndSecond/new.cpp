//
// Created by Александр Машенцев on 2019-04-27.
//

#include <iostream>
#include <cmath>

using namespace std;

void commutate(double);

int maoooon() {
    cout << "Mashentsev Alexander Sergeevich" << endl;
    cout << "Pooshkina street, number 29" << endl;
    double forlong;
    cin >> forlong;
    commutate(forlong);
    return 0;
}

void commutate(double farlong) {
    double meters = farlong * 201168;
    double yards = farlong * 220;
    cout << farlong << " forlongs is: " << meters << " meters" << endl;
    cout << farlong << " forlong is : " << yards << " yards." << endl;
}

int output() {
    using namespace std;
    int count = 25;
    string cont = "25";
    cout << "lol kek soobshenie.";
    cout << endl << "line" << endl;
    cout << "novaya stroka";
    printf("printf : %d\n", 25);
    printf("printf : %s\n", "25");
    return 0;
}

int input() {
    int carrots;
    std::cout << "how many?" << std::endl;
    cin >> carrots;
    cout << "here are two more" << endl;
    carrots = carrots << carrots;
    cout << "now you have " << carrots << " carrots." << endl;
    cin.get();
    return 0;
}

void simon(int n) {
    using namespace std;
    cout << "simon says: " << n;
}

int gain() {
    using namespace std;
    double area;
    cout << "chtototam";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "side is :" << side << endl;
    simon(21);
    return 0;
}