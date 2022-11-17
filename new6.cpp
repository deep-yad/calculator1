#include<iostream>
extern const float pi= 3.142;
using namespace std;

float pow(float n1,float n2){
            float d=n1;
            for(int k=1;k<n2;k++){
                d=d*n1;
            }
            return d;
        }

       float fact(float num){
           double result =1;
           double num2= num;
           for(int i=0; i<num;i++){
               result = result*num2;
               num2--;
           }
           return result;
       }

       float sin(float n){
    float s=0;
    for(int k=1;k<=100;k++){
        s=s+pow(n,2*k-1)*pow(-1,k+1)/fact(2*k-1);
        
        
    }
    return s;
}
float cos(float n){
    float s =0;
    for (int k=1; k<=100; k++){
        s = s + pow(n,2*k)*(pow(-1,k)/fact(2*k));
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
     int n;
     label:
     cout<<" press 1 for add/n press 2 for substraction/n press 3 for multiplication/n press 4 for division/n press 5 for power/n press 6,7,8 for trigonometry functions/n press 9 to exit "<<endl;
     cin>>n;
     switch (n)
        
    {
        
        case 1 :

        cout<<"<enter two numbers";
        cin>>n1>>n2;
        cout<<n1+n2<<endl;
        goto label;
        
        case 2:
       
         cout<<"<enter two numbers"<<endl;
         cin>>n1>>n2;
        cout<<n1-n2<<endl;
        goto label;

        case 3:
         cout<<"<enter two numbers"<<endl;
         cin>>n1>>n2;
        cout<<n1*n2<<endl;
        goto label;

        case 4:
         cout<<"<enter two numbers"<<endl;
         cin>>n1>>n2;
        cout<<n1/n2<<endl;
        goto label;

        case 5:
        cout<<"<enter base and power"<<endl;
        cin>>n1>>n2;
        cout<<pow(n1, n2)<<endl;
        goto label;

        case 6:
        cout<<" enter the angle "<<endl;
        cin>>n1;
        cout<<sin(n1)<<endl;
        goto label;
        
          case 7:
        cout<<" enter the angle "<<endl;
        cin>>n1;
        cout<<cos(n1)<<endl;
        goto label;

          case 8:
        cout<<" enter the angle "<<endl;
        cin>>n1;
        cout<<tan(n1)<<endl;
        goto label;

    }
    return 0;
}
