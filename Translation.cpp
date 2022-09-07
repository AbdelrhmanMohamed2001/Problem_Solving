     
    #include <iostream>
    #include <string>
    using namespace std;
     
    void Translation(string word_1, string word_2){
        if(word_1.length()!=word_2.length())
        {
            cout<<"NO"<<endl;
        }
        else
        {    bool flag =true;
            for(int i=0; i<word_1.length(); i++)
            {
                if(word_1[i]==word_2[word_2.length()-i-1])
                {
                    
                }
                else
                {
                 flag=false;
                    break;
                }
            }
        
        if(flag ==true)
            {
                cout<<"YES";
            }
        else
            {
                cout<<"NO";
            }
        }
    }
     
    int main ()
    {
      string word_1, word_2;
      cin>>word_1>>word_2;
      Translation(word_1,word_2);
     
      return 0;
    }
