#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int testcases = 0;
    cin>>testcases;
    while(testcases--)
    {
        long long int N = 0;
        cin>>N;
        long long int term3 = N/3,term5 = N/5,term15 = N/15;
        if(N%3==0)
        {
            term3--;
        }
        if(N%5==0)
        {
            term5--;
        }
        if(N%15==0)
        {
            term15--;
        }
        long long int sum = 0;
        long long int threestop = (term3)*3;
        long long int fivestop = (term5)*5;
        long long int fifteenstop = term15 * 15;
        sum = (term3*(3+threestop)/2) + (term5*(5+fivestop)/2) - (term15*(15+fifteenstop)/2);
        cout<<sum<<endl;
    }
    return 0;
}