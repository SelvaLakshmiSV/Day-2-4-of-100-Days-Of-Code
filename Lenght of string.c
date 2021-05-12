int main()
{
    char str[50],i;
    printf("Enter a string: \n");
    scanf("%[^\n]",str);
    for(i=0; str[i]!='\0'; ++i);
       printf("\nLength of input string: %d",i);

    return 0;
}
