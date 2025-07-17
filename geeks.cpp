//https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),i=n-2;
        if(arr[n-2]!=arr[n-1])
            return arr[n-2];
        else{
            while(arr[i]==arr[n-1])i--;
            if(i>=0)
                return arr[i];
            else 
                return -1;
            
        }
            
    }
};


//C solution
int getSecondLargest(int *arr, int n) {
    int compare(const void* a, const void* b);
     
     qsort(arr, n, sizeof(int), compare);
     if(arr[n-2]!=arr[n-1])
        return arr[n-2];
     else{
         int i=n-2;
         while(arr[i]==arr[n-1])i--;
         if(i>=0)return arr[i];
         else return -1;
     }
     
}
  int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}