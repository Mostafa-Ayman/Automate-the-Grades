#include <iostream>

using namespace std;

int main()
{
    int n;
    double t1,t2,t3,t4,t5,t6,t7,avg;
    cin>>n;
    for (int i=1;i<=n;++i)                           //Case 1: B
    {
        cin>>t1>>t2>>t3>>t4>>t5>>t6>>t7;

        if(t5>=t7&&t6>=t7) //7
        avg=(t5+t6)/2.0;
        else if(t5>=t6&&t7>=t6) //6
         avg=(t5+t7)/2.0;
        else if(t6>=t5&&t7>=t5) //5
         avg=(t7+t6)/2.0;


        double ans =t1+t2+t3+t4+avg;
        if(ans>=90)cout<<"Case "<<i<<": A\n";
        else if(ans<90&&ans>=80)cout<<"Case "<<i<<": B\n";
        else if (ans<80&&ans>=70)cout<<"Case "<<i<<": C\n";
        else if (ans<70&&ans>=60)cout<<"Case "<<i<<": D\n";
        else cout<<"Case "<<i<<": F\n";
    }
    return 0;
}
