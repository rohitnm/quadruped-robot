void left()
{
  while(l==0)
  {
      for(i=0; i<=1; i++)
      {
      s1.write(140);  //100
      s2.write(55);  //120
      s3.write(55);
      s4.write(125);
      s5.write(95);  //100  //95
      s6.write(50);    //0
      s7.write(55);
      s8.write(130);
      delay(1000);
    for(u=0; u<=20; u++)
    {
      delay(20);
      s2.write(55-(2.75*u));
      s6.write(50-(2.5*u));
    }
    s2.write(0);
    s6.write(0);
    for(u=0; u<=20; u++)
    {
      delay(40);
      s1.write(140-(2*u));
      s2.write(0+(2.75*u));
      s3.write(55+(1.75*u));
      s4.write(125-(3*u));
      s5.write(95-(1.75*u));
      s6.write(0+(2.5*u));
      s7.write(55+(1.75*u));
      s8.write(130-(3*u));
      if(u>10)
      {
        s2.write(110);
        s6.write(100);
      }
    }
      s1.write(100);
      s2.write(110);
      s3.write(90);
      s4.write(65);
      s5.write(60);
      s6.write(100);
      s7.write(90);
      s8.write(70);
      delay(1000);
    for(u=0; u<=20; u++)
    {
      delay(20);
      s4.write(65-(3.25*u));
      s8.write(70-(3.5*u));
    }
    s4.write(0);
    s8.write(0);
    for(u=0; u<=20; u++)
    {
      delay(40);
      s1.write(100+(2*u));
      s2.write(110-(2.75*u));
      s3.write(90-(1.75*u));
      s4.write(0+(3*u));
      s5.write(60+(1.75*u));
      s6.write(100-(2.5*u));
      s7.write(90-(1.75*u));
      s8.write(0+(3*u));
      if(u>10)
      {
        s4.write(125);
        s8.write(130);
      }
    }
      s1.write(140);  //100
      s2.write(55);  //120
      s3.write(55);
      s4.write(125);
      s5.write(95);  //100  //95
      s6.write(50);    //0
      s7.write(55);
      s8.write(130);
    }
     l=1;
     b=0;
  }
}
