package com.testQuestion.java;

import java.util.ArrayList;
import java.util.HashMap;

class Solution {
    public static int[] productExceptSelf(int[] nums) {
        // initial concept using brute force
        /* Time complexity: O(n^2) */
        /* Completion Time: 5.22.36 */
        int[] arr = new int[nums.length];
        for (int i=0; i< nums.length; i++) {
            int result = 1;
            for (int j=0; j< nums.length; j++) {
                if (i != j) {
                    result *=nums[j];
                }

            }
            arr[i] = result;
        }
        return arr;
        
    }
    public static int[] productExceptSelf1(int[] nums) {
        // solution using O(n)
        // procedure.
        // we substitude by left side first. without calculating the self. (save edges)
        // it can be accomplished if we assign a left variable
        // 1. we get to index 0, because theres no value, we multiply itself by 1.
        // 2. then it comes to index 1, we multiply left with value of index 0.
        // 3. continue the process 
        // 4. once we reached end, store the value of last to the right variable
        // 5. since we have original nums array, we can just multiply by rightside of last to first
        // Visual demonstration
        /*
         * 1 num[0] num[0]*num[1] num[0]*num[1]*num[2]
         * num[1]*nums[2]*nums[3] num[0]*nums[2]*nums[3] num[0]*num[1]*num[3] num[0]*num[1]*num[2]
         */
        int [] arr = new int[nums.length];
        arr[0] = 1;
        for (int i = 1; i < nums.length; i++) {
            arr[i] = arr[i-1] *nums[i-1];
        } //we added all the elements thats to their left
        int right = 1;
        for (int i = nums.length-1;i >= 0; i--) {
            arr[i] *= right;
            right *= nums[i];
        }
        return arr;
    }
}