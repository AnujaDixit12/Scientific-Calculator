#include<iostream>
#include<math.h>
using namespace std;
int fact(int x){
        int r=1;
        if(x==1 || x==0){
            return r;
        }
        else{
            for(int h=2;h<=x;h++){
                r=r*h;
            }
        }
        return r;
    };
int main()
{
    cout<<"***************Welcome to the scientific calcuator by Anuja*****************"<<endl;
    cout<<"Press 0 to quit"<<endl;
    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for substraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;
    cout<<"Enter 5 for factorial"<<endl;
    cout<<"Enter 6 for power"<<endl;
    cout<<"Enter 7 for square"<<endl;
    cout<<"Enter 8 for cube"<<endl;
    cout<<"Enter 9 for squareroot"<<endl;
    int c;
    int fact(int x);
    label:
    cout<<"Enter your choice: ";
    cin>>c;
    int n;
    if(c==5){
        cout<<"Enter a number: ";
        cin>>n;
        int an = fact(n);
        cout<<an<<endl;
        goto label;
    }
    else if(c>=6){
        double m,ans;
        cout<<"Enter a number: ";
        cin>>m;
        switch(c){
            case 6:
                {
                    double p;
                    cout<<"Enter power: ";
                    cin>>p;
                    ans = pow(m,p);
                    cout<<ans<<endl;
                    break;
                }
            case 7:
                ans = pow(m,2);
                cout<<ans<<endl;
                break;
            case 8:
            {
                ans = pow(m,3);
                cout<<ans<<endl;
                break;
            }
            case 9:
                ans= pow(m,0.5);
                cout<<ans<<endl;
                break;
            default:
                break;
        }
        goto label;
    }
    else if(c>=1 && c<5){
        cout<<"Enter the number of input: ";
        cin>>n;
        int a[n],res=0;
        cout<<"Enter the numbers in order you want to solve (in case of substraction and division pace the number in decreasing order or insert the largest number first): "<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        switch(c){
            case 1:
                for(int j=0;j<n;j++){
                    res+=a[j];
                }
                cout<<res<<endl;
                break;
            case 2:
                for(int j=1;j<n;j++){
                    a[0]=a[0]-a[j];
                    res=a[0];
                }
                cout<<res<<endl;
                break;
            case 3:
                res =1;
                for(int j=0;j<n;j++){
                    res*=a[j];
                }
                cout<<res<<endl;
                break;
            case 4:
                res=1;
                for(int j=1;j<n;j++){
                    a[0]=a[0]/a[j];
                    res=a[0];
                }
                cout<<res<<endl;
                break;
            default:
                break;
        }
        goto label;
    }

    else{
        cout<<"Thank You"<<endl;
    }
    return 0;
}
