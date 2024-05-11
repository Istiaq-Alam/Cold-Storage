#include <bits/stdc++.h>
using namespace std;
int main()
{
    //string s1 ;
    //char ch[] = {'C','+','+'};
    //string s2 = string(ch); // character ch is now string

    //getline(cin, s1); //get a txt line
    //cout << endl << "The length of the Txt string is: "<< s1.length()<<endl; //s2.length will show the length

    //cout << s1.at(2)<<endl; // showing 2nd index of sting
    //cout << s1[7]<<endl; // showing 7th index of string

    //string string1 = "tania";
    //string string2 = "TANIA";
    //string fullName = string1 +" "+ string2 ; //concatenation 2 strings
    //string conName = firstName.append(lastName); // same as concating 2 string
    //cout << fullName << endl;

    /*if(string1 > string2){ // checking if the string are equal
        cout<< "string 1 is bigger"<< endl;
    }*/
    //int Comp_result = string1.compare(string2); //if 2 strings are equal return 0
    //cout << Comp_result;

    /*string text = "C++ Programming";
    int position = text.find("Programming"); // string position
    cout << position << endl;

    string substring = text.substr(4, 11); // substr(position, length)
    cout<<substring ;*/


    /*
    string text = "C-- Programming";
    int position = text.find("Programming"); // find the position
    cout << position << endl;
    text.replace(1, 2, "++"); //replace(index, size, string)
    cout << text << endl;
    text.erase(1, 2);        //erase(start index,size)
    cout<< text<< endl<< endl;


    string s1 = "well play";
    string s2 = "GG BOYS";

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << s1 << endl;
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout << s2 << endl <<endl;


    char* str1 = "1232131FDJS345";
    char* str2 = "3.1416953";

    int res1 = atoi(str1);
    int res2 = atoi(str2);

    cout << "atoi(" << str1 <<") is " << res1 << "\n";
    cout << "atoi(" << str2 <<") is " << res2 << "\n";
    */

    cout <<"\t\t\tClass Date: 16-04-24"<<endl<<endl;
   /*string str1 = "45";
    string str2 = "3.14159";
    char str3[] = "31337 geek";

    int myint1 = stoi(str1);
    int myint2 = stoi(str2);
    int myint3 = stoi(str3);

    cout << "stoi(\"" << str1 << "\") is " << myint1 << endl;
    cout << "stoi(\"" << str2 << "\") is " << myint2 << endl;
    cout << "stoi(\"" << str3 << "\") is " << myint3 << endl; */


    string str = "Setting the example\nRaising up the bar\nShowing what is possible\nSo others may go far\n";

    cout << "Before removing whitespace characters :" << endl;
    cout << str << endl << endl ;

    cout << "After removing whitespace characters : "<< endl;
    for(int i=0; i<str.size(); i++){
    if(!isspace(str[i]))
    cout << str[i];
    }
    cout <<endl << endl<< endl;

    string str2 = "Learn Competitive Programming at NDUB Coder!!";
    size_t first = str2.find('m'), last = str2.find_last_of('m');

    if(first != string::npos){
    cout << "First Occurrence of m is at index = " << first << "\n";
    }
    if(last!=string::npos){
    cout << "Last Occcurence of m is at index = " << last << endl;
    }

    sort(str2.begin(), str2.end());
    cout << "Sorted String = " << str2 << "\n";

    string rev(str2.rbegin(), str2.rend());
    cout << "Reverse = " << rev << endl<<endl;







    return 0;
}




















