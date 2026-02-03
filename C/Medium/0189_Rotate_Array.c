// Given an integer array nums, rotate the array to the right by K steps, where K is nonnegative.
/*
LeetCode 189 - Rotate Array
Difficulty: Medium

Approach:sabse pehle hamne k=k%10 kiye for handling big values of k then 
making a fuction that will be inputted by the initial array and [si:starting index ei:ending index] for roating the array by the help of 
index values
step01: complete array reverse by reverse(nums,0,numsSize-1)
step02: reversing the first k elemnt of the new updated array reverse(nums,0,k-1)
step03: recersing the remaing last element of the array (nums,k,numsSize-1)


Time Complexity: O(n)
Space Complexity: O(1)
Runtime=0ms
Memory=26.45MB
*/
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
