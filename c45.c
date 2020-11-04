#include <stdio.h>
#include<string.h>
char s[105],a[105],b[105],c[105];
int main()
{
	int i;
	while(gets(s)){
		if(strcmp(s,"E")==0)
		       	break;
		int cnt1=0,cnt2=0,cnt3=0,len=strlen(s);
		for(i=0;i<len;i++){
			a[i]=b[i]=c[i]='0';
		}
		for(i=0;i<len;i++){
    			if(s[i]=='Z')
    				a[cnt1++]='Z';
    			if(s[i]=='O')
    				b[cnt2++]='O';
    			if(s[i]=='J')
    				c[cnt3++]='J';
    		}
    		for(i=0;i<len;i++){
    			if(a[i]!='0')
    				printf("%c",a[i]);
    			if(b[i]!='0')
    				printf("%c",b[i]);
    			if(c[i]!='0')
    				printf("%c",c[i]);
    		}
    		printf("\n");			
    	}
        return 0;
    }
