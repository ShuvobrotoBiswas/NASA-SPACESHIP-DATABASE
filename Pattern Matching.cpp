#include <iostream>

using namespace std;

int lengthS, lengthP, i, j, count=0;

int main()
{
    string input_str, pattern_str;
    cout<<"Enter the input String: ";
    getline(cin,input_str);
    cout<<"Enter the pattern: ";
    getline(cin,pattern_str);

    lengthS = input_str.length();
    lengthP = pattern_str.length();

    cout<<"LengthS="<<lengthS<<endl;
    cout<<"LengthP="<<lengthP<<endl;

    for(i=0; i<lengthS; i++)
    {
        for(j=0; j<lengthP; j++)
        {
            if(input_str[i+j]!=pattern_str[j])
                break;
        }
        if (j==lengthP)
        {
            count++;
            cout<<"Pattern found in location: "<<i<<endl;
        }
    }
    if(count==0)
        cout<<"No Pattern found!!!";
    else
        cout<<"No of "<<count<<" occurrences found";
}
