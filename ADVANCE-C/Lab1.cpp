#include <iostream>

using namespace std;

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base,exponent - 1);
}

int main () {
    int base = 2, expontent = 10;

    int result = power(base, expontent);
    cout << base << " ^ " << expontent << " is " << result << endl;

    return 0;
}