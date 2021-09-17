#include <iostream>
#include <bits/stdc++.h>
using namespace std;
   
class Eager {
   public:

      char arr[1024];
      int l;
      
        
      Eager(string a){
        strcpy(arr, a.c_str());
        int c = 0;
        for (int i =0; i<a.size(); i++){
          cout<< arr[i] ;
          c++;
        }
        
        l = c+1;
        cout<<", length:"<<l<<endl;
      }
      
      void assignment (string a);
      
      int length(){
        cout<<"length:"<<l<<endl;
        return l;
      };   
   
      bool operator< (const Eager& b){
        if(l < b.l){
            cout<<"b is bigger than a"<<endl;
            return 1;
        }
        else{
          cout<<"a is bigger than or equal to b"<<endl;
          return 0;
        }
      }
};

void Eager::assignment(string a){
   strcpy(arr, a.c_str());
   
   for (int i =0; i<a.length(); i++){
      cout<< arr[i] ;
   	 
   }
	
} 

class Lazy {
   public:

      char arr[1024];
      int l=-1;
      
        
      Lazy(string a){
        strcpy(arr, a.c_str());
        int c = 0;
        for (int i =0; i<a.size(); i++){
          cout<< arr[i] ;
          c++;
        }
       cout<<endl;
      }
      
      void assignment (string a);
      
      int length(){
        if(l != -1){
        	return l;
		}
        int c = 0;
        for(int i=0; i<1024; i++){
        	if(arr[i]=='\0'){
        		cout<<"DONE LOOPING"<<endl;
				break;
			}
			c++;
		}
		l = c+1;
		return l;
      };   
   
      bool operator< (const Eager& b){
        if(l < b.l){
            cout<<"b is bigger than a"<<endl;
            return 1;
        }
        else{
          cout<<"a is bigger than or equal to b"<<endl;
          return 0;
        }
      }
};

void Lazy::assignment(string a){
   strcpy(arr, a.c_str());
   
   for (int i =0; i<a.length(); i++){
      cout<< arr[i] ;
   	 
   }
	
} 


int main()
{
   string a = "hello world";
   string b = "hi world";
   cout<<":::::::::::::EAGER:::::::::::::"<<endl;
   Eager obj(a);
   Eager obj2(b);
   cout<<endl;
   obj.length();
   //obj.assignment(a);
   obj < obj2;
   Lazy obj3(a);
   cout<<obj3.length()<<endl;

}
