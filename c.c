#include<msp430.h>
int main()
{
int n=9876;
P1DIR=1;
while(P1DIR=1)
{
P1OUT=0;
while(n>0)
{
n=n-1;
}
P1OUT=1;
while(n<9876)
{
n=n+1;
}
}
}
