#include<bits/stdc++.h>
using namespace std;
#define f(x) (pow(x,2)-7)
int main(){
    float x0,x1;
    cin>>x0>>x1;
    float e=0.001;
    float f0,f1,f2,x2;
    int cunt =0;
    do{
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);
        if(f(x0)*f(x2)>0){
            x0=x2;
        }
        else{
            x1=x2;
        }
        cunt++;
        cout<<cunt<<" "<<"x:"<<x2<<" "<<"f(x):"<<f2<<endl;
    }
    while(abs(f2)>e&&cunt<120);
    cout<<"\nRoot is:"<<x0<<endl;

}
