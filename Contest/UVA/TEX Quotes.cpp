#include <iostream>
#include <set>
using namespace std;

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int t;
    set<int> resultSet;
        for (int i = 0; i <  n; i++){
            cin >> t;
            resultSet.insert(t);
        }
        for (int i = 0; i <  m; i++){
            cin >> t;
            resultSet.insert(t);

        }
        for (auto i : resultSet) {
            cout << i<< " ";
        }
}
