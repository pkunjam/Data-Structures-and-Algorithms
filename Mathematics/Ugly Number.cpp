class Solution {
public:
    bool isUgly(int n) {

        if(n <= 0) return false;
        
        int arr[] = {2,3,5};
        int len = sizeof(arr)/sizeof(arr[0]);

        for(int i = 0; i < len; i++)
        {
            while(n % arr[i] == 0)
            {
                n = n / arr[i];
            }
        }

        if(n == 1) return true;

        return false;
    }
};