#include <iostream>
using namespace std;

int fibonanci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonanci(n - 1) + fibonanci(n - 2);
}

int main(){
    cout << "fibonanci(10) = " << fibonanci(10) << endl;
}