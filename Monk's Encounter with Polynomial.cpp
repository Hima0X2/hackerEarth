#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

long long a, b , c;
long long getVal ( long long x )
{
    return ( a * x * x ) + ( b * x ) + c;
}

int main()
{
    optimize();

    int T;
    cin >> T;

    while ( T-- ) {
        long long k;
        cin >> a >> b >> c >> k;

        long long l = 0, r = 1e6;
        long long ans;

        while ( l <= r ) {
            long long mid = ( l + r )/2.0;

            if ( getVal( mid ) >= k ) {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }

        cout << ans << endl;
    }


    return 0;
}
