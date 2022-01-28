class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        
        if(n < 3)
            return 0;
        
        int maxi = INT_MIN;
        
        for(int i = 1; i < n - 1; i++)
        {
            if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                int left = i - 1;
                
                while(left >= 0 && arr[left] < arr[left + 1])
                {
                    left--;
                }
                
                int right = i + 1;
                
                while(right < n && arr[right] < arr[right - 1])
                {
                    right++;
                }
                
                maxi = max(maxi, right - left - 1);
            }
        }
        
        if(maxi == INT_MIN)
            return 0;
        
        return maxi;}
};
