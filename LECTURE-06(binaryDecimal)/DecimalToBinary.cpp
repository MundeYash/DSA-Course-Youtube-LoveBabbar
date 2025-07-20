#include <bits/stdc++.h>
using namespace std;

// Decimal number to Binary conversion: you are given a number in decimal format and we need to return its corresponding binary representation
int main()
{
   int n ; 
   cout<<"Enter a decimal number " ; 
   cin>> n ; 
   string value =""; 
    int ans =0 ;
    int i=0 ;

   while (n>0 ){
    int ld = (n&1);
    value.push_back(ld+'0') ;
    if (ld ==1 ){
        ans += (1 << i); // Correctly construct the binary integer using bitwise shift
    }
    i++;
    n = n>> 1 ;
   }
   reverse(value.begin() ,value.end());

   cout<<value<<","<<ans ; 
    return 0;
}