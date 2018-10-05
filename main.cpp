#include <iostream>

using namespace std;


int cubic_mss(int input[], int arraySize) {
    int maxSum = 0;
    for (int i = 0; i < arraySize; i++) {
        for (int j = i; j < arraySize; j++) {
            int thisSum = 0;
            for (int k = i; k <= j; k++) {
                thisSum += input[k];
            }
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int quadratic_mss(int input[], int arraySize) {
    int maxSum = 0;
    for (int i = 0; i < arraySize; i++) {
        int thisSum = 0;
        for (int j = i; j < arraySize; j++) {
            thisSum = thisSum + input[j];
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int linear_mss(int input[], int arraySize) {
    int maxSum = 0;
    int thisSum = 0;
    for (int i = 0; i < arraySize; i++) {
        thisSum = thisSum + input[i];
        if (thisSum > maxSum) {
            maxSum = thisSum;
        } else if (thisSum < 0) {
            thisSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int arr1[] = {1, 2, -30, 4, 5};
    int arr2[] = {1};
    int arr3[] = {-2};
    int arr4[] = {1,2,3,4,5,-30, -22, 233};
    int arr5[] = {-1, 1};
    int arr6[] = {2, -2, 3, -7};
    int arraySize1 = sizeof(arr1)/sizeof(arr1[0]);
    int arraySize2 = sizeof(arr2)/sizeof(arr2[0]);
    int arraySize3 = sizeof(arr3)/sizeof(arr3[0]);
    int arraySize4 = sizeof(arr4)/sizeof(arr4[0]);
    int arraySize5 = sizeof(arr5)/sizeof(arr5[0]);
    int arraySize6 = sizeof(arr6)/sizeof(arr6[0]);
    int css1 = cubic_mss(arr1, arraySize1);
    int css2 = cubic_mss(arr2, arraySize2);
    int css3 = cubic_mss(arr3, arraySize3);
    int css4 = cubic_mss(arr4, arraySize4);
    int css5 = cubic_mss(arr5, arraySize5);
    int css6 = cubic_mss(arr6, arraySize6);
    cout << css1 << endl;
    cout << css2 << endl;
    cout << css3 << endl;
    cout << css4 << endl;
    cout << css5 << endl;
    cout << css6 << endl;

    return 0;
}

