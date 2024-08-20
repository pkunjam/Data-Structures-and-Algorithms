class Solution {
public:
    int countPrimes(int n) {
        
        // // Brute Force - TLE Exceeds 
        // // (Checking all the integers in the range [1, n - 1]  is not efficient)    
        //    int count = 0;
        
        //    for(int i = 2; i < n; i++)
        //    {
        //         if(n % i == 0) continue;

        //         if(checkPrime(i))
        //         {
        //             count++;
        //         }
        //    }
            
        //     return count; 


        // // Better Solution O(N Log N)
        // int count = 0;

        // vector<int> hash(n+1, 1);

        // for(int i = 2; i <= n; i++)
        // {
        //     if(hash[i] == 1 && i < n)
        //     {
        //         count++;

        //         for(int j = 2 * i; j <= n; j += i)
        //         {
        //             hash[j] = -1;
        //         }
        //     }
        // }

        // return count;

        // Best Solution O(Log(N)∗Log(N)) - no need to count all the multiples of i
        int count = 0;

        vector<int> hash(n+1, 1);

        for(int i = 2; i * i <= n; i++)
        {
            if(hash[i] == 1 && i < n)
            {
                for(int j = i * i; j <= n; j += i)
                {
                    hash[j] = -1;
                }
            }
        }

        for(int i = 2; i < n; i++)
        {
            if(hash[i] == 1) count++;
        }

        return count;
    }

    // Part of the brute force solution
    // bool checkPrime(int n)
    // {
    //     for(int i = 2; i * i <= n; i++)
    //     {
    //         if(n % i == 0) return false;
    //     }

    //     return true;
  
};