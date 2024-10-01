// 1 No problem slove
/*#include<stdio.h>
int main()
{
    int T,i,n[100];
    printf("Enter the value of T: ");
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%d",&n[i]);

        if(n[i]%2==0)
    {
        printf("Even\n");
    }
    else
        printf("Odd\n");


    }
    return 0;
} */



// 2 No Problem slove.
/*#include<stdio.h>
#include<string.h>
int main()
{
    char n[102],last_character;
    int T,i,length,last_number;

    printf("Enter the value of T: ");
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        scanf("%s",n);

        length = strlen(n);
        last_character = n[length-1];
        last_number = last_character - '0';

        if(last_number%2 == 0)
        {
            printf("Even\n");
        }
        else {
            printf("Odd\n");
        }
    }
    return 0;

} */




// 3 No problem slove. 2ta logice slove kora ace.
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=1000;i>=1;i--)
    {
        if(i%5 == 0)
        {
            printf("\n");
        }
        printf("%d\t",i);
    }
}
*/
/*#include<stdio.h>
int main()
{
    int i;
    for(i=1000;i>0;i--){
        printf("%d\t",i);

        i = i-1;
        printf("%d\t",i);

        i = i-1;
        printf("%d\t",i);

        i = i-1;
        printf("%d\t",i);

        i = i-1;
        printf("%d\n",i);

    }
    return 0;
} */


// 4 No problem slove.
/*#include<stdio.h>
int main()
{
    int T,n;
    printf("Enter the value of T :");
    scanf("%d",&T);

    for(int i=1;i<=T;i++) {
        scanf("%d",&n );
        printf("case: %d\n",i);

        for(int j=1;j<=n;j++) {
            if(n%j==0)
            {
                printf("%d\n",j);
            }
        }
        printf("\n");

        }
        return 0;

}
*/
//4 No problem slove, Another logic with Array....
/*
#include<stdio.h>
int main()
{
     int T,i,j,num[50];
    printf("Enter the value of T: ");
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&num[i]);
        for(j=1;j<=num[i];j++)
        {
            if(num[i]%j == 0)
            {
                printf("%d\t",j);
            }
        }
         printf("\n");
    }
   return 0;

}

*/



// 5 No problem slove.
/*#include<stdio.h>
int main()
{
   int T,n,i,j;
   printf("Enter the value of T: ");
   scanf("%d",&T);

   for( i=1;i<=80; i++)
   {
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               printf("*");
           }
           printf("\n");
       }
       printf("\n");

   }
   return 0;
} */


// 5 No Problem Slove Function diye korchi(Ei function e kono return type nei ni. So ami function r kono code korte chaile eikane theke idea nite parbo).
/*#include<stdio.h>
void draw_square(int n) {
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int T,m;
    printf("Enter the value of T: ");
    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        scanf("%d",&m);

    draw_square(m);
    printf("\n");
    }
} */



// 6 No problem.
/*#include<stdio.h>
int main()
{
    int T,n,i,sum;
    int firstDigit,lastDigit;
    printf("Enter the value of T: ");
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);

        lastDigit = n%10;
        firstDigit = n;

        while(n>=10)
        {
            n = n/10;
        }
        firstDigit = n;

        sum = firstDigit + lastDigit;
        printf("%d\n",sum);
    }

} */



// 6 No Problem.
/*
  1.Input a number from user. Store it in some variable say num.
  2.To find last digit of given number we modulo divide the given number by 10. Which is lastDigit = num % 10.
  3.To find first digit we divide the given number by 10 till num is greater than 0.
  4.Finally calculate sum of first and last digit i.e. sum = firstDigit + lastDigit
*/
// Kono number r first & last digit sum korte bolle ei Programme theke idea nibo.
/*#include <stdio.h>

int main()
{
    int num, sum=0, firstDigit, lastDigit;

    /* Input a number from user */
// printf("Enter any number to find sum of first and last digit: ");
//scanf("%d", &num);

/* Find last digit to sum */
//lastDigit = num % 10;


/* Copy num to first digit */
// firstDigit = num;

/* Find the first digit by dividing num by 10 until first digit is left */
/* while(num >= 10)
 {
     num = num / 10;
 }
 firstDigit = num; */


