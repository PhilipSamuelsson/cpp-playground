#include <iostream>

using namespace std;

int main()
{

    int total{0};
    int num1{}, num2{}, num3{};
    const int count{3};

    cout << "Choose 3 integers";

    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average{0.0};

    average = static_cast<double>(total) / count;

    cout << "The 3 numbers were " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the number is: " << total << endl;
    cout << "The average is: " << average << endl;

    return 0;
}