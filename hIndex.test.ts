import {describe, it, expect} from 'vitest';
import {hIndex} from './hIndex';

describe('hIndex',()=>{
    it('should return 3',()=>{
        let citations = [3,0,6,1,5];
        expect(hIndex(citations)).toEqual(3);
    })
    it('should return 2',()=>{
        let citations = [3,2,1,1,4];
        expect(hIndex(citations)).toEqual(2);
    })
    it('should return 2',()=>{
        let citations = [3,5,1,1,0,0];
        expect(hIndex(citations)).toEqual(2);
    })
    it('should return 3',()=>{
        let citations = [3,1,4,1,0,3,1,0,1];
        expect(hIndex(citations)).toEqual(3);
    })
    it('should return 0',()=>{
        let citations = [0];
        expect(hIndex(citations)).toEqual(0);
    })
    it('should return 1',()=>{
        let citations = [11];
        expect(hIndex(citations)).toEqual(1);
    })
    it('should return 10',()=>{
        let citations = [11,55,35,23,66,12,66,46,23,12,0];
        expect(hIndex(citations)).toEqual(10);
    })
    it('should return 0',()=>{
        let citations = [0,0,0,0,0,0,0,0,0,0,0];
        expect(hIndex(citations)).toEqual(0);
    })
})