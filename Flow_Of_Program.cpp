1.
  
#include<iostream>
using namespace std;
int main()
{
    int year,s;
    cout<<"Enter The Year: "<<endl;
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                cout<<"This is a loop year: "<<year;
            else
                cout<<"This is not a loop year: "<<year;
        }
        else
            cout<<"This is a leap year: "<<year;
    }
    else
        cout<<"This is not a leap year: "<<year;
    return 0;
}


2.
  
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"Your total sum is: "<<c;
}


3.
  
  #include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the input from the user: ";
    cin>>n;
    for(i=1;i<=10; i++)
    {
       cout<<"Here table value is: "<<n*i<<endl;
    }
}

4.
  
  #include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,temp,hcf,lcm;
    cout<<"Enter two values: "<<endl;
    cin>>c>>d;
    a=c;
    b=d;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=a;
    lcm=(c*d)/hcf;
    cout<<"HCF: "<<hcf<<endl;
    cout<<"LCM : "<<lcm<<endl;

}



  
  
