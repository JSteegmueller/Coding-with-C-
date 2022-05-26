//
// Created by jsteeg on 4/13/21.
//
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int arr[5] = {3, -1, 4, -2, 0};
    int minIndex = 0;
    int minNum = std::numeric_limits<int>::max();

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        if(arr[i] < minNum) {
            minNum = arr[i];
            minIndex = i;
        }
    }
    printf("Index: %i", minIndex);

    return 0;
}