/* Find sum of first and last digit*/
/* sum = firstDigit + lastDigit;

printf("Sum of first and last digit = %d", sum);

return 0;
} */



// 7 No Problem.
/*
#include<stdio.h>
int function(char num[])
{
    int i,len;
    int count = 0;
    len = strlen(num);

    for(i=0;i<len;)
    {
        if(num[i] == ' ')
        {
            while(num[i] == ' ')
            {
                i++;
            }
            count++;
        }
        else
        {
            i++;
        }

    }
    return count + 1;
}
int main()
{
    int T;
    char n[100];
    printf("Enter the value of T: ");
    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        scanf(" %[^\n]",n);
        printf("%d\n",function(n));
    }
    return 0;
}
*/



// G.C.D korar jonno Programme. Eikane 2ta programme kora ace GCD r jonoo, jekono ekta follow korlei hbe.
/*#include<stdio.h>
int main()
{
    int num1,num2,i,gcd;

    printf("Enter the value of num1: ");
    scanf("%d",&num1);
    printf("Enter the value of num2: ");
    scanf("%d",&num2);

    for(i=1;i<=num1 && i<=num2; i++)
    {
        if(num1%i ==0 && num2%i == 0)
        {
            gcd = i;
        }
    }
    printf("The GCD is = %d\n",num1,num2,gcd);

    return 0;

} */


/*#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,reminder,gcd;
    printf("Enter the value of num1: ");
    scanf("%d",&num1);
    printf("Enter the value of num2: ");
    scanf("%d",&num2);

    n1 = num1;
    n2 = num2;

    while(n2!=0)
    {
        reminder = (n1%n2);
        n1 = n2;
        n2 = reminder;
    }
    gcd = n1;

    printf("The GCD is = %d\n",gcd);

    return 0;

} */


//8No Problem Slove
/*
#include<stdio.h>
int main()
{
    int n1,n2,n3,i;
    int T,high,low,mid;
    printf("Enter the value of T: ");
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&n1,&n2,&n3);
        if(n1>n2)
        {
            mid=n1;
            low=n2;
        }
        //2nd Else
        else
        {
            mid=n2;
            low=n1;
        }
        //2nd if
        if(mid>n3)
        {
            high=mid;
            {
                if(low>n3)
                {
                    high=low;
                    low=n3;
                }
                // 2nd IF r Else
                else
                {
                    mid=n3;
                }
            }
        }
        //3rd Else
        else
        {
            high=n3;
        }
        printf("Case: %d %d %d\n",low,mid,high);
    }
    return 0;
}

*/



// 9 No problem
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int num,T,i,sq_root;
    printf("Enter the value of T: ");
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&num);
        sq_root=sqrt(num);
        if(sq_root*sq_root == num)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
*/
//OR
/*#include<stdio.h>
int main()
{
    int T,n;
    printf("Enter the value of T: ");
    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        scanf("%d",&n);

        int x = sqrt(n);
        if(x*x == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
} */

// 10 No problem.
/*#include<stdio.h>
int main()
{
    int T,r1,r2,B;
    double present_run_rate,recuried_run_rate;
    printf("Enter the value of T: ");
    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        scanf("%d %d %d",&r1,&r2,&B);
        int boll_played = 300-B;
         present_run_rate = (r2/((300-B)/6));
         recuried_run_rate = ((r1 - r2 +1)/(B/6));

        printf(" %.2lf\n %.2lf\n",present_run_rate,recuried_run_rate);
    }
    return 0;
} */


// 11 No Problem. 1st & 2nd type dwtai thik ace.
/*
#include<stdio.h>
int main()
{
    int T,num,i,j,fact=1;
    printf("Enter the value of T: ");
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&num);
        for(j=1;j<=num;j++)
        {
             fact=fact*j;
        }
        printf("Factorial:%d\n",fact);
    }
    return 0;
}
*/
 //OR
/*
#include<stdio.h>
int main()
{
    int i,j,T,n[100];
    int fact = 1;

    printf("Enter the value of T: ");
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        scanf("%d",&n[i]);
    }

        for(i=0;i<T;i++)
        {
            if(n[i]>0)
            {
                for(j=1;j<=n[i];j++)
                {
                fact=fact*j;
                }
                printf ("%d ",fact);
            }
            fact=1;
        }
    return 0;
}
*/

//OR

