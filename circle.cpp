#include<iostream>
using namespace std;
class base
{
    public:
    float radius;
    float pi;
    virtual void fun(){
        cout<<"inside base fun";
    }
};

//adding file from local to remote

int iNo1;


//initializing variable
iNo1=11;

//adding comments in main file 
// adding file 

class derived:public base
{
    public:
    virtual void fun(){
        cout<<"inside derived fun"<<endl;
    }
};

class derivedsecond:public derived
{
    
};

int iNo1=11;
int main()
{
    derivedsecond obj1;
    derived obj2;
    base obj3;
    base * dp =NULL; 
    dp=&obj1;  
    
	dp->fun();
    dp=&obj1;  
    dp->fun();
    dp=&obj1;  
	// funcntion call
    dp->fun();
    cout<<"inside main"<<endl;
    return 0;
}
