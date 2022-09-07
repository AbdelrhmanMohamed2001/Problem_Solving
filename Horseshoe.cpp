    #include <bits/stdc++.h>
    using namespace std;
     
    void Horseshoe(int arr[], int n){
         int count=0;
        for(int i=0; i<n; i++){
         
               sort(arr, arr+n);
                if(arr[i]==arr[i+1])
                {
                    count++;
                    
                }
               
     
    }
        cout<<count<<endl;
    }
     
    int main()
    {
        int n=4;
        int arr[n];
     
        for(int i=0; i<n; i++){
            cin>>arr[i];
            
        }
        Horseshoe(arr,n);
        
       
     
        return 0;
    }
