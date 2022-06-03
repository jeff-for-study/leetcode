int romanToInt(char * s){
  
    int value[100];
    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;
    value['\0'] = 0;
    int sum = 0;
    for(int i = 0; s[i] !='\0'; i++){
        if(value[s[i]] < value[s[i + 1]])
            sum = sum - value[s[i]];
        else
            sum += value[s[i]];
    }


/*

   int charlong=0;
    int sum=0;
    int numI=0,numX=0,numC=0;
    while(s[charlong]!='\0'){
        switch(s[charlong]){
                case 'I':
                    sum+=1;
                    numI++;
                    numX=0;
                    numC=0;
                    break;
                case 'V':
                    if(numI==1){
                        sum+=3;
                    }else{
                        sum+=5;
                    }
                    numI=numX=numC=0;
                    break;
                case 'X':
                     if(numI==1){
                        sum+=8;
                    }else{
                        sum+=10;
                         numX++;
                    }
                    numI=numC=0;
                    break;
                case 'L':
                    if(numX==1){
                        sum+=30;
                    }else{
                        sum+=50;
                    }
                    numI=numX=numC=0;
                    break;
                case 'C':
                    if(numX==1){
                        sum+=80;
                    }else{
                        sum+=100;
                        numC++;
                    }
                    numI=numX=0;
                    break;
                case 'D':
                     if(numC==1){
                        sum+=300;
                    }else{
                        sum+=500;
                    }
                    numI=numX=0;
                    break;
                case 'M':
                     if(numC==1){
                        sum+=800;
                    }else{
                        sum+=1000;
                    }
                    numI=numX=0;
                    break;
        }
        charlong++;
    }
    printf("sum=%d\n",sum);
    return sum;

*/
    return sum;
}
