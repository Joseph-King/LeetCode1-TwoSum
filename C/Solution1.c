//Author: Joseph-King
//Date: Jun 22, 2022

#include <stdio.h>

//Returns indices of values in array that's sum equals the target
int* TwoSum(int* arr, int target, const int SIZE, int* test){
    //first loop to go through every index
    for(int i=0; i<SIZE; i++){
        //second loop to go through every index after i
        for(int j=i+1; j<SIZE; j++){
            //determine sum
            int sum = arr[i]+arr[j];

            //if sum = target, print array of indicies
            if(sum == target){
                test[0] = i;
                test[1] = j;

                return(test);
            }
        }
    }

    return(test);
}

//Main function
int main() {
    //size of test cases
    const int SIZE1 = 4;
    const int SIZE2 = 3;
    const int SIZE3 = 2;

    //Array test cases
    int arr1[SIZE1] = {2, 7, 11, 15};
    int arr2[SIZE2] = {3, 2, 4};
    int arr3[SIZE3] = {3, 3};

    //Target test cases
    int target1 = 9;
    int target2 = 6;
    int target3 = 6;

    //Results
    int test[2];

    int* result1 = TwoSum(arr1, target1, SIZE1, test);
    printf("%d %d\n", result1[0], result1[1]);

    int* result2 = TwoSum(arr2, target2, SIZE2, test);
    printf("%d %d\n", result2[0], result2[1]);

    int* result3 = TwoSum(arr3, target3, SIZE3, test);
    printf("%d %d\n", result3[0], result3[1]);

    return 0;
}

