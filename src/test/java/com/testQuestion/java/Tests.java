package com.testQuestion.java;
import static org.junit.Assert.assertArrayEquals;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

import org.junit.Test;
import org.junit.jupiter.api.DisplayName;

public class Tests {
    @Test
    public void testProductExceptSelf(){
        int[] nums = {1,2,3,4};
        assertArrayEquals("Should return [24,12,8,6]",new int[]{24,12,8,6},Solution.productExceptSelf(nums));
    }
    @Test
    public void testProductExceptSelf1(){
        int[] nums = new int[]{-1,1,0,-3,3};
        assertArrayEquals("Should return [0,0,9,0,0]", new int[]{0,0,9,0,0},Solution.productExceptSelf(nums));
    }
    @Test
    public void testProductExceptSelf2(){
        int[] nums = {1,2,0,2,6,32,28,-34,1};
        assertArrayEquals("Should return [0,0,-731136,0,0,0,0,0,0]",new int[]{0,0,-731136,0,0,0,0,0,0},Solution.productExceptSelf(nums));
    }
    @Test
    public void testProductExceptSelfN(){
        int[] nums = {1,2,3,4};
        assertArrayEquals("Should return [24,12,8,6]",new int[]{24,12,8,6},Solution.productExceptSelf1(nums));
    }
    @Test
    public void testProductExceptSelfN1(){
        int[] nums = new int[]{-1,1,0,-3,3};
        assertArrayEquals("Should return [0,0,9,0,0]", new int[]{0,0,9,0,0},Solution.productExceptSelf1(nums));
    }
    @Test
    public void testProductExceptSelfN2(){
        int[] nums = {1,2,0,2,6,32,28,-34,1};
        assertArrayEquals("Should return [0,0,-731136,0,0,0,0,0,0]",new int[]{0,0,-731136,0,0,0,0,0,0},Solution.productExceptSelf1(nums));
    }
}
