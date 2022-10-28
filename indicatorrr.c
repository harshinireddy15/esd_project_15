
#include<reg51.h>
sbit buzz= P2^0; 
sbit full=P1^0;
sbit threefourth=P1^1;
sbit half=P1^2;
sbit quarter=P1^3;
sbit fullb=P2^1;
sbit threefourthb=P2^2;
sbit halfb=P2^3;
sbit quarterb=P2^4;
void main()
{
  P1=0x00;
  P2=0x00;
  buzz=1;
while(1)
{
if(full==1 && threefourth==1&&half==1&&quarter==1)
{
  fullb=1;
  buzz=1;

}
else if(threefourth==1&&half==1&&quarter==1&&full==0)
{
  threefourthb=1;
  buzz=1;
}
else if(half==1&&quarter==1&&full==0&&threefourth==0)
{
  halfb=1;
  buzz=1;
}
else if(quarter==1&&threefourth==0&&half==0&&full==0)
{
  quarterb=1;
  buzz=0;
}
}
}