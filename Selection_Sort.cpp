//link : 




void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int j =0;
    for(int i = 0;i<(n-1);i++){
        int MinIndex = i;
        for( j = i+1;j<n;j++){
            if(arr[j]<arr[MinIndex]){
            MinIndex = j;}
        }
       swap(arr[i],arr[MinIndex]);
    }
}
