// Created by ???


/* sololearn is suck = = */
/* Copy this code to your computer and play it ! */
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int ans;
    int a1,b1,c1,d1;
    bool tf =0;
    do{
            ans=rand()%9000+1000;
            a1=ans/1000;
            b1=ans/100%10;
            c1=ans/10%10;
            d1=ans%10;
            if(a1==b1||a1==c1||a1==d1||b1==c1||b1==d1||c1==d1)
                tf=0;
            else
                tf=1;
    }while(tf==0);
    cout<<ans;
    int n,A=0,B=0;
    do{
        cout <<"Please enter four numbers."<<endl;
        cin >>n;
        if(n<1000||n>9999){
            cout <<"Error"<<endl;
            continue;
        }

        int a2=n/10/10/10;
        int b2=n/10/10%10;
        int c2=n/10%10;
        int d2=n%10;

        if(a2==b2||a2==c2||a2==d2||b2==c2||b2==d2||c2==d2){
            cout << "Error"<<endl;
            continue;
        }

        if(a1==a2)
            A++;
        if(b1==b2)
            A++;
        if(c1==c2)
            A++;
        if(d1==d2)
            A++;
        if(a1==d2||a1==b2||a1==c2)
            B++;
        if(b1==d2||b1==a2||b1==c2)
            B++;
        if(c1==d2||c1==b2||c1==a2)
            B++;
        if(d1==a2||d1==b2||d1==c2)
            B++;
        cout <<A<<"A"<<B<<"B"<<endl;
        A=0;
        B=0;

        if(n==ans)
        cout << "You win !"<<endl;

    }while(n!=ans);
    return 0;
}
