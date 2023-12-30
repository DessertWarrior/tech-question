import {describe, it, expect} from 'vitest';
import {canJump} from './canJump';

describe('canJump',()=>{
    it('should return 2',()=>{
        let nums = [2,3,1,1,4];
        expect(canJump(nums)).toEqual(2);
    })
    it('should return 2',()=>{
        let nums = [3,2,1,1,4];
        expect(canJump(nums)).toEqual(2);
    })
    it('should return 2',()=>{
        let nums = [3,5,1,1,0,0];
        expect(canJump(nums)).toEqual(2);
    })
    it('should return 3',()=>{
        let nums = [3,1,4,1,0,3,1,0,1];
        expect(canJump(nums)).toEqual(3);
    })
    it('should return 0',()=>{
        let nums = [0];
        expect(canJump(nums)).toEqual(0);
    })
})