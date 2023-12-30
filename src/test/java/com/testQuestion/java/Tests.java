package com.testQuestion.java;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

import org.junit.Test;
import org.junit.jupiter.api.DisplayName;

public class Tests {
    @Test
    public void testRandomizedSet1(){
        RandomizedSet randomMSet= new RandomizedSet();
        assertTrue("Should return true",randomMSet.insert(1));
        assertFalse("Should return false",randomMSet.remove(2));
        assertTrue("Should return true",randomMSet.insert(2));
        int val = randomMSet.getRandom();
        assertTrue("Should return 1 or 2",val == 1 || val == 2);
        assertTrue("Should return true",randomMSet.remove(1));
        assertFalse("Should return false",randomMSet.insert(2));
        assertEquals("Should return 2", 2, randomMSet.getRandom());
    }
    @Test
    public void testRandomizedSet2(){
        RandomizedSet randomMSet= new RandomizedSet();
        assertTrue("Should return true",randomMSet.insert(0));
        assertTrue("Should return true",randomMSet.insert(1));
        assertTrue("Should return true",randomMSet.remove(0));
        assertTrue("Should return true",randomMSet.insert(2));
        assertTrue("Should return true",randomMSet.remove(1));
        assertEquals("Should return 1", 2, randomMSet.getRandom());
    }
}
