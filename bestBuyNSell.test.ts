import {describe,expect,it} from 'vitest'
import {maxProfit} from './bestBuyNSell'

describe('maxProfit',()=>{
    it('should return 7',()=>{
        let prices = [7,1,5,3,6,4];
        expect(maxProfit(prices)).toEqual(7);
    })
    it('should return 4',()=>{
        let prices = [1,2,3,4,5];
        expect(maxProfit(prices)).toEqual(4);
    })
    it('should return 0',()=>{
        let prices = [7,6,4,3,1];
        expect(maxProfit(prices)).toEqual(0);
    })
})