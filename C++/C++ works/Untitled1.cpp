#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the Number:";
    cin >> a;

    if(0<=a<2e8)
    {
        string stri = to_string(a);
        int n = sizeof(a);
        for(int i=n; i>0; i--)
        {
            if(i==3)
            {
                for(i=n; i>0; i--)
                    cout<< stri[i];
                cout << ",";
            }

            else if(i==6)
            {
                for(i=n; i>0; i--)
                    cout<< stri[i];
                cout << ",";
            }



            else if(i==9)
            {
                for(i=n; i>0; i--)
                    cout<< stri[i];
                cout << ",";
            }
}

    }
    //cout << a;
    return 0;
}

