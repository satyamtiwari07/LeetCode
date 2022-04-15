class Solution {
public:
    int mineleindex(vector<int> &arr){
        int n=arr.size();
        int lo=0;
        int hi=n-1;
        
        if(n==1) return n;
        // if(n==2) return (arr[0]>arr[1]) ? 1:0;
        while(lo<=hi){
            
            if(arr[lo]<arr[hi]) return lo;
            
            int mid=lo+(hi-lo)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            
            if(arr[mid]<arr[prev] && arr[mid]<arr[next]) return mid;
            
            //first array from lo to mid is sorted
            if(arr[lo]<=arr[mid]) lo=mid+1;
            
            //second array from mid to hi is sorted
            else hi=mid-1;
        }
        
        return -1;
    }
    
    int search(int lo,int hi,vector<int>&arr,int target){
       while(lo<=hi){
           int mid=lo+(hi-lo)/2;
           if(arr[mid]==target) return mid;
           
           if(arr[mid]>target) hi=mid-1;
           else lo=mid+1;
       }
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1) 
            return (nums[0]==target) ? 0:-1 ;
        int idx= mineleindex(nums);
        cout<<idx<<' ';
        
        return max(search(0,idx-1,nums,target),search(idx,n-1,nums,target));
    }
};
