#include<iostream>
#include<algorithm>
#include<strings.h>
#include<set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;cin>>T;
    int q=1;
    while(q<=T)
    {
        int N;cin>>N;
        short int M[N][N];
        int k=0,r=0,c=0;
            set<short int> s;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>M[i][j];s.insert(M[i][j]); if(i==j) k+=M[i][j];
            }
            if(N!=s.size()) r++;s.clear();
        }
        for(int j=0;j<N;j++)
        {
            for(int i=0;i<N;i++)
            {
                s.insert(M[i][j]);
            }
            if(N!=s.size()) c++;s.clear();
        }
        ///
        ///result output:
        cout<<"Case #"<<q<<": "<<k<<" "<<r<<" "<<c<<endl;
        q++;
    }
    return 0;
}
