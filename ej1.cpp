#include <iostream>
using namespace std;

template <typename T>
T calcularMayor(T num1, T num2, T num3) {
    if (num1 >= num2 && num1 >= num3) return num1;
    else if (num2 >= num1 && num2 >= num3) return num2;
    return num3;
}

int main()
{
    float a = 1.45, b = 10.54, c = 4;
    cout << calcularMayor<float>(a, b, c);
}
