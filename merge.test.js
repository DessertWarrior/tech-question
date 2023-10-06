import {describe, test, expect} from 'vitest';
import merge from './merge';

describe('Testing Merge Sorted Array Function', ()=>{
    test('Input with empty nums1 array.',()=>{
        let nums1 = [0]; 
        let nums2 = [1];
        let expectedResult = [1];
        merge(nums1,0,nums2,1);
        
        let mLength = nums1.length;
        for (let i = 0; i < mLength; i++) {
            expect(nums1[i]).toBe(expectedResult[i]); 
        }   
    })

    test('Input with empty nums2 array.',()=>{
        let nums1 = [1]; 
        let nums2 = [];
        let expectedResult = [1];
        merge(nums1,1,nums2,0);
        
        let mLength = nums1.length;
        for (let i = 0; i < mLength; i++) {
            expect(nums1[i]).toBe(expectedResult[i]); 
        }   
    })

    test('Input with an array.',()=>{
        let nums1 = [1,2,3,0,0,0]; 
        let nums2 = [2,5,6];
        let expectedResult = [1,2,2,3,5,6];
        merge(nums1,3,nums2,3);
        
        let mLength = nums1.length;
        for (let i = 0; i < mLength; i++) {
            expect(nums1[i]).toBe(expectedResult[i]); 
        }   
    })

    test('Input with an array that contain long numbers.',()=>{
        let nums1 = [-1000000000,-670000000,-613720000,-158468323,-99592334,-2,-1,1,0,0]; 
        let nums2 = [68000000,1000000000];
        let expectedResult = [-1000000000,-670000000,-613720000,-158468323,-99592334,-2,-1,1,68000000,1000000000];
        merge(nums1,8,nums2,2);
        
        let mLength = nums1.length + nums2.length;
        for (let i = 0; i < mLength; i++) {
            expect(nums1[i]).toBe(expectedResult[i]); 
        }   
    })

    test('Input with a long array.',()=>{
        let nums1 = []; 
        let nums2 = [1,5,8];
        
        let random;
        let high = Math.pow(10,9);
        for (let i = 0; i < 190; i++) {
            random = Math.floor(Math.random()*(high * 2)- high);
            nums1.push(random);
        }
        nums1.sort((a,b)=>a-b);
        

        let expectedResult = [...nums1,...nums2];
        expectedResult.sort((a,b)=>a-b);
        [0,0,0].forEach((element)=>nums1.push(element));
        //////////  Test value processing ends here ////////////////
        
        merge(nums1,190,nums2,3);
        let mLength = nums1.length;
        for (let i = 0; i < mLength; i++) {
            expect(nums1[i]).toBe(expectedResult[i]); 
        }   
    })
})