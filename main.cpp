#include <iostream>
using namespace std;


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




int main() {
    return 0;
}
