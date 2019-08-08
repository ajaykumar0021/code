#include <iostream>


using namespace std;




int main()

{   
    
int X;
  
int P;
    
cin>>X;
    
cin>>P;
    
float y=(float)90 / 100;
    
int sum=0;
    
while(X>1)
   
 {
        
sum=sum+X;
        
int k=X*y;
        
X=X-k;
    
}
        
cout<<sum<<endl;    
return 0;

}
