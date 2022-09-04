    #include <iostream>
    #include <string>
    using namespace std;
     
    void Way_Too_Long_Words(string arr[], int n){
        for(int i=0; i<n; i++){
            if(arr[i].length()<=10)
            {
                cout<<arr[i]<<endl;
            }
            else
            {
                cout<<arr[i][0]<<arr[i].length()-2<<arr[i][arr[i].length()-1]<<endl;
            }
        }
    }
     
     
    int main()
    {
        int n;            //size of array 
        cin>>n;
        string *arr=new string[n];
        for(int k=0; k<n; k++)
        {
            cin>>arr[k];
        }
        
        Way_Too_Long_Words(arr,n);
        
        return 0;
    }
