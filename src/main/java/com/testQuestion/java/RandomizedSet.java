package com.testQuestion.java;

import java.util.ArrayList;
import java.util.HashMap;

class RandomizedSet {
    // Process
    // 1. since we know that each function needs to be solve in constant time. That means arraylist and array wont work
    // 2. so we are going to create a map to store all the values
    private HashMap<Integer,Integer>map;
    private ArrayList<Integer>arr;
    
    public RandomizedSet() {
        map = new HashMap<>();
        arr = new ArrayList<>();
    }
    
    public boolean insert(int val) {
        if (map.containsKey(val)) return false;
        map.put(val, arr.size());
        arr.add(val);
        return true;
    }
    
    public boolean remove(int val) {
        if (!map.containsKey(val)) return false;
        //get the index of arr thru map
        //if its not the last element, swap to last.
        //remove the last element
        //remove map entry.
        int i = map.get(val);
        System.out.println(map.entrySet());
        if (i != arr.size()-1) {
            int temp = arr.get(arr.size()-1);
            arr.set(arr.size()-1, val);
            arr.set(i,temp);
            map.put(temp,i);
        }
        arr.remove(arr.size()-1);
        map.remove(val);
        // System.out.println("insert"+arr);
        return true;
    }
    
    public int getRandom() {
        System.out.println(arr);
        //because there's condition that at least one element is present, no need to set constraint
        return arr.get((int)(Math.random()*(arr.size())));
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */