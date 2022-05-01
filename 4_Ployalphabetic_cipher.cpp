
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
      char msg[30],key[30],k[20],ct[20],pt[20];
      int lenm,lenk,i,j;
    
 
      printf("Enter Message : ");
      gets(msg);
      printf("Enter Key : ");
      gets(key);
      lenm=strlen(msg);
      lenk=strlen(key);
      for(i=0;i<lenm;i++,j++)
      {
            if(j==lenk)
            {
                  j=0;
            }
            k[i]=key[j];
      } 
      for(i=0;i<lenm;i++)
      { 
            ct[i]=((msg[i]+k[i])%26)+'A';
      }
      ct[i]='\0'; 
      for(i=0;i<lenm;i++)
      {
            pt[i]=(((ct[i]-k[i])+26)%26)+'A';
      }
      pt[i]='\0'; 
      printf("\nEncrypted Message : %s", ct);
      printf("\nDecrypted Message : %s", pt);
      getch();
  }
