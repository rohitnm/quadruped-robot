void forwardf()
{
    while(w==0)
    {
        for(i=0; i<=6; i++)
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
    /*w=1; 
    leftint();
    delay(1000);
    l=0;*/
    }
}
