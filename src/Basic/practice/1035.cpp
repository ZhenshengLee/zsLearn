// 未通过
#include <iostream>
#include<cstdio>  
#include<string>  
#include<cstring>  

using namespace std;


void check()  
{  
    char ch[105];  
    int idxT,idxP,len;  
    scanf("%s",ch);  
    string s=string(ch);  
    len=s.length();  
    idxP=s.find('P',0);  
    idxT=s.find('T',0);  
    if(idxP==string::npos||idxT==string::npos||(idxP>=idxT-1))  
    {  
        printf("NO\n");  
    }  
    else  
    {  
        string a(s,0,idxP);  
        string b(s,idxP+1,idxT-idxP-1);  
        string c(s,idxT+1,len-idxT-1);  
        string ans=a+b+c;  
        if(ans.find_first_not_of('A')!=string::npos)  
        {  
            printf("NO\n");  
        }  
        else  
        {  
            if(idxP==0&&len-idxT-1==0)  
                printf("YES\n");  
            else if(idxP*(idxT-idxP-1)==len-idxT-1)  
                printf("YES\n");  
            else  
                printf("NO\n");  
        }  
    }  
    return;  
}  


int main()
{
	int n;  
    scanf("%d",&n);  
    for(;n--;)  
    {  
        check();  
    }  


	return 0;
}
