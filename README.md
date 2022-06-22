# LeetCode1-TwoSum
 Solutions to the Leet Code Prompt in different languages

# Prompt
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

# Plan
 - Brute Force: time - O(n^2) space - O(1)
    Nested For Loop, Loop through array, then loop through array at i+1, compare sum of indexes to target, if matched return indexes
 - Hash Map Solution: time - O(n) space - O(n)
    Loop through array and convert array to hashmap (key - number, value - index). Loop through keys of the map and subtract current key from target, and search map for that value. *Note* This only works if each value is unique, to have this work for multiples of the same number, value of map must be a list *Note*

# Test Cases
   - arr = [2, 7, 11, 15], target = 9
   - arr = [3, 2, 4], target = 6
   - arr = [3, 3], target = 6 