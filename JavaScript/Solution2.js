//Author: Joseph-King
//Date: Jun 21, 2022

//Returns indicies of array for values that add up to target
function twoSum(arr, target) {

    //set map
    let map = {};

    //first for loop to convert array to hashmap
    for(let i=0; i<arr.length; i++){
        //If found push to array at key, if not create array at key
        if(map[arr[i]]){
            map[arr[i]].push(i);
        } else {
            map[arr[i]] = [i];
        }
    }
    
    //loop for each key of map
    for(let key in map){
        //determine new target
        let new_target = target - key;

        //if new target exists return array, if new target === key make sure there are two values present
        if(key === new_target && map[key].length > 1){
            return [map[key][0], map[key][1]];
        } else if (key !== new_target && map[new_target]) {
            return [map[key][0], map[new_target][0]];
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
console.log(twoSum(arr1, target1));
console.log(twoSum(arr2, target2));
console.log(twoSum(arr3, target3));