int findlength(char str[]) {
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}

int getpassword(char a[])
{
      char b;
      int i,length,capital=0,small=0,number=0,character=0,digit=0;
      length=findlength(a);
      if(length<8)
      digit=1;
      else
       {
        for(i=0;i<length;i++)
        if((a[i]>=48&&a[i]<=57))
        {
            number=0;

            break;
        }
        else
        number=1;

        for(i=0;i<length;i++)
        if((a[i]>=65&&a[i]<=90))
        {
            capital=0;

            break;
        }
        else
        capital=1;
        
        for(i=0;i<length;i++)
        if(a[i]>=97&&a[i]<=122))
        {
            small=0;

            break;
        }
        else
        small=1;

        for(i=0;i<length;i++)
        if(a[i]>=35&&a[i]<=38))
        {
            character=0;

            break;
        }
        else
        character=1;


    }
    if(digit==1||capital==1||small==1||character==1||number==1)
    printf("\nWrong input\n");
    else
    printf("your password is successfully created\n");


    return;
}
