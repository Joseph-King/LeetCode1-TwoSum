//Author: Joseph-King (AlwaysJoeKing)
//Date: Jun 22, 2022

#include <stdio.h>

//Returns indices of values in array that's sum equals the target
void TwoSum(int* arr, int target, const int SIZE){
    //first loop to go through every index
    for(int i=0; i<SIZE; i++){
        //second loop to go through every index after i
        for(int j=i+1; j<SIZE; j++){
            //determine sum
            int sum = arr[i]+arr[j];

            //if sum = target, print array of indicies
            if(sum == target){
                int result[2] = {i, j};

                printf("%d %d\n", i, j);
            }
        }
    }
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
    TwoSum(arr1, target1, SIZE1);
    TwoSum(arr2, target2, SIZE2);
    TwoSum(arr3, target3, SIZE3);

    return 0;
}

