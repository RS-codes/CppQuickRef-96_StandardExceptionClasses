//96 _ Available C++ Standard Exception Classes _ Types and using them

//Exception class is defined in the <exception> header file
    //every standard exception classes are derived from this exception class
// The 2 main derived classes are:
    //i.) Logical Error
    //ii.) Runtime Error
        //These are defined inside <stdexcept> header file



//Here we will discuss the Runtime error exception:
#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
    int a=10, b=0, c;
    
    try{
        if(b==0)
            throw runtime_error("divide by zero error");
    c=a/b;
    cout<<c<<endl;        
    }catch(runtime_error &e){
        cout<<"Exception occured: "<<e.what()<<endl;
    }
    return 0;
}
