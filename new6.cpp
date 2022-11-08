#include<iostream>
using namespace std;

float pow(float n1,float n2){
            float d=n1;
            for(int k=1;k<n2;k++){
                d=d*n1;
            }
            return d;
        }
int fact(int n){
    int i=1;
    for(int k=1;k<=n;k++){
        i=i*k;
    }
    return i;
}
float sin(float n){
    float s=0;
    for(int k=1;k<=10;k++){
        s=s+pow(-1,k+1)*(pow(n,2*k-2)/fact(2*k-2));
    }
    return s;
}
float cos(float n){
    float s =1;
    for (int k=2; k<=10; k++){
        s = s + pow(-1, k+1)*(pow(n, 2*k-2)/fact(2*k-2));
    }
    return s;
}
float roundof(float n, int z){
            float nem;
            float num= n*(pow(10,z));
            int e= num*10;
            if(e%10==5 && (e/10)%2==0){
                int d=(int)num;
                nem= (float)d/(pow(10,z));
            }
            return nem;
        }
float tan(float n){
    float t= sin(n)/cos(n);
    return t;
}
        
int main(){
    float n1,n2;
    cout<<"input 2 numbers "<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"input an operator "<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        case 'e':
        cout<<pow(n1, n2)<<endl;
        break;
        case 's':
        cout<<sin(n1)<<endl;
        
        
        


    }
    return 0;
}