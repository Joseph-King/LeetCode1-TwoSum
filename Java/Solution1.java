//Author: Joseph-King
//Date: Jul 4, 2022

public class Solution1 {
    public static void main(String[] args){
        //Array Test Cases
        int[] arr1 = new int[] {2, 7, 11, 15};
        int[] arr2 = new int[] {3, 2, 4};
        int[] arr3 = new int[] {3, 3};

        //Target Test Cases
        int target1 = 9;
        int target2 = 6;
        int target3 = 6;

        //Run Test Cases
        int[] result1 = twoSum(arr1, target1);
        int[] result2 = twoSum(arr2, target2);
        int[] result3 = twoSum(arr3, target3);

        //Print Test Cases
        printArray(result1);
        printArray(result2);
        printArray(result3);
    }

    //Returns indices of array that equal target
    public static int[] twoSum(int[] arr, int target){
        //Visit every index of array
        for(int i=0; i<arr.length; i++){
            //Visit every index after i
            for(int j=i+1; j<arr.length; j++){
                //Calculate sum
                int sum = arr[i] + arr[j];

                //If sum equals target, return indices in array
                if(sum == target){
                    return(new int[] {i, j});
                }
            }
        }

        //If not found return null
        return(null);
    }

    //Outputs 1D array
    public static void printArray(int[] arr){
        //Visit every index of array
        for(int i=0; i<arr.length; i++){
            //Output using printf, expecting number
            System.out.printf("%d ", arr[i]);
        }
        //End line
        System.out.print("\n");
    }
}