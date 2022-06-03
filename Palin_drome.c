bool isPalindrome(int x){
   /*if(x<0){
       return false;
    }
    long int sum=0;
    int input=x;
    while(x!=0){
       sum=sum*10+x%10;
       x/=10; 
    }
    return (sum==input);*/
    long int rev = 0;
    int temp = x;
    if(x<0)
	return false;

    while(x){
      rev = rev * 10 + x % 10;
      x /= 10;
    }
        
    return (temp == rev);
}
