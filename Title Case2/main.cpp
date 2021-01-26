#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char phr[]="all animals are equal";
    for(int i=0; phr[i]; i++)
    {
    if(i==0)
    {
        phr[i]=toupper(phr[i]);
    }
    if(phr[i]==' ')
    {
    phr[i+1]=toupper(phr[i+1]);
    }
    }
    cout<<phr<<endl;
    return 0;
}
