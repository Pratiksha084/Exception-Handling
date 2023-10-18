#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter 2 numbers:";
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            c=a/b;
            cout<<"\nDivision="<<c;
        }
        else
        {
            throw b;
        }
    }
    catch(int e)
    {
        cout<<"\nDivide by "<<e<<" error";
    }
    return 0;
}
/*Output
Enter 2 numbers:2/0
Divide by 0 error
*/

/*Name-Purvansha Gehlod
PRN-22070123088
Exp-16(Part-B)
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nEnter age ";
    cin>>a;
    try
    {
      if(a>=18)
    {
        cout<<"Eligible "<<a;
    }
    else
    {
throw a;
    }
}
catch(int e)
{
    cout<<"\nNot Eligible"<<" error";
}
return 0;
}
/*Output
Enter age 17
Not Eligible error
*/