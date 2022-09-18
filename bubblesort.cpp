
//code link from code studio -  https://www.codingninjas.com/codestudio/problems/bubble-sort_980524

    
    




void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i =1;i<n;i++){
        bool Swapped = false;
        for(int j=0;j<(n-i);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                Swapped = true;
            }
        }
            if(Swapped == false)
                break;
            
        }
    }
    
    
    

