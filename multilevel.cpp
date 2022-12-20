#include<iostream>
using namespace std;
 
// Base class A
 
class A {
    public:
 
    void func() {
        cout << " I am in class A" << endl;
    }
};class B: public A {
 
 
};
class c:public B{};
 
// Driver Code
 
int main() {
 
    // Created an object of class C
 
    c obj;
 
    // Calling function func()
 
   obj.func();
   
    return 0;
}