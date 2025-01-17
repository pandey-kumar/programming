// // User function template for C++

// class Solution {
//   public:
//     int minTime(vector<int>& arr, int k) {
//         // code here
//         // return minimum time
        
//         int sum=0,a=arr[0];
        
//         for(int i=0;i<arr.size();i++)
//         {
//             sum+=arr[i];
//             a=max(a,arr[i]);
//         }
        
        
//         int low=a,heigh=sum,mid;
        
        
//         while(low<=heigh)
//         {
//             mid=(low+heigh)/2;
            
//             int count=0;
//             int sum=0;
            
//             for(int i=0;i<arr.size();i++)
//             {
//                 sum+=arr[i];
               
//                 if(sum>mid || i==arr.size()-1)
//                 {
//                    if(i==arr.size()-1)
//                    {
//                       if(sum>mid)
//                       {
//                           count+=2;
//                       }
//                       else
//                       {
//                           count++;
//                       }
//                    }
//                    else
//                    {
//                        count++;
//                        sum=arr[i];
//                    }
//                 }
                
//             }
            
            
//             if(count>k)
//             {
//                 low=mid+1;
//             }
//             else
//             {
//                 heigh=mid-1;
//             }
//         }
        
        
        
//         return low;
        
        
        
        
//     }
// };