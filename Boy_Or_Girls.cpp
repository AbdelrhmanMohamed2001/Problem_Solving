    #include <bits/stdc++.h>
    using namespace std;
     
    int countOfString(string word){
        unordered_set<char> s;
        for(int i=0; i<word.length(); i++){
            s.insert(word[i]);
        }
        return s.size();
    }
     
    void Boy_Or_Girl(string word){
        if(countOfString(word)%2==0)
        {
            cout<<"CHAT WITH HER!"<<endl;
        }
        else
        {
            cout<<"IGNORE HIM!"<<endl;
        }
        
    }
     
     
    int main()
    {
        string word;
        cin>>word;
        Boy_Or_Girl(word);
     
        return 0;
    }
