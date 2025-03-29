#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "the size of vector1 is " << vector1.size() << endl;
    cout << "First element: " << vector1.at(0) << endl
         << "And the second element is: " << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "the size of vector2 is " << vector2.size() << endl;
    cout << "First element: " << vector2.at(0) << endl
         << "And the second element is: " << vector2.at(1) << endl;

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "The first element in the 2d array is: " << vector_2d.at(0).at(0) << endl;

    vector1.at(0) = 1000;

    cout << "The first value is now changed to " << vector_2d.at(0).at(0) << endl;
    cout << "The size of the first vector " << vector_2d.at(0).size() << endl;
    

    return 0;
}