    #include <iostream>
     
    using namespace std;
     
    void Watermelon(int w){
        if(w%2==0 && w/2>1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
     
    int main()
    {
        int w;         //   weight of Watermelon
        cin>>w;
        Watermelon(w);
     
        return 0;
    }
