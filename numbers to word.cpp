#include <iostream>
#include<string>
using namespace std;


int main()
{
    int run;
    string ones[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    cin>>run;

    int thous,mod_thous,hund,mod_hund,ten,one;
    thous=run/1000;
    mod_thous=run%1000;
    hund=mod_thous/100;
    mod_hund=mod_thous%100;
    ten=mod_hund/10;
    one=mod_hund%10;
    cout<<ones[thous]<<" thousand"<<" "<<ones[hund]<<" hundred and"<<" "<<tens[ten-2]<<" "<<ones[one];

    return 0;
}
