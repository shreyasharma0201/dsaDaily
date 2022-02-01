### 121. Best Time to Buy and Sell Stock
***
*You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*

> ##### Intuition:
> * This problem is first part of BUY and SELL series where only 1 transcation is allowed.
> * The approach is to check profit of each day becoz for particular buy each day is potential selling day.
> * Like, If today stock is sell how much will be profit.
> * compare each day's profit with overall max profit and update.
> * profit by selling on a particular day is only when it was buy in least prices. 
> * hence, maintain buy such that for it is minimal price till buying day.
