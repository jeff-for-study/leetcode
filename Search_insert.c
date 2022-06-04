

int searchInsert(int* nums, int numsSize, int target){
    for (int i = 0; i < numsSize; i++)
        if (nums[i] >= target)
            return i;

    return numsSize;
    /*
    int out=0;
    int mid=numsSize/2;
    printf("mid :%d\n",mid);
    if(nums[mid]==target){
        return mid;
    }
    if(nums[mid]>target){
        out=search(nums,(mid-1),numsSize,target);
    }
    if(nums[mid]>target){
        out=search(nums,(0-1),mid,target);
    }
    return out;
    
    int insert=0;
    while(1){
        if(nums[insert]<=target && target<=nums[(insert+1)]&& insert< numsSize )
            break;
        insert++;
        if(insert==numsSize)
            break;
    }
    return (insert+1);
    */
}
int search(int* nums, int left,int right,int target){
    int mid=(left+right)/2;
    printf("search mid :%d\n",mid);
    if(nums[mid]==target){
        return mid;
    }
    if(nums[mid]>target){
        search(nums,mid,right,target);
    }
    if(nums[mid]<target){
        search(nums,left,mid,target);
    }
    return mid;
}

