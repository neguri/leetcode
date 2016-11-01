int compare(const void* a, const void* b)
{
   return *(int*)a - *(int*)b;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {

    double median = 0;
    int* data = (int*)malloc(sizeof(int)*(nums1Size+nums2Size));
    memcpy(data,nums1,sizeof(int)*(nums1Size));
    memcpy((data+nums1Size),nums2,sizeof(int)*(nums2Size));

    #ifndef __DEBUG__
    for(int i=0; i<(nums1Size+nums2Size); i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    #endif // __DEBUG__

    /*qsort*/
    qsort(data,(nums1Size+nums2Size),sizeof(int),compare);


    #ifndef __DEBUG__
    for(int i=0; i<(nums1Size+nums2Size); i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    #endif // __DEBUG__

    if( (nums1Size+nums2Size)%2 == 1)
    {
        median = data[(nums1Size+nums2Size)/2];
    }
    else{
        int sum = data[(nums1Size+nums2Size-1)/2] + data[(nums1Size+nums2Size-1)/2+1];
        median = (float)sum/2;
    }

    free(data);
    return median;
}
