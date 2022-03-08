class Solution {
public:
    int findMin(vector<int>& arr) {
        int lo=0;
        int hi=arr.size()-1;
        
        if(arr.size()==1) return arr[0];
        
        if(arr[hi] > arr[0])  return arr[0] ; // sorted array
        
        while(hi>=lo){
            int mid = ( lo + hi ) /2 ;
            
            if(arr[mid] > arr[mid+1]) return arr[mid+1];
            
            if(arr[mid] < arr[mid-1]) return arr[mid];
            
            if(arr[mid] > arr[lo]) lo=mid+1;
            
            else hi=mid-1;
        }
        
        return -1;
    }
};7
