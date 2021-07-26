void peanuts()
{
while(b==0)
  {
      s1.write(ss1=100); //100
      s2.write(ss2=110); //100
      s3.write(ss3=30);
      s4.write(ss4=115);
      s5.write(ss5=95);    //100  //95
      s6.write(ss6=60);    //0
      s7.write(ss7=100);
      s8.write(ss8=80);
      delay(2000);
      b++;
  }
  delay(2000);
  while(b==1)
  {
    s4.write(ss4=180);
    s8.write(ss8=0);
    delay(800);
    for(u=0; u<=40; u++)
    {
      delay(30);  //15
      s1.write(ss1+u);
      s2.write(ss2-u);
      s3.write(ss3+(1.5)*u);
      s5.write(ss5-u);
      s6.write(ss6+u);
      s7.write(ss7-u);
      if(u>=25)
      {
        s4.write(ss4=50);
        s8.write(ss8=120);
      }
    }
        s1.write(ss1=140);
        s2.write(ss2=60);
        s3.write(ss3=90);
        s5.write(ss5=60);
        s6.write(ss6=105);
        s7.write(ss7=70);
        delay(1000);
        b++;
  }
  while(b==2)
  {
    s1.write(ss1=180);
    delay(800);
    s2.write(ss2=0);
 //   delay(1500);
 //   s1.write(ss1=65);
 //   delay(1000);
 //   s2.write(ss2=135);
    delay(1000);
    for(u=0; u<=40; u++)
        {
          delay(30);   //15
          s1.write(ss1-(3*u));
         // s2.write(ss2+(3*u));
          s3.write(ss3-u);
          s4.write(ss4+(3*u));
          s7.write(ss7+u);
          s8.write(ss8-u);
          if(u>=25)
          {
            s1.write(ss1=65);
            s2.write(ss2=135);
            s3.write(ss3=40);  //10
            s4.write(ss4=140);  //180
            s7.write(ss7=110);
            s8.write(ss8=80);
            s5.write(ss5=95);  
            s6.write(ss6=60);
            delay(1000);
            s8.write(ss8=45);
            delay(2000);
            b++;
            break;
          }
        }
  }
 while(b==3)
 {
   s1.write(ss1=115);  //100
   s2.write(ss2=90);  //110
   delay(1000);
   b++; 
 }
 while(b==4)
 {
    s4.write(ss4=180);
    s3.write(ss3=100);
    delay(700);
    for(u=0; u<=40; u++)
    {
      delay(30);
      s3.write(ss3-u);
      s4.write(ss4-(2*u));
      if(u>=25)
      {
        s4.write(ss4=90);
        s3.write(ss3=60);
        b++;
        break;
      }
    }    
 }
 while(b==5)
 {
    s1.write(ss1=105);  //115
    s2.write(ss2=120);  //120
    s4.write(ss4=90);
    s3.write(ss3=60);
    s5.write(ss5=75);  //85
    s6.write(ss6=90); 
    s7.write(ss7=100);
    s8.write(ss8=65);
    delay(3000);
    b++;
 }
 while(b==6)
 {
   s4.write(ss4=160);
   delay(1000);
   s3.write(ss3=80);
   s4.write(ss4=50);
   delay(1000);
   s7.write(ss7=130);
   delay(700);
   s8.write(ss8=0);
   delay(2000);
   for(u=0; u<=40; u++)
   {
    delay(50);
   s7.write(ss7-(2*u));
   if(u>=35)
   {
     s8.write(ss8=160);
   }
   }
   s7.write(ss7=35);
   s1.write(ss1=80);
   delay(1000);
   s5.write(ss5=30);
   s6.write(ss6=180);
   delay(1000);
   for(u=0; u<=40; u++)
   {
     delay(50);
     s5.write(ss5+(2*u));
     if(u>=35)
     {
       s6.write(ss6=35);
     }
   }
   s5.write(ss5=120);
   s6.write(ss6=35);
   delay(2000);
   for(u=0; u<=15; u++)
   {
     delay(50);
     s7.write(ss7+u);
     s8.write(ss8-(2*u));
   }
   s7.write(ss7=50);
   s8.write(ss8=120);
   b++;
 }
 while(b==7)
 {
    s7.write(ss7=20);
    s3.write(ss3=100);
    delay(1000);
    for(u=0; u<=40; u++)
    {
      delay(50);
      s1.write(ss1+(2.25*u));
      s2.write(ss2-(2*u));
      s6.write(ss6+(2.75*u));
      s5.write(ss5-(2.125*u));
    }
    s1.write(ss1=170);
    s2.write(ss2=35);
    s5.write(ss5=35);  
    s6.write(ss6=145);
    s7.write(ss7=50);
    delay(1000);
    for(u=0; u<=40; u++)
    {
      delay(40);
      s3.write(ss3-(1.5*u));
      s4.write(ss4+(1.625*u));
      s7.write(ss7+(1.25*u));
      s8.write(ss8-(1.25*u));
    }
    s3.write(ss3=40);
    s4.write(ss4=115);
    s7.write(ss7=100);
    s8.write(ss8=70);
    delay(1000);
    s1.write(ss1=105);  //100
    s2.write(ss2=110);  //110
    s5.write(ss5=95);  //100  //95
    s6.write(ss6=50);    //60
    b=8;
    f=0;
 }
}
