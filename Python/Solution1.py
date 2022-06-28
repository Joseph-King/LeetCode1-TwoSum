#Author: Joseph-King
#Date: Jun 21, 2022

#Returns indicies for array for values that add up to target
def two_sum(arr, target):
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
print(two_sum(arr1, target1))
print(two_sum(arr2, target2))
print(two_sum(arr3, target3))