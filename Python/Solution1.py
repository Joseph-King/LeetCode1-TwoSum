#Author: Joseph-King
#Date: Jun 21, 2022

#Returns indicies for array for values that add up to target
def twoSum(arr, target):
    #First for loop to visit every index
    for i in range(len(arr)):
        #Second loop to visit every index after i
        for j in range(i+1, len(arr)):
            #Calculate sum
            sum = arr[i] + arr[j]

            #If sum = target, return indices in array
            if sum == target:
                return [i, j]

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