// Given an integer x, return true if x is a palindrome, and false otherwise.
/*
LeetCode 9 - Palindrome Number
Difficulty: Easy

Approach:
Store digits in an array, reverse it, and compare both arrays.

Time Complexity: O(log10 n)
Space Complexity: O(log10 n)
*/
bool isPalindrome(int x) {
    if(x==0) return true;// for handling an ERROR
    if(x<0) return false;// for handling negative value to return false
    int n=0, temp=x, ld1=0;
    // here using this while loop for calculating size for array by int x stored in temp
    while(temp!=0){
        ld1=temp%10;
        n++;
        temp=temp/10;
    }
    
    int arr[n];
    int ld=0;
    // using this forloop we are assigning the int x value to array arr in reverse direction
    // ex int x=12345 then arr{5,4,3,2,1}
    for(int i=0;i<=n-1;i++){
        ld=x%10;
        arr[i]=ld;
        x=x/10;
    }
    // creating new array and storing the arr array in opposite direction in brr array
    // if arr is{5,4,3,2,1} then brr is{1,2,3,4,5}
    int brr[n];
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];// condition for reverse entering the arr in brr
    }
    int help=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==brr[i]) help++;// here we are applying check that if the number is a    palindrome number then this condition will run [n] times as i=0 to i=n-1
    }  
    if(help==n) return true;// and if the condition [if(arr[i]==brr[i])] will work 
    else return false;//       then it means its a palindrome number return true else false
    

    return 0;
}
