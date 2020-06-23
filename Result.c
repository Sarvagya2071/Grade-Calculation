#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int xyz[6], i;  float sum=0;
  cout<<"Enter specific number";
  for(i=0; i<6; i++)
  {
  cin>>xyz[i];
  sum=sum+xyz[i];
  }
  float avg=sum/6;
  float per;
  per=(sum/600)*100;
  cout<<"Average number = "<<avg;
  cout<<"\specific avg.  = "<<per<<"%";
  getch();
}
