import {describe, expect, test} from 'vitest';
import removeElement from './removeElement';

describe('Testing removeElement function',()=>{
    test('Input is empty array',()=>{
        let nums = [];
        let k = removeElement(nums,5);
        expect(k).toBe(0);
        expect(Array.isArray(nums)).toBeTruthy();
        expect(nums).toHaveLength(0);
    })

    test('Value to remove is bigger than upper constraint for array',()=>{
        let nums = [1,2,5,6,7];
        let expectedNums = [1,2,5,6,7];
        let k = removeElement(nums,70);
        expect(k).toBe(5);
        nums= nums.slice(0,k);
        nums.sort((a,b)=>a-b);

        for (let i = 0; i < k; i++) {
            expect(nums[i]).toBe(expectedNums[i]);
        }
    })
    
    test('Input is single valued array, and value matches',()=>{
        let nums = [3];
        let k = removeElement(nums, 3);
        expect(k).toBe(0);

        expect(nums[0]).not.toBe(3);
    })

    test('Input is an array matches one elements',()=>{
        let nums = [1,2,3,4,9,6,7];
        let expectedNums = [1,2,3,4,6,9];
        let k = removeElement(nums,7);
        nums= nums.slice(0,k);
        nums.sort((a,b)=>a-b);
        expect(k).toBe(6);

        for (let i = 0; i < k; i++) {
            expect(nums[i]).toBe(expectedNums[i]);
        }
    })
    
    test('Input is an array matches multiple elements',()=>{
        {
            let nums = [3,2,2,3];
            let expectedNums = [2,2];
            let k = removeElement(nums,3);
            nums= nums.slice(0,k);
            nums.sort((a,b)=>a-b);
            expect(k).toBe(2);

            for (let i = 0; i < k; i++) {
                expect(nums[i]).toBe(expectedNums[i]);
            }
        }

        {
            let nums = [0,1,2,2,3,4,0,2];
            let expectedNums = [0,0,1,3,4];
            let k = removeElement(nums,2);
            nums= nums.slice(0,k);
            nums.sort((a,b)=>a-b);
            expect(k).toBe(5);

            for (let i = 0; i < k; i++) {
                expect(nums[i]).toBe(expectedNums[i]);
            }
        }
    })

    test('Input is a long array',()=>{
        let nums = [40];
        let val = 40;
        let randomNum;
        while (nums.length < 100) {
            randomNum = Math.floor(Math.random()*100);
            if (randomNum !== val)
            nums.push(randomNum);
        }
        nums.sort((a,b)=>a-b);

        let expectedNums = nums.filter((element)=>element !== val);
        
        let k = removeElement(nums,val);
        nums= nums.slice(0,k);
        nums.sort((a,b)=>a-b);

        expect(k).toBe(99);

        for (let i = 0; i < k; i++) {
            expect(nums[i]).toBe(expectedNums[i]);
        }
    })
})