/*Author: corn
Finds mode (if even number of elements finds the average of the two), mean, and median given that the user inputs a series of numbers*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// Function to sort an array
void arraySort(double array[], int numOfInts) {
    // Sort the array in numerical order using std::sort
    sort(array, array + numOfInts);
    cout << "Sorted Array: ";
    for (int i = 0; i < numOfInts; i++) {
        cout << array[i] << ", ";
    }
    cout << endl;
}

// Function to calculate mode
void mode(double array[], int num) {
    map<double, int> freqMap;
    for (int i = 0; i < num; i++) {
        freqMap[array[i]]++; // Count occurrences of each element
    }

    int maxCount = 0;
    double modeValue = -1;
    bool hasMode = false;

    for (auto it : freqMap) {
        if (it.second > maxCount) {
            maxCount = it.second;
            modeValue = it.first;
            hasMode = true;
        }
    }

    if (hasMode && maxCount > 1) {
        cout << "Mode is " << modeValue << " (appeared " << maxCount << " times)" << endl;
    } else {
        cout << "There is no mode." << endl;
    }
}

// Function to calculate median
void median(double array[], int num) {
    if (num % 2 != 0) {
        cout << "The median is " << array[num / 2] << endl;
    } else {
        double average = (array[num / 2] + array[(num / 2) - 1]) / 2.0;
        cout << "The median is " << average << endl;
    }
}

// Function to calculate mean
double mean(double array[], int num) {
    double sum = 0;
    for (int i = 0; i < num; i++) {
        sum += array[i];
    }
    return sum / num;
}

int main() {
    int numOfInts;

    // Ask user for number of integers
    cout << "Enter the number of integers: ";
    cin >> numOfInts;

    if (numOfInts <= 0) {
        cout << "Number of integers must be positive." << endl;
        return 1;
    }

    double array[numOfInts];

    // Ask user to input the numbers
    cout << "Enter " << numOfInts << " numbers:" << endl;
    for (int i = 0; i < numOfInts; i++) {
        cin >> array[i];
    }

    // Calculate and display mean
    double average = mean(array, numOfInts);
    cout << "Mean is " << average << endl;

    // Sort the array and display median and mode
    arraySort(array, numOfInts);
    median(array, numOfInts);
    mode(array, numOfInts);

    return 0;
}
