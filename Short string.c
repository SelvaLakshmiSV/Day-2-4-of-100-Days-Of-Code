#include<stdio.h>
#include<string.h>
int main(){
   int i,j,count;
   char name[30][30],temp[25];
   puts("How many strings u are going to enter?: ");
   scanf("%d",&count);

   puts("Enter Strings one by one: ");
   for(i=0;i<=count;i++)
      gets(name[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(name[i],name[j])>0){
            strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
         }
      }
   printf("\nOrder of Sorted Strings:");
   for(i=0;i<=count;i++)
      puts(name[i]);

   return 0;
}

