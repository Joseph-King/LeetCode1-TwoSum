//Author: Joseph-King (AlwaysJoeKing)
//Date: Jun 21, 2022

//Returns indicies of array for values that add up to target
function TwoSum(arr, target) {

    //first for loop to visit every index
    for(let i=0; i<arr.length; i++){

        //second for loop to visit every index after i
        for(let j=i+1; j<arr.length; j++){

            //calculate sum
            let sum = arr[i] + arr[j];

            //if sum = target, return indices in array
            if(sum === target) {
                return [i, j];
            }
        }
    }
}

//Array test cases
var arr1 = [2, 7, 11, 15];
var arr2 = [3, 2, 4];
var arr3 = [3, 3];

//Target test cases
var target1 = 9;
var target2 = 6;
var target3 = 6;

//Run Test Cases
console.log(TwoSum(arr1, target1));
console.log(TwoSum(arr2, target2));
console.log(TwoSum(arr3, target3));