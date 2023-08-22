#include <iostream>
#include <cmath>

using namespace std;

int main (){
    double a;
    double b;
    double c;

    cout << "Insert the values of A and B" << endl;

    cout << "A value." << endl;
    cin >> a;
    cout << "B value." << endl;
    cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    cout << "The hypotenuse value is: " << c;

    return 0;
}