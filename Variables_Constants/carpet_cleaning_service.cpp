#include <iostream>

using namespace std;

int main()
{

    const int price_per_small_room = 25;
    const int price_per_large_room = 35;
    float tax = 0.06;
    const int estimate_validation = 30;

    int number_of_small_rooms{0};
    int number_of_large_rooms{0};

    cout << "Welcome to Franks carpet cleaning service. How many small rooms would you like to clean?" << endl;
    cin >> number_of_small_rooms;
    cout << "How many large rooms would you like to clean?" << endl;
    cin >> number_of_large_rooms;

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    if (number_of_large_rooms == 0 && number_of_small_rooms == 0)
    {
        tax = 0;
    }

    int cost = (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms);

    cout << "cost: $" << cost << endl;
    cout << "Tax: $" << tax * cost << endl;

    cout << "===================" << endl;

    cout << "total estimate: $" << cost + tax << endl;
    cout << "This estimate is vaid for " << estimate_validation << " days" << endl;

    return 0;
}