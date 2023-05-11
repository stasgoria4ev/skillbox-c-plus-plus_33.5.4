#include <iostream>

template < typename T >
struct Array {
    __attribute__((unused)) T array[8];
};
template < typename T >
Array<T> structArray;

template < typename T >
void ArithmeticalMean() {
    T sum = 0;
    for (int i = 0; i < 8; ++i)
        sum += structArray<T>.array[i];
    std::cout << "Arithmetic mean of an array: " << sum / 8 << '\n';
}

template < typename T >
void Input()
{
    std::cout << "Fill the array (8):\n";
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "Enter the number " << i + 1 << ": ";
        T number;
        std::cin >> number;
        structArray<T>.array[i] = number;
    }
    ArithmeticalMean<T>();
}

int main() {
    Input<long double>();
}