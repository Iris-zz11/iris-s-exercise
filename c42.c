#include<stdio.h>
#include<string.h>
int main()
{
    	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
	       	char a[200];
     		int i,j,num,num1,num2,num3,k; 
     		num=num1=num2=num3=0; 
     		gets(a);    
     		k=strlen(a);
     		for(i=0;i<k;i++)
   		{
			if(a[i]>='a'&&a[i]<='z')
		 		num=1;
	  		if(a[i]>='A'&&a[i]<='Z')
				num1=1;
	  		if(a[i]>='0'&&a[i]<='9')
				num2=1;
	  		if(a[i]=='~'||a[i]=='!'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^')
		 		num3=1;
		}
	    	if(num+num1+num2+num3>2&&(k>=8&&k<=16))
		  	printf("YES\n");
		else 
       			printf("NO\n");	      	  
	} 	      	  
	return 0;
}

