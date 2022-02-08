int ndigit(int a, int b)
{
    while(--b > 0){
        a /= 10;
    }
    return a%10;
}
int convertFive(int n) {
    int add = 0;
    int pvalue = 1;
    int num = n;
    
    if(num == 0){
        add = pvalue*5;
    }else{
        
        while(num > 0){
            if(num % 10 == 0){
                add += (5*pvalue);
            }
            num /= 10;
            pvalue *= 10;
        }
    }
    
    return add + n;
    
    
}
