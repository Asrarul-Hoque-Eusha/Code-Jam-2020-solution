
#include<iostream>
#include<algorithm>///Problem name: Nesting Depth
#include<strings.h>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;cin>>T;
    int q=1;
    while(q<=T)
    {
        string S;
        cin>>S;
        short int a[S.length()];
//         for(int i=0;i<S.length();i++)
//         {

//         }
        
        cout<<"Case #"<<q<<": ";
        for(int i=0;i<S.length();i++)
        {
           if(i==0) 
           { 
               for(int j=0;j<S[i]-'0';j++) 
                   cout<<"(";cout<<S[i];
           }
           else if((S[i]-S[i-1])!=0)
           { 
               for(int j=0;j<(S[i]-S[i-1]);j++) 
                   cout<<"("; cout<<S[i]; 
           }
           else if(S[i]==S[i-1]&&i!=0) 
               cout<<S[i];
           if((S[i+1]-S[i])!=0&&i!=S.length()-1)
           { 
               for(int j=0;j<(S[i]-S[i+1]);j++) 
                   cout<<")";  
           }
        }
             for(int j=0;j<S[S.length()-1]-'0';j++) 
                 cout<<")";
        cout<<endl;
            q++;
    }
    return 0;
}
