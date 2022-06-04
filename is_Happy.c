bool isHappy(int n){
   
    int fast =n;
    int slow =n;
     //cycle detection
    do{ 
        slow =square(slow);
        fast =square(fast);
        fast =square(fast);
    }while(fast!=slow);

    return fast==1;
}
int square(int a){
    int sum=0;
    while(a!=0){
        int d=a%10;
        a/=10;
        sum+=d*d;
    }
        return sum; 
}
