#include<stdio.h>
#include <math.h>
//function prototype
int prime(int nth);
//function main begins program execution
void main()
{
    int n; //input value
    int terminate=1; //termination value of program
    int sum; //sum of input value and prime number
    int p; //variable to hold prime number
    //loop until terminate value change to 0
    while(terminate!=0){
        puts("Enter Room Number:");
        scanf("%d",&n); //read value
        //if n is equal to 0 then terminate the program
        if(n==0){
            terminate=0;
            break;
            } //end if
        //if n is greater then 100,display
        else if(n>100){
            puts("Room does not exits.\n"); //output
            } //end if
       //if n is equal or less then 100,display p,sum
        else if(n<=100){
            //find nth prime number
            p=prime(n);
            sum=p+n; //sum of n value and prime number
            printf("Unlock: %d\tLock: %d\n\n",p,sum); //output
            } //end if
        } //end while
} //end main function

//function to find nth prime number
int prime(int nth)
{
    int number_of_primes=0; //counter for number of prime
    int prm=1; //variable of nth prime number
    int a; //counter of loop
    int isPrime=1; //condition of if it is a prime number
    //while nth number is less then input value
    do
    { prm++; //increment of nth prime number

    isPrime= 1; //make value to 1
    //loop until nth prime number
    for(a=2;a<prm;a++)
    {
    //if nth prime number divisible by counter,change value of isPrime
    if (prm%a==0)
    {
    isPrime= 0;
    break;
    } //end if
    } //end loop
    //if value of isPrime equal to 1
    if(isPrime== 1)
    number_of_primes++; //increment of number of prime
   } //end if
   while(number_of_primes < nth); //end while
   return prm; //return nth prime number
} //end function of find nth prime number
