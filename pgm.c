#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char ch,name[10],str[10];
	int word;
	int i;
	 FILE *fp;
	 clrscr();

	 printf("\nEnter name:-");
	 scanf("%s",&name);
	   fp=fopen("k.txt","rt");
	   if(fp==NULL)
	   {
		printf("\nYour file is Empty");
	   }
	   else
	   {
		  while((ch=getc(fp))!=EOF)
		 {
		       ch=getc(fp);
		      // str=ch;
		      //	if(name==)
			 while(ch!=' ')
			 {
				name[i]=ch;
				ch=getc(fp);
			  }
			  name[i]='\0';
			  if(!(strcmp(str,name)))
			  {
				word=word+1;
			  }
		 }
	   }
	   close(fp);
	   getch();
}