/*
#include<stdio.h>
int main()
{
    int T,i,n[100];
    int fact = 1;

    printf("Enter the value of T: ");
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d",&n[i]);

        if(n[i]>0)
        {
            for(int j=1; j<=n[i]; j++)
            {
                fact = fact*j;
            }
            printf("%d\n",fact);
        }
        fact = 1;
    }
    return 0;
} */


// 12 No problem slove.
/*
#include<stdio.h>
int main()
{
    int T,n,i,j;
    int fact=1,zero_count;
    printf("Enter the value of T: ");
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        zero_count=0;
        int num=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            fact=fact*j;
        }
        while(fact>=10)
        {
             int r=fact%10;
             if(r == 0)
             {
                 zero_count++;
             }
             fact=fact/10;
        }
        printf("%d\n",zero_count);
    }
    return 0;
}

*/

// Kono number r moddhe koita zero ace seta count korar programme.
/*
#include<stdio.h>
int main()
{
    int zero_count = 0, i = 0,num;

    printf("Enter the number: ");
    scanf("%d",&num);
    int k = 0;
    int temp = num;
    // Number r length ber korchi, array r size r jonno.
    while(temp > 0) {
        temp = temp/10;
        k++;
    }

    int arr[k];
    while(num > 0) {
        int mod = num % 10;
        arr[i] = mod;
        num = num/10;
        i++;
    }
    for(int j = 0; j <= k; j++){

        if(arr[j] == 0) {
            zero_count++;
        }
    }
    printf("Zero Count: %d", zero_count);

    return 0;
}
*/

/*
Prgrame vhul ace
#include<stdio.h>
int main()
{
    int arr[50];
    int i,n;
    printf("Enter the size of n: ");
    scanf("%d",&n);
    printf("Enter the element of array: ");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for( i=0;i<=n;i++)
    {
        if(arr[i] == ' ')
            count++;
    }
        printf("Number of string in the Array:%d\n",count);
}
*/
/*
#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter any string: ");
    gets(s);
    int i,len;
    len=strlen(s);
    for(i=0;i<len;i=i+2)
    {
        char temp = s[i];
        s[i] = s[i+1];
        s[i+1] = temp;
    }
    printf("%s",s);
}
*/
// Kono string e koto gula Capital, Small letter ace & koto gula number & special charerter ace
/*
#include<stdio.h>
int main()
{
   char s[50];
   printf("Enter the string: ");
   gets(s);
   int Capital_letter=0,Small_letter=0,special_character=0,i;
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]>='A' && s[i]<='Z')
       {
           Capital_letter++;
       }
       else if(s[i]>='a' && s[i]<='z')
       {
           Small_letter++;
       }3
       else
       {
           special_cha6racter++;
       }
   }
   printf("Number of Capital letter is=%d\n",Capital_letter);
   printf("Number of Small letter is=%d\n",Small_letter);
   printf("Number of Special is=%d\n",special_character);

   return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
char str[100];
int i;
int space=0;
    printf("Enter a string\n");
    gets(str);
    i=0;
    while(i<=str[i]){
 if(str[i]==' '){
        space++;
    }
    i++;
}
space=space+1;
printf("Total white space :%d ",space);
getch();
    return 0;
}
*/


/*
07:No Problem Slove
#include<stdio.h>
int main()
{
    int T,i,j,count=1;
    printf("Enter the value of T: ");
    scanf("%d",&T);

    //user input single character
    getchar();
    for(j=1;j<=T;j++)
    {
        char str[100005];
        printf("Enter the string: ");
        gets(str);
        int len=strlen(str);
        for(i=0;i<len;i++)
           {
                if(str[i]==' ' && str[i+1]!=' ')
        {
            count++;
        }
           }
             printf("%d\n",count);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int T,i,j,k,count=0;
    char first_line[100];
    char second_line[2];
    printf("Enter the value of T: ");
    scanf("%d",&T);
    getchar();
    for(i=1;i<=T;i++)
    {
        gets(first_line);
        gets(second_line);
        for(j=0;j<strlen(first_line);j++)
        {
            if(first_line[j] == second_line[0])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Occurence '%c' is present in '%s' = %d\n",second_line[0],first_line,count);
        }
        else
        {
            printf("'%c' is not present",second_line[0]);
        }
    }
    return 0;
}







