#include<iostream>
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

float lssthan360(float n){
    int i = n/360;
    n = n - i*360;
    return n;
}
float sin(float n){
    float s = 0;
    float j = lssthan360(n);
    if (j>=0 && j<=90){
        float rad = j*(3.142)/180;
        for (int k=1; k<=10; k++){
            s = s + pow(-1, k+1)*(pow(rad, 2*k-1)/fact(2*k-1));
        }
    }
    if (j>90 && j<=180){
        float l = 180 - j;
        float rad = l*(3.142)/180;
        for (int k=1; k<=10; k++){
            s = s + pow(-1, k+1)*(pow(rad, 2*k-1)/fact(2*k-1));
        }
    }
    if (j>180 && j<=270){
        float l = j - 180;
        float t= 0;
        float rad = l*(3.142)/180;
        for (int k=1; k<=10; k++){
            t = t + pow(-1, k+1)*(pow(rad, 2*k-1)/fact(2*k-1));
        s = (-1)*t;
        }
    }
    if (j>270 && j<360){
        float l = 360 - j;
        float t= 0;
        float rad = l*(3.142)/180;
        for (int k=1; k<=10; k++){
            t = t + pow(-1, k+1)*(pow(rad, 2*k-1)/fact(2*k-1));
        s = (-1)*t;
        }
    }
    return s;
}
float cos(float n){
    float s=1;
    float j = lssthan360(n);
    if (j>=0 && j<=90){
        float rad = j*(3.142)/180;
        for (int k=2; k<=10; k++){
            s = s + pow(-1, k+1)*(pow(rad, 2*k-2)/fact(2*k-2));
        }
    }
    if (j>90 && j<=180){
        float l = 180 - j;
        float t = 1;
        float rad = l*(3.142)/180;
        for (int k=2; k<=10; k++){
            t = t + pow(-1, k+1)*(pow(rad, 2*k-2)/fact(2*k-2));
        }
        s = (-1)*t;
    }
    if (j>180 && j<=270){
        float l = j - 180;
        float t = 1;
        float rad = l*(3.142)/180;
        for (int k=2; k<=10; k++){
            t = t + pow(-1, k+1)*(pow(rad, 2*k-2)/fact(2*k-2));
        }
        s = (-1)*t;
    }
    if (j>270 && j<360){
        float l = 360 - j;
        float rad = l*(3.142)/180;
        for (int k=2; k<=10; k++){
            s = s + pow(-1, k+1)*(pow(rad, 2*k-2)/fact(2*k-2));
        }
    }
    return s;
}
float tan(float n){
    float t = sin(n)/cos(n);
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
