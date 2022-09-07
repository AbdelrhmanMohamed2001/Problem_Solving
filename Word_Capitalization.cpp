    #include <bits/stdc++.h>
    #include <string>
    #include <cctype>
    using namespace std;
     
    void Capitalize(string word){
        
        bool flag = true;
        for(int i=0; i<word.length(); i++){
            if(islower(word[0]))
            {
                
            }
            else
            {
                flag=false;
                break;
            }
        }
        
        if(flag)
        {
            cout<<(char) toupper(word[0])<<word.erase(0,1)<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
    }
     
    int main()
    {
        string word;
        cin>>word;
        Capitalize(word);
     
        return 0;
    }
