
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

unsigned long long fac(unsigned long long a) {
    if(a == 0)
        return 1;
    
    for(int i=a-1; i>0; i--)
    {
        a *= i;
    }
    return a;
}

void output(unsigned long long c, int a, int b) {
    //coefficient
    
    if(c == 1)
        cout << "";
    else
        cout << c << " ";
    
    //x term
    if(a == 0)
        cout << "";
    else if(a == 1)
        cout << "x" << " ";
    else
        cout << "x^" << a << " ";
    
    //y term
    if(b == 0)
        cout << "";
    else if(b == 1)
        cout << "y" << " ";
    else
        cout << "y^" << b << " ";
    cout << endl;
    
}

int main() {
    freopen("test.in","r",stdin);

    int t;
    cin >> t;

    for(int i=0 ; i<t; i++) {
        int k, n, r;
        cin >> k >> n;
        r = k-1;
        
        unsigned long long *ptr = new unsigned long long[3];        
        unsigned long long num=1;

        for(int i=0; i<r; i++)
            num = num * (n - i)/(i + 1);
        
        *ptr = num;
        *(ptr+1) = n - r;
        *(ptr+2) = r;
          

        output(*ptr, *(ptr+1), *(ptr+2));
        
        delete ptr;
    }  
    

}
