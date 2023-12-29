import {describe, expect, it} from 'vitest'
import {rotate,rotateI} from './rotate'

describe('rotate',()=>{
    it('should return [3,4,5,1,2]',()=>{
        let arr = [1,2,3,4,5];
        rotate(arr,2);
        expect(arr).toEqual([4,5,1,2,3]);
    })
    it('should return [5,6,7,1,2,3,4]',()=>{
        let arr = [1,2,3,4,5,6,7];
        rotate(arr,3)
        expect(arr).toEqual([5,6,7,1,2,3,4]);
    })
    it('should return [3,99,-1,-100]',()=>{
        let arr = [-1,-100,3,99];
        rotate(arr,2)
        expect(arr).toEqual([3,99,-1,-100]);
    })
})

describe('rotateI',()=>{
    it('should return [3,4,5,1,2]',()=>{
        let arr = [1,2,3,4,5];
        rotateI(arr,2);
        expect(arr).toEqual([4,5,1,2,3]);
    })
    it('should return [5,6,7,1,2,3,4]',()=>{
        let arr = [1,2,3,4,5,6,7];
        rotateI(arr,3)
        expect(arr).toEqual([5,6,7,1,2,3,4]);
    })
    it('should return [3,99,-1,-100]',()=>{
        let arr = [-1,-100,3,99];
        rotateI(arr,2)
        expect(arr).toEqual([3,99,-1,-100]);
    })
})