#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout <<"\t\t(Pointer) Class Date: 16-04-24"<<endl<<endl;

    cout <<"\t\t(Pointer) Class Date: 23-04-24"<<endl<<endl;
    int Var1 = 100;
    cout <<"Var1 = " << Var1 <<"\n";
    cout <<"&Var1 = " << &Var1 << "\n\n";

    int *ptr = &Var1;

    cout << "ptr = " << ptr << "\n";
    cout << "*ptr = " << *ptr <<"\n\n";

    string A = "NDUB Programming Club";
    string *ptr2 = &A;
    cout << A << endl;
    cout << &A << endl;
    cout << ptr2 << endl;
    cout << *ptr2 << endl<<endl; //derefarencing

    int a=20, b=10, *p1=&a, *p2=&b;
    cout << "Before Swap: *p1 = "<<*p1<<"\t*p2 = "<<*p2<<endl;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    cout << "After Swap: *p1 = "<<*p1<<"\t*p2 = "<<*p2<<endl<<"a="<<a<<" b="<<b<<endl<<endl;


    cout <<"\t\t(Pointer) Class Date:03-05-24"<<endl<<endl;
    /*int *np = 0 ; //NULL
    cout << *np;
    if(np==nullptr)
    {
        cout << "Pointer is curretly null." <<endl;
    }
    else
    {
        cout << "Pointer is not null." <<endl;
    }

    int value = 5;
    np = &value;
    if(np==nullptr)
    {
        cout << "Pointer is curretly null." <<endl;
    }
    else
    {
        cout << "Pointer is not null." <<endl;
        cout << "Value at the memory location pointed to by the pointer: "<< *np <<endl<<endl;
    }*/

    int var =10;
    int *np1 = &var;
    cout << "var = *np1 = "<< *np1<<endl;
    *np1 = 20;
    cout << "var = *np1 = "<< *np1<<endl;
    int **np2 = &np1;
        **np2 = 30;
    cout << "var = **np2 = " <<**np2<<endl<<endl;


    int variable = 169;
    int *pointer1;
    int **pointer2;
    int ***pointer3;

    pointer1 = &variable;
    pointer2 = &pointer1;
    pointer3 = &pointer2;

    cout<<"Value of variable:- "<<variable<<endl;
    cout<<"Value of variable using single pointer:- "<<*pointer1<<endl;
    cout<<"Value of variable using double pointer:- "<<**pointer2<<endl;
    cout<<"Value of variable using triple pointer:- "<<***pointer3<<endl<<endl;

    int pa[5] = {1,2,3,4,5};
    int *ptra = pa ;
    cout<<"Address of array pointer:- "<<ptra<<endl;
    cout<<"index 1:- "<<*(ptra+1)<<endl;
    cout<<"index 2:- "<<*(ptra+2)<<endl;

    //using for loop
    for(int i=0; i<5; i++)
    cout<<"array["<<i<<"] = "<<*(ptra+i)<<endl;

    return 0;
}



















