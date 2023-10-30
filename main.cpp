#include <iostream>
using namespace std;

double pow(double num, int power) {
    double to_return = 1;
    for (int i = 0; i < power; i++)
        to_return *= num;
    return to_return;
}

long tween_factorial(long stop) {
    long summator = 1;
    int i;
    if (not(stop % 2)) {
        i = 2;
    } else {
        i = 1;
    }
    for (; i <= stop; i += 2) {
        summator *= i;
    }

    return summator;
}

double t(double x) {}

double total_answer(double y) {
    return (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(pow(y, 2) - 1));
}


int main() {
    double num = 0;
    cin >> num;
    cout << total_answer(num);
    return 0;
}
