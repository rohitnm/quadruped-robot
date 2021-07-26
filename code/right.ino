void right()
{
  while(rr==0)
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
        s4.write(125+(2.75*u));
        s8.write(130+(2.5*u));
      }
      s4.write(180);
      s8.write(180);
      for(u=0; u<=20; u++)
      {
        delay(40);
        s1.write(140-(2*u));  //100
        s2.write(55+(2.75*u));  //120
        s3.write(55+(1.75*u));
        s4.write(180-(3*u));
        s5.write(95-(1.75*u));  //100  //95
        s6.write(50+(2.5*u));    //0
        s7.write(55+(1.75*u));
        s8.write(180-(3*u));
        if(u>10)
        {
          s4.write(85);
          s8.write(70);
        }
      }
      s1.write(100);
      s2.write(110);
      s3.write(90);
      s4.write(85);
      s5.write(60);
      s6.write(100);
      s7.write(90);
      s8.write(70);
      delay(1000);
      for(u=0; u<=20; u++)
      {
        delay(20);
        s2.write(110+(3.5*u));
        s6.write(100+(4*u));
      }
      s2.write(180);
      s6.write(180);
      for(u=0; u<=20; u++)
      {
        delay(40);
        s1.write(100+(2*u));
        s2.write(180-(3*u));
        s3.write(90-(1.75*u));
        s4.write(85+(2*u));
        s5.write(60+(1.75*u));
        s6.write(180-(3.5*u));
        s7.write(90-(1.75*u));
        s8.write(70+(3*u));  
        if(u>10)
        {
          s2.write(55);
          s6.write(50);
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
  rr=1;
  khada();
  t=0;
}
}
