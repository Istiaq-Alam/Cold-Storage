#include <iostream>

using namespace std;

/*int main(){
    int a,i,j;
    cout << "Enter value of a = ";
    cin >> a;

    for(i=1; i<=a; i++){
        for(j=1; j<=i; j++)
            cout << "* ";
            cout << "\n";
    }
    return 0;
}*/

int main()
{
    char c;
    int i;
    for (c = 65; c <= 69; c++) {
        cout << c ;
        if (c == 65 || c == 69) {
            for (i = 1; i <= 5; i++) {
                cout << c ;
            }
        } else {
            for (i = 1; i <= 5; i++) {
                cout << c;
            }
        }
        cout << endl ;

    }
}



