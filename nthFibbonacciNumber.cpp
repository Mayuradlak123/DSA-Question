  int nthFibonacci(int n){
        // code here
         int first=0, second=1, third;
          
         for (int i=2;i<=n;i++) 
         {
            
            third=(first+second)%1000000007;
            first=second;
            second=third;
         }
         return second;
    }