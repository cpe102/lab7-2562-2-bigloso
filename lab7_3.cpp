//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std ;
 int main(){
     int age , high ,asset ;
     cout << "age = ";
     cin >> age;
     if(age <=20){
         cout << "high =";
         cin >> high ;
         if(high <=159){
             cout <<"status = UNFRIEND" ;
         }
         else if(high <= 174){
             cout <<"status = FRIEND" ;
            return 0;
         }
         cout << "asset =";
         cin >> asset ;
         if(asset >= 69000000){
             cout <<"status = MARRIED" ;
         }
         else{
             cout <<"status = ONE-NIGHT-STAND" ;
         }
     }
     else if(age <=29){
         cout << "asset =";
         cin >> asset ;
         if(asset >= 10000000){
             cout <<"status =BEST FRIEND" ;
         }
         else{
             cout << "status = UNFRIEND";
         }
     }
     else {
         cout <<"status = UNFRIND";
     }
     return 0;
 }