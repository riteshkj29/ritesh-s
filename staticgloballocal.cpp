#include <bits/stdc++.h>
using namespace std;
int x=3;
class A {
    static int x;
    public:
        void f1(int x){
            cout<<"\nValue of static x :"<<A::x;
            cout<<"\nValue of local x:"<<x;
            cout<<"\nValue of global x:"<<::x;
        }
};
int A::x = 4;
int main() {
    int x=5;
    A obj;
    obj.f1(x);
	return 0;
}
