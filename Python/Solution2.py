#Author: Joseph-King
#Date: Jun 21, 2022

#Returns indicies for array for values that add up to target
def twoSum(arr, target):
    #Initialize empty dictionary
    dict = {}

    #For loop to construct dictionary
    for i, num in enumerate(arr):
        #If key in dict, append index value to array
        if(num in dict):
            dict[num].append(i)
        #If key not in dict, create array with first value as index
        else:
            dict[num] = [i]

    #For loop through keys in dictionary
    for key in dict:
        #New target is target key
        new_target = target - key

        #If key is the new target, confirm there is more than 1 index in array, return indices
        if key == new_target and len(dict[key]) > 1:
            return [dict[key][0], dict[key][1]]
        #If key is not in array, and new target in dict, return indices
        elif key != new_target and new_target in dict:
            return [dict[key][0], dict[new_target][0]]


#Array test cases
arr1 = [2, 7, 11, 15]
arr2 = [3, 2, 4]
arr3 = [3, 3]

#Target test cases
target1 = 9
target2 = 6
target3 = 6

#Run Test Cases
print(twoSum(arr1, target1))
print(twoSum(arr2, target2))
print(twoSum(arr3, target3))