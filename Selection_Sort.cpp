//link : 




void selectionSort(vector<int>& arr, int n)
2
{   
3
    // Write your code here.
4
    int j =0;
5
    for(int i = 0;i<(n-1);i++){
6
        int MinIndex = i;
7
        for( j = i+1;j<n;j++){
8
            if(arr[j]<arr[MinIndex]){
9
            MinIndex = j;}
10
        }
11
        swap(arr[i],arr[MinIndex]);
12
    }
13
}
