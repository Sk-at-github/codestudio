
//link for code --https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    
    
    for(int i = 1;i<n;i++){
        for(int j = i-1;j>=0;j--){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;    }
               else{
                   break;
                   
               }
            }
        }
    
    // Write your code here.
}
