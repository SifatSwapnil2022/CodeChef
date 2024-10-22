#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll ar[32];
    ar[0]=1;
    
    int i=1;
    while(i<32)
    {
        ar[i]=ar[i-1]*2;
        i++;
    }
    //cout<<ar[31];
    
    ll t;
	cin>>t;
	
	ll n;
	
	for(ll i=0;i<t;i++)
	{
        cin>>n;
        int c=0;
        ll temp=n;
        
        while(temp)
        {
            if(temp%2==1)
            c++;
            
            temp=temp/2;
        }
        
        if(c==2)
        {
            cout<<0<<endl;
        }
        else
        {
            ll l=0,r=31;
            ll p,q;
        
            while(l<r)
            {
                ll mid=l+(r-l)/2;
                //cout<<l<<" "<<r<<endl;
            
                if(ar[mid]==n)
                {
                    p=mid;
                    q=mid+1;
                  //  cout<<1<<endl;
                    break;
                }
                else if(r-l==1)
                {
                    p=l;
                    q=r;
                    //cout<<2<<endl;
                    break;
                }
                else if(ar[mid]>n)
                {
                    r=mid;
                    //cout<<3<<endl;
                }
                else if(ar[mid]<n)
                {
                    l=mid;
                //    cout<<4<<endl;
                }
            }
            
            
        //cout<<n<<" "<<ar[p]<<" "<<ar[q]<<endl;
        //if(n==7)
        //{
          //  cout<<1<<endl;
        //}
                
            if(n==1)
                cout<<2<<endl;
            else if(ar[p]==n)
                cout<<1<<endl;
            else
            {
                vector <ll>s;
                
                ll a1=n-ar[p];
                ll ans= floor(log(a1));
                
                ll m=0;
                
                while(ans<p)
                {
                    if(n-(ar[p]+ar[ans])<0)
                    {
                        s.push_back(ar[p]+ar[ans]-n);
                    }
                    else
                    {
                        s.push_back(n-ar[p]-ar[ans]);
                    }
                    ans++;
                }
                
                s.push_back(ar[q]+1-n);
                
                sort(s.begin(),s.end());
                cout<<s[0]<<endl;
            }
        }
    }
}
