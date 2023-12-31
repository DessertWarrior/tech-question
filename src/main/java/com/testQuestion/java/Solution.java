package com.testQuestion.java;

import java.util.ArrayList;
import java.util.HashMap;

class Solution {
    public static int canCompleteCircuit(int[] gas, int[] cost) {
        // Solution using brute force
        /* Time Complexity: O(n^2) */
        /* Completion Time: 21:02.35 */
        for (int i = 0; i < gas.length; i++) {
            int tGas = 0;
            for (int j = 0; j < cost.length; j++) {               
                int current = (i + j) % gas.length;
                tGas += gas[current];
                tGas -= cost[current];
                if (tGas < 0)
                    break; // if gas reach 0 before arrival
                
            }
            if (tGas >= 0)
                return i;
        }
        return -1;
    }
    public static int canCompleteCircuit1(int[] gas, int[] cost) {
        /* Time Complexity: O(n) */
        // check its possible to reach destination
        int total = 0;
        for (int i = 0; i< cost.length; i++) 
            total += gas[i] - cost[i];
        // if gas is not enough to finish circuit.    
        if (total < 0) 
            return -1;
        //because there's going to be a unique solution
        // we will go thru entire array to do trails of error. 
        // Either we find it in the middle and continue to the end, or last is the one
        int cGas = 0;
        int current = 0;
        for (int i = 0; i < cost.length; i++) {
            cGas += gas[i] - cost[i];
            // condition doesnt match, check next i.
            if (cGas < 0) {
                //if we can reach to i, then there's no way current doesn't work but i does
                //But if cGas is below, then we need to look for another current
                current = i + 1;
                cGas = 0;
            }
        }
        return current;
    }
}