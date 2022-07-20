#include <bits/stdc++.h>
using namespace std;
void primenumberornot(int n)
{
    int flag = 0;
    if(n<=1){
        cout<<n<<" is not a prime number"<<endl;
        return;
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % 2 == 0)
        {
            
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << n << " is not a prime number" << endl;
    }
    else if(flag==0)
    {
        cout << n << " is a prime number" << endl;
    }
    return;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        primenumberornot(n);
    }

    return 0;
}