#include <iostream>
using namespace std;
int main() {
    
    string str1 = "a man, a plan, a canal: panama";
    string str2 = "this is a failed test";
    string str;
    bool test;
    
    while(str1.size() > 0){
           for(int i=0; i<str1.size(); i++){
               if(str1[i]==',' || str1[i]==':' || str1[i]==' '){
                   str1.replace(i,1,"");
               }
               if(str1[i] == ' '){
                   str1.replace(i,1,"");
                   
               }
              
           }
           for(int j = str1.size(); j>=0; j--){
                     str.push_back(str1[j]);
                 }
         
        break;
        
    } 
      if(str.compare(str1) == 0){
          test = 1;
      }
      else{
          test = 0;
      }
                
           

        
      cout<<str1<<endl<<str<<endl<<test;
       
}
