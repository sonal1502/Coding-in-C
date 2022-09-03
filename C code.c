/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
 
int main() 
{int d,m=0,y,t,i=0,d2,m2,y2; 
printf("Enter number of runs to be performed: "); 
scanf("%d",&t); 
printf("************************************\n"); 
 
for(i=1;i<=t;i++) 
{    
         switch(i) 
        {
case 1: printf("First Run:\n");break;        
case 2: printf("Second Run:\n");break;         
case 3: printf("Third Run:\n");break;        
case 4: printf("Fourth Run:\n");break; 
case 5: printf("Fifth Run:\n");break; 
        } 
printf("Enter date in dd/mm/yyyy format: "); 
scanf("%d/%d/%d",&d,&m,&y); 
printf("Entered current date is: %02d/%02d/%d\n",d,m,y); 
d2=d; 
m2=m; 
y2=y;
if(y%4!=0) 
    {        
        if(m==1)                                  //FOR 31ST DEC  
             {if(d==1)                   
             {                   
                 d=31;                   
                 m=12;                  
                 y--;             
                  }            
                  else d--;              
                 
             }     
              
 else if((m==5||m==7||m==8||m==10||m==12))   //FOR MONTHS WITH 30 DAYS 
             {if(d==1)                 
             {                 
                 d=30;                 
                 m--; 
                }                 
           else d--;     
           
             } 
        
         else if(m==3)                       //FOR FEBRUARY(NON-LEAPYR) 
             {if(d==1)                 
             {                 
                 d=28;                 
                 m--;                 
                 
             } 
          else d--; 
         
             } 
         else if(m==2||m==4||m==6||m==9||m==11) //FOR MONTHS WITH 31 DAYS       
             {if(d==1)                 
             {                 
                 d=31;                 
                 m--;                 
                 
             }            
             else d--;     
         
              } 
             
          if(d<=1&&d>31)         
              {             
                  d--;          
               } 
         
    } 
else if(y%4==0) 
    {     if(m==1)                             //FOR 31ST DEC  
           {if(d==1)             
           {               
               d=31;             
               m=12;             
               y--;             
               
           }         
           else d--; 
            } 
         
      
else if((m==5||m==7||m==8||m==10||m==12))       //FOR MONTHS WITH 30 DAYS 
            {if(d==1)                 
            {                 
                d=30;                 
                m--;                 
                
            }               
            else d--; 
        
            } 
        
else if(m==3)                                    //FOR FEBRUARY(LEAPYR)             
{ if(d==1) 
            {                
                d=29;                 
                m--;             
                
            }             
            else d--; 
          
      
            } 
else if(m==2||m==4||m==6||m==9||m==11)       //FOR MONTHS WITH 31 DAYS       
           {    
           {if(d==1) 
            {                 
                d=31;                 
                m--;             
                
            }             
            else d--;     
            } 
        
            } 
         
 if(d<1&&d>31)         
            {             
                d--;          
            } 
          
    }printf("Previous (Yesterday's) date is: %02d/%02d/%d\n",d,m,y); 
     
   
    if(y2%4!=0) 
    {         if(m2==12)                             //FOR 1ST JAN 
             {if(d2==31) 
                  {                   
                      d2=1;                   
                      m2=1;                   
                      y2++; 
            
                  } 
            
         
             }     
              
       else if((m2==1||m2==3||m2==5||m2==7||m2==8||m2==10))                //FOR MONTHS WITH 31 DAYS 
             {if(d2==31) 
                {                 
                    d2=1; 
                m2++; 
                }    
             
           else d2++;     
           
             } 
        
         else if(m2==2)                       //FOR FEBRUARY(NON-LEAPYR)             
         {if(d2==28) 
                {                 
                    d2=1; 
                m2++; 
                } 
          else d2++; 
         
             } 
         else if(m2==4||m2==6||m2==9||m2==11)   //FOR MONTHS WITH 30 DAYS       
             {if(d2==30) 
                {                 
                    d2=1;                 
                    m2++;                 
                    
                }            
                else d2++;     
         
              } 
             
          if(d2<=1&&d2>31)         
              {             
                  d2++; 
         
               } 
         
    } 
else if(y2%4==0) 
    {     if(m2==12) 
       {if(d2==31)                                       //FOR 31ST DEC 
     
            {              
                d2=1;             
                m2=1;             
                y2++; 
            } 
            else d2++;} 
             
         
             
         
      
else if((m2==1||m2==3|m2==5||m2==7||m2==8||m2==10))        //FOR MONTHS WITH 31 DAYS 
            {if(d2==31) 
                {                 
                d2=1; 
                m2++; 
                }   
            else d2++; 
        
            } 
        
else if(m2==2)                                    //FOR FEBRUARY(LEAPYR)             
{ if(d2==28) 
            { 
                d2=29; 
            } 
            else if(d2==29) 
           { d2=1; 
            m2++; 
           } 
           else d2++; 
            } 
else if(m2==4||m2==6||m2==9||m2==11)          //FOR MONTHS WITH 30 DAYS       
           {    
           {if(d2==30) 
            {                 
                d2=1;                 
                m2++; 
            }             
            else d2++;     
            } 
        if(d2<=1&&d2>31)         
              { 
            d2++; 
         
               } 
         
            } 
 
         
             
          
    }    printf("Tomorrow's date is: %02d/%02d/%d\n\n",d2,m2,y2); 
     
     
} return 0; } 
 

