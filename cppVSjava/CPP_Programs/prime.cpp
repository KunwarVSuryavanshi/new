#include<iostream>
using namespace std;
int fact(int a)
{
    int c = 0;
    for(int i = 2; i<=(a/2); i++)
    {
        if(a%i == 0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
        cout<<"Test";
	    int m,n,f = 0;
	    cin>>m>>n;
	    for(int i = m+1; i<n; i++)
	    {
	        f = fact(i);
	        if(f == 0)
	        {
	            cout<<i<<"\n";
	        }
	    }
	}
    return 0;
}

