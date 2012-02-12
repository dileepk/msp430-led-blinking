#include<msp430.h>
#include<stdint.h>
main()
{
uint16_t lfsr=0XACE1;
P1DIR=1;
TACTL=0X0220;
while(1)
{
while((TACTL&1)==0);
lfsr=(lfsr>>1)^(-(lfsr&1)&0xb400);
P1OUT=lfsr;
TACTL&=(~1);
}
}
