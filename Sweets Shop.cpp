#include <bits/stdc++.h>
using namespace std;

int main() {
    int has_Money;
    int numOfLaddus;

    cin >> has_Money >> numOfLaddus;
    
    // Calculate the total cost of the laddus
    int costOfLaddus = numOfLaddus * 10;

    // Calculate the remaining money after buying laddus
    int remaining_money = has_Money - costOfLaddus;

    // Calculate the number of jalebis that can be bought
    int numOfJalebi = remaining_money / 20;

    // Output the number of jalebis
    cout << numOfJalebi << endl;

    return 0;
}
