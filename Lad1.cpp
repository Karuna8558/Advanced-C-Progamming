#include <iosteam>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base = 2, exponent = 10;

    int return = power(base, exponent);
    cout << base << "^" << exponent << " is " "raised to the power of" <<

    return 0;
}