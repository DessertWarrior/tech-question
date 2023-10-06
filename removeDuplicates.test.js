import {describe, test, expect} from 'vitest';
import removeDuplicates from './removeDuplicates'

describe('Testing Remove duplicates from Sorted Array function',()=>{
    test('Input with single valued array',()=>{
        let nums = [1];
        let expectedVals = [1];
        let k = removeDuplicates(nums);
        expect(k).toBe(1);
        for (let i =0; i < k; i++) 
            expect(nums[i]).toBe(expectedVals[i]);
    })

    test('Input with an array that contain single duplicate',()=>{
        let nums = [1,4,4,5];
        let expectedVals = [1,4,5];
        let k = removeDuplicates(nums);
        expect(k).toBe(3);
        for (let i =0; i < k; i++) 
            expect(nums[i]).toBe(expectedVals[i]);
    })

    test('Input with an array that contain multiple same duplicates',()=>{
        let nums = [0,0,0,0,1,2,5,6];
        let expectedVals = [0,1,2,5,6];
        let k = removeDuplicates(nums);
        expect(k).toBe(5);
        for (let i =0; i < k; i++) 
            expect(nums[i]).toBe(expectedVals[i]);
    })

    test('Input with an array that contain multiple different duplicates',()=>{
        {
            let nums = [0,0,1,1,2,2,2,5,5,6];
            let expectedVals = [0,1,2,5,6];
            let k = removeDuplicates(nums);
            expect(k).toBe(5);
            for (let i =0; i < k; i++) 
                expect(nums[i]).toBe(expectedVals[i]);
        }

        {
            let nums = [-100,-55,0,0,2,2,5,6,7,7,7,100];
            let expectedVals = [-100,-55,0,2,5,6,7,100];
            let k = removeDuplicates(nums);
            expect(k).toBe(8);
            for (let i =0; i < k; i++) 
                expect(nums[i]).toBe(expectedVals[i]);
        }
    })

    test('Input with long array',()=>{
        let nums = []
        let expectedVals = [];

        for (let i = -100; i< 100; i++) {
            nums.push(i);
            expectedVals.push(i);
        }   //pushing into array from -100 to 99(length of 200)

        for (let i = 0; i< 29800; i++) {
            nums.push(Math.floor(Math.random()*(100+99)-100));  //generates from -100 to 99
        }
        nums.sort((a,b)=>a-b);

        let k = removeDuplicates(nums);
        expect(k).toBe(200);
        for (let i =0; i < k; i++) 
            expect(nums[i]).toBe(expectedVals[i]);
    })
})