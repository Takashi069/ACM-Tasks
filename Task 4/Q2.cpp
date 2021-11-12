#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
    int ques = 0;
    cin>>ques;
    while(ques--)
    {
        long long int n = 0;
        cin>>n;
        long long int sum = 0;
        long long j = 1;
        for (long long i = 2; i <= n; )
        {
            long long temp = j;
            if(i%2==0)
            {
                sum+=i;
            }
            j = i;
            i = i + temp;           
        }
        cout<<sum<<endl;
    }
    return 0;
}