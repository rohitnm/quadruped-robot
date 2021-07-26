void tussock()
{
  while(t==0)
  {
    for(r=0; r<=1; r++)
    {
      s1.write(120);  
      s2.write(75);  
      s3.write(75);
      s4.write(90);
      s5.write(80);  
      s6.write(65);    
      s7.write(75);
      s8.write(85);
      //delay(1000);
      for(u=0; u<=20; u++)
      {
        delay(40);
        s4.write(90-(4.5*u));
        s8.write(85-(4.25*u));
      }
      s4.write(0);
      s8.write(0);
      delay(1000);
      for(u=0; u<20; u++)
      {
        delay(30);
        s3.write(75+(3.75*u));
        s7.write(75-u);
      }
      s3.write(150);
      s7.write(55);
      for(u=0; u<=20; u++)
      {
        delay(40);
        s4.write(0+(3.25*u));
        s8.write(0-(5.75*u));
      }
      s4.write(65);
      s8.write(115);
      for(u=0; u<=20; u++)
      {
        delay(60);
        
        s1.write(120+(1.5*u));
        s2.write(75-(2*u));
        s5.write(80-(0.5*u));
        s6.write(65+(2*u));
      }
      s1.write(155);
      s2.write(35);
      s5.write(70);
      s6.write(105);
      for(u=0; u<=20; u++)
      {
        delay(60);
        s3.write(150-(3.75*u));
        s7.write(55+u);
      }
      s3.write(75);
      s7.write(75);
      for(u=0; u<=20; u++)
      {
        delay(60);
        s4.write(65+(1.25*u));
        s8.write(115-(0.75*u));
      }
      s4.write(90);
      s8.write(100);
      for(u=0; u<=20; u++)
      {
        delay(40);
        s2.write(35+(7.25*u));
      }
      s2.write(180);
      for(u=0; u<=20; u++)
      {
        delay(40);
        s1.write(155-(5.25*u));
      }
      s1.write(50);
      for(u=0; u<=20; u++)
      {
        delay(40);
        s2.write(180-(5*u));
      }
      s2.write(80);
      for(u=0; u<=20; u++)
      {
        delay(40);
        s1.write(50+(3.5*u));
      }
      s1.write(120);
      delay(1000);
      for(i=0; i<=2; i++)
      {
        s1.write(100);  //100
        s2.write(120);  //120
        s3.write(55);
        s4.write(135);
        s5.write(95);  //100  //95
        s6.write(50);    //0
        s7.write(90);
        s8.write(70);
      delay(2000);
      for(u=0; u<=20; u++)
      {
        delay(20);
        s4.write(135+(2.25*u));
        s8.write(70-(3.5*u));
      }
      s4.write(180);
      s8.write(0);
      for(u=0; u<=20; u++)
      {
        delay(30);
      s1.write(100+(2*u));  //100
      s2.write(120-(2.75*u));  //120
      s3.write(55+(1.75*u));
      s4.write(180-(3*u));
      s5.write(95-(1.75*u));  //100  //95
      s6.write(50+(3*u));    //0
      s7.write(90-(1.75*u));
      s8.write(0+(3*u));
      if(u>5)
      {
        s4.write(65);
        s8.write(120);
      }
      }
      s1.write(140);  //100
      s2.write(65);  //120
      s3.write(90);
      s4.write(65);
      s5.write(60);  //100  //95
      s6.write(110);    //0
      s7.write(55);
      s8.write(120);
      delay(1000);
      for(u=0; u<=20; u++)
      {
        delay(20);
        s6.write(110+(3.5*u));
        s2.write(65-(3.25*u));
      }
      s6.write(180);
      s2.write(0);
      for(u=0; u<=20; u++)
      {
        delay(30);
        s1.write(140-(2*u));  //100
        s2.write(0+(3*u));  //120
        s3.write(90-(1.75*u));
        s4.write(65+(3.5*u));
        s5.write(60+(1.5*u));  //100  //95
        s6.write(180-(3*u));    //0
        s7.write(55+(1.75*u));
        s8.write(120-(2.5*u));
        if(u>5)
        {
          s2.write(120);
          s6.write(50);
        }
      }
      s1.write(100);  //100
      s2.write(120);  //120
      s3.write(55);
      s4.write(135);
      s5.write(95);  //100  //95
      s6.write(50);    //0
      s7.write(90);
      s8.write(70);
      }   
      delay(1000);
      s1.write(100);  
      s2.write(120);  
      s3.write(90);
      s4.write(75);
      s5.write(90);  
      s6.write(65);    
      s7.write(75);
      s8.write(85);
      delay(1000);
      for(u=0; u<=20; u++)
      {
        delay(20);
        s7.write(75+(2.5*u));
      }
      s7.write(125);
      for(u=0; u<=20; u++)
      {
        delay(20);
        s8.write(85-(4.25*u));
      }
      s8.write(0);
      for(u=0; u<=20; u++)
      {
        delay(40);
        s5.write(90-(1.5*u));
        s6.write(65+(2.25*u));
        s7.write(125-(3.5*u));
      }
      s5.write(60);  //100  //95
      s6.write(110);    //0
      s7.write(55);
      s8.write(120);
      delay(1000);
        s1.write(100);  //100
        s2.write(120);  //120
        s3.write(90);
        s4.write(65);
        s7.write(90);
        s8.write(70);
      delay(1000);
      for(u=0; u<=20; u++)
      {
        delay(20);
        s5.write(60-(2.25*u));
      }
      s5.write(15);
      for(u=0; u<=20; u++)
      {
        delay(20);
        s6.write(110+(3.5*u));
      }
      s6.write(180);
      for(u=0; u<20; u++)
      {
        delay(40);
        s5.write(15+(4*u));
        s6.write(180-(2*u));
      }
      s1.write(100);  //100
      s2.write(120);  //120
      s3.write(55);
      s4.write(135);
      s5.write(95);  //100  //95
      s6.write(50);    //0
      s7.write(90);
      s8.write(70);
      for(i=0; i<=4; i++)
      {
        s1.write(100);  //100
        s2.write(120);  //120
        s3.write(55);
        s4.write(135);
        s5.write(95);  //100  //95
        s6.write(50);    //0
        s7.write(90);
        s8.write(70);
      delay(2000);
      for(u=0; u<=20; u++)
      {
        delay(20);
        s4.write(135+(2.25*u));
        s8.write(70-(3.5*u));
      }
      s4.write(180);
      s8.write(0);
      for(u=0; u<=20; u++)
      {
        delay(30);
      s1.write(100+(2*u));  //100
      s2.write(120-(2.75*u));  //120
      s3.write(55+(1.75*u));
      s4.write(180-(3*u));
      s5.write(95-(1.75*u));  //100  //95
      s6.write(50+(3*u));    //0
      s7.write(90-(1.75*u));
      s8.write(0+(3*u));
      if(u>5)
      {
        s4.write(65);
        s8.write(120);
      }
      }
      s1.write(140);  //100
      s2.write(65);  //120
      s3.write(90);
      s4.write(65);
      s5.write(60);  //100  //95
      s6.write(110);    //0
      s7.write(55);
      s8.write(120);
      delay(1000);
      for(u=0; u<=20; u++)
      {
        delay(20);
        s6.write(110+(3.5*u));
        s2.write(65-(3.25*u));
      }
      s6.write(180);
      s2.write(0);
      for(u=0; u<=20; u++)
      {
        delay(30);
        s1.write(140-(2*u));  //100
        s2.write(0+(3*u));  //120
        s3.write(90-(1.75*u));
        s4.write(65+(3.5*u));
        s5.write(60+(1.5*u));  //100  //95
        s6.write(180-(3*u));    //0
        s7.write(55+(1.75*u));
        s8.write(120-(2.5*u));
        if(u>5)
        {
          s2.write(120);
          s6.write(50);
        }
      }
      s1.write(100);  //100
      s2.write(120);  //120
      s3.write(55);
      s4.write(135);
      s5.write(95);  //100  //95
      s6.write(50);    //0
      s7.write(90);
      s8.write(70);
      }
  }
  t=1;
  }
}

