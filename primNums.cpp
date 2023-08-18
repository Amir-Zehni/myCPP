#include<iostream>
#include<string>
using namespace std;
int main(){
    
    int n , i ,p = 0;
    cout<<" pleas enter a number : ";
    cin>> n;
    
    for(i = 1 ;i <= n ;i++){
               
               if(n % i == 0)   
               p++;
    }    
    
    if(p == 2){
        
        cout<<" number is prim ";
    }    
    else if(p == 1){
        
        cout<<" The number 1 is neither composite nor prime ";
    }
    else {
          cout<<" number is composite ";
    }
    
    return 0;
}
