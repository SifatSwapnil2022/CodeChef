#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int numbers;
        cin >> numbers;

        // Declare arrays with appropriate size
        int vec[numbers+1]; // Assuming maximum of 100 numbers + 1 for the pivot
        int store[numbers]; // Store for elements excluding the pivot
        int answer = 0;

        // Read numbers and calculate the total sum
        for (int i = 0; i <= numbers; i++) {
            cin >> vec[i];
            answer += vec[i];
            if (i < numbers) {
                store[i] = vec[i]; // Only store the first 'numbers' elements
            }
        }

        // Sort the store array
        sort(store, store + numbers);

        int some = vec[numbers]; // The pivot element
        // Initialize a flag to check if any valid element is found
        bool found = false;

        // Iterate over the sorted store array
        for (int i = 0; i < numbers; i++) {
            if (store[i] > some && store[i] <= 2 * some) {
                some = store[i];
                found = true; // Found a valid element
            }
        }

        // If no valid element was found, keep some as the original pivot
        if (!found) {
            some = vec[numbers]; // Ensure we don't change 'some' if no valid element was found
        }

        // Subtract the found value from the total sum
        answer -= some;
        cout << answer << endl;
    }

    return 0;
}
