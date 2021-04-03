// https://www.codechef.com/APRIL21C/problems/BOLT

#include <bits/stdc++.h>
using namespace std;

bool definitelyGreaterThan(float a, float b, float epsilon)
{
    return (a - b) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

bool essentiallyEqual(float a, float b, float epsilon)
{
    return fabs(a - b) <= ( (fabs(a) > fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

float round2(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void solve(int test=0)
{
    const float epsilon = 1e-9;

    float k1, k2, k3, v;
    cin >> k1 >> k2 >> k3 >> v;

    float target = round2(9.58);

    float final_speed = k1 * k2 * k3 * v;
    float time = round2(100 / final_speed);

    if (definitelyGreaterThan(time, target, epsilon) || essentiallyEqual(time, target, epsilon) )
        cout << "NO";
    else
        cout << "YES";

    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++){
    
        solve();

    }
    
    return 0;
}
