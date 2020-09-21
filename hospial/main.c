#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define BUFFER_SIZE 1000
 int main()
 {
      char name[50];
      char dataToAppend[BUFFER_SIZE];
      char ch;
      int c,n,A;
      char quit,x,B,C;
      char date_1;
   char age[10];
   char parent_name[50];
   char disease[100];
   char date[15];
   char add[1000];
   int z,r;
     FILE *fp,*fp1;
     char fnl[100];
     printf("enter id");
     gets(fnl);
    fp=fopen(fnl,"rb+");
    {
     if(fp==NULL)
	{
	    fp1=fopen(fnl,"w");
		printf("new customer\n");
      printf("Enter information:\n");

      printf("Enter name: ");
    gets(name);
    fprintf(fp1," Name  ");
   fprintf(fp1,"%s",name);

   printf("Enter age: ");
     gets(age);
    fprintf(fp1,"\n age  ");
   fprintf(fp1,"%s",age);

    printf("Enter father/mother's name: ");
    gets(parent_name);
    fprintf(fp1,"\n parent's name  ");
   fprintf(fp1,"%s",parent_name);

    printf("disease description ");
     gets(disease);
    fprintf(fp1,"\n disease  ");
   fprintf(fp1,"%s",disease);

    printf(" visiting date ");
   gets(date);
    fprintf(fp1,"\n visiting date  ");
   fprintf(fp1,"%s",date);

    printf("address ");
    gets(add);
    fprintf(fp1,"\n address  ");
   fprintf(fp1,"%s",add);

    printf("\n Quit Y/N: \n Update records: Y/N  ");
   scanf("%c %c",&quit,&x);
    {if((quit=='N')||(quit=='n'))
    {
        fp=fopen(fnl,"w");

        if((x=='y')||(x=='Y'))
        {

          printf("Enter: ");
    gets(name);
    fprintf(fp1," \n  ");
   fprintf(fp1,"%s",name);

    printf("\n Enter name: ");
    gets(name);
    fprintf(fp1," \nName  ");
   fprintf(fp1,"%s",name);
   printf("Enter age: ");
     gets(age);
    fprintf(fp1,"\n age  ");
   fprintf(fp1,"%s",age);

    printf("Enter father/mother's name: ");
    gets(parent_name);
    fprintf(fp1,"\n parent's name  ");
   fprintf(fp1,"%s",parent_name);

    printf("disease description ");
     gets(disease);
    fprintf(fp1,"\n disease  ");
   fprintf(fp1,"%s",disease);

    printf(" visiting date ");
   gets(date);
    fprintf(fp1,"\n visiting date  ");
   fprintf(fp1,"%s",date);

    printf("address ");
    gets(add);
    fprintf(fp1,"\n address  ");
   fprintf(fp1,"%s",add);




    fputs(dataToAppend, fp);
printf("successful");
        }
   else if((x=='N')||(x=='n'))
    {
      return 0;

    }
    }
    else if((quit=='Y')||(quit=='y'))
    {

        exit(1);
    }
    else
    {
        printf("invalid input");
    }
    }
	}
	else{
  ch = fgetc(fp);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fp);
    }
	}
	printf("\n 1 - Update prev record\n");
           printf("2 - Get an appointment\n");
           printf("3 - Enter details of the new visit\n");
           printf("4 - View your details\n");
	printf("\n Quit Y/N:\n Choose:");
	scanf("%c %d",&quit,&z);
    if((quit=='N')||(quit=='n'))
      {
     switch (z)
   {
       case 1:{ printf("Choice is Update prev record");
       fp=fopen(fnl,"a");

   printf("Enter: ");
     gets(age);
    fprintf(fp,"\n   ");
   fprintf(fp,"%s",age);

 printf("\nEnter name: ");
    gets(name);
    fprintf(fp," \n Name  ");
   fprintf(fp,"%s",name);

   printf("Enter age: ");
     gets(age);
    fprintf(fp,"\n age  ");
   fprintf(fp,"%s",age);

    printf("Enter father/mother's name: ");
    gets(parent_name);
    fprintf(fp,"\n parent's name  ");
   fprintf(fp,"%s",parent_name);

    printf("disease description ");
     gets(disease);
    fprintf(fp,"\n disease  ");
   fprintf(fp,"%s",disease);

    printf(" visiting date ");
   gets(date);
    fprintf(fp,"\n visiting date  ");
   fprintf(fp,"%s",date);

    printf("address ");
    gets(add);
    fprintf(fp,"\n address  ");
   fprintf(fp,"%s",add);
    fputs(dataToAppend, fp);
printf("successful");
               break;}
       case 2: {
           printf("Choice is Get an appointment");
           printf("\nYour appointment is scheduled on");
        {
    A = 2019;
    r = rand() % 12 + 1;
    n = rand() % 20 + 1;
    printf("%d/", n);
    printf("%d/", r);

    printf("%d", A);
    printf("  thank you for visiting ");
                break;}
       case 3: {
           printf("Choice is Enter details of the new visit");
            fp=fopen(fnl,"a");

   printf("Enter: ");
     gets(age);
    fprintf(fp,"\n   ");
   fprintf(fp,"%s",age);

   printf(" \n visiting date ");
   gets(date);
    fprintf(fp,"\n visiting date  ");
   fprintf(fp,"%s",date);

    printf("\n disease description ");
     gets(disease);
    fprintf(fp,"\n disease  ");
   fprintf(fp,"%s",disease);
   break;}

       case 4:{ printf("View your details");
                printf("your details are displayed above");
               break;}
       default: printf("Choice other than 1, 2 ,3 & 4");
                break;
   }
   return 0;
}
}


     fclose(fp1);
fclose(fp);
}
}
