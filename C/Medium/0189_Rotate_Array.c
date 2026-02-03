void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;// for handing large input to k
    void reverse(int arr[],int si,int ei){
        for(int i=si,j=ei;i<=j;i++,j--){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        return;
    }
    // function calling to reverse array
    reverse(nums,0,numsSize-1);// reversing complete array
    reverse(nums,0,k-1);// reversing first k elements
    reverse(nums,k,numsSize-1);// reversing last remaining elements

}
