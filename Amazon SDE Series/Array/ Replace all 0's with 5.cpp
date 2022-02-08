/* for eaxmple
   100040 ->> 155545 = 100040 + 55505
*/
int convertFive(int n) {
    int add = 0; // the value to be added to n
    int pvalue = 1; // to record placevalue of digit
    int num = n; 
    
    if(num == 0){ // n = 0
        add = pvalue*5; // add = 5
    }else{ // n != 0
        
        while(num > 0){ // run till highest placevalue digit left or single digit left
            if(num % 10 == 0){ // if number is divisible by 10 must contain 0 as last digit
                add += (5*pvalue); 
            }
            num /= 10; // reduce num by one digit
            pvalue *= 10; 
        }
    }
    return add + n;
}
