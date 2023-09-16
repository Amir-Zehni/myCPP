#include<iostream>
#include<string>
#include <math.h>

using namespace std;

int main (){

int plus = 0, s, counter = 0, b, a, d, adad, c = 0;

cout<<" Write a whole number of base 8 : ";
// The computer takes base 8 and delivers base 10
cin>>a;

s = a;

b = a;

d = a;

while (b > 0){

             b = a / 10;
             a = b; 
             counter++;
}

while (c < counter){

                 adad = (d % 10) * (pow(8,c));
                 d = d / 10;
                 c = c + 1;
                 plus = plus + adad;
} 

cout<<"\n";

cout<< s <<" (mabna 8) = ";

cout<< plus <<" (mabna 10)";

cout<<"\n";

cout<<"the end. \n";

cout<<"\n";


return 0;


}
