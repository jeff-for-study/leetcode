char * addBinary(char * a, char * b){
    int value_a=0;
    int length_a=0;
    int value_b=0;
    int length_b=0;
    int i=0;
    int sum=0;

    while(a[i++] != '\0'){
        length_a++;
        
    }
    i=0;
    while (b[i++] != '\0'){
        length_b++;
    }
      
    printf("length a: %d\n",length_a);
    printf("length b: %d\n",length_b);
    
   
    for(int i=0,j=length_a-1;i<length_a;i++,j--){
        if(a[i]=='1'){
            value_a+=power(2,(j-1));
        }
    }
    
    for(int i=0,j=length_b-1;i<length_b;i++,j--){
        if(b[i]=='1'){
            value_b=value_b+power(2,(j-1));
        }
    }
    printf("value a: %d\n",value_a);
    printf("value b: %d\n",value_b);
    sum=value_a+value_b;
    printf("value sum: %d\n",sum);
    i=0;
    int c=0;
    for(;i<32;i++){
        if(power(2,i)>sum){
            c=i-1;
            break;
        }
         if(power(2,i)==sum){
            c=i;
            break;
        }
    }
    printf("value c: %d\n",c);
    char binary[(c+2)];
  
    for(i=0;c>=0;c--,i++){
        if((sum>>c & 1)==1 ){
            binary[i]='1';
        }
        else{ binary[i]= '0';}
    }
    binary[(i)]= '\0';   
    char *output=&binary; 
    printf("vbin :%s\n",binary);
    return output;
}

int power (int base, int e){
    if (e != 0){
        for(;e>1;e--){
            base=base*base;
        }
        //printf("value base: %d\n",base);
        return base;
    }
    else
        return 1;
}
