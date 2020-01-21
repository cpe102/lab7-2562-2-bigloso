//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std ;
 int main(){
     int age , tall ,asset ;
     cout << "age = ";
     cin >> age;
     if(age <=20){
         cout << "tall =";
         cin >> tall ;
         if(tall <=159){
             cout <<"status = UNFRIEND" ;
         }
         else if(tall <= 174){
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