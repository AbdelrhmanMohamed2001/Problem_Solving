#include <iostream>
#include <string>
using namespace std;

void Lucky(string w[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<6; j++){
            if(w[i][j]+w[i][j+1]+w[i][j+2]==w[i][j+3]+w[i][j+4]+w[i][j+5]){
            cout<<"YES"<<endl;
            break;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    string *w=new string[n];
    for(int k=0; k<n; k++)
    {
        cin>>w[k];
    }
    Lucky(w,n);

    return 0;
}
