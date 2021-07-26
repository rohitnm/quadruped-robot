void forwardf1()
{
    while(w==0)
    {
      
        for(i=0; i<=6; i++)
        {
          /*sensorAcc.measure();
      Serial.print(sensorAcc.accelX);
      Serial.print('\t');
      Serial.print(sensorAcc.accelY);
      Serial.print('\t');
      Serial.println(sensorAcc.accelZ);
      delay(10);*/
        s1.write(110);  //100
        s2.write(110);  //120
        s3.write(65);
        s4.write(130);
        s5.write(95);  //100  //95
        s6.write(70);    //0
        s7.write(90);
        s8.write(70);
      delay(1000);
      for(u=0; u<=20; u++)
      {
        delay(10);
        s4.write(130+(2.5*u));
        s8.write(70-(3.5*u));
      }
      s4.write(180);
      s8.write(0);
      for(u=0; u<=20; u++)
      {
        delay(20+u);
      s1.write(110+(1.5*u));  //100
      s2.write(110-(2.25*u));  //120
      s3.write(65+(0.75*u));
      s4.write(180-(3*u));
      s5.write(95-(1.75*u));  //100  //95
      s6.write(70+(2*u));    //0
      s7.write(90-(1.75*u));
      s8.write(0+(3*u));
      if(u>5)
      {
        s4.write(75);
        s8.write(120);
      }
      }
      s1.write(140);  //100
      s2.write(65);  //120
      s3.write(80);
      s4.write(75);
      s5.write(60);  //100  //95
      s6.write(110);    //0
      s7.write(55);
      s8.write(120);
      delay(1000);
      for(u=0; u<=20; u++)
      {
        delay(10);
        s6.write(110+(3.5*u));
        s2.write(65-(3.25*u));
      }
      s6.write(180);
      s2.write(0);
      for(u=0; u<=20; u++)
      {
        delay(20+u);
        s1.write(140-(1.5*u));  //100
        s2.write(0+(3*u));  //120
        s3.write(80-(0.75*u));
        s4.write(75+(2.75*u));
        s5.write(60+(1.75*u));  //100  //95
        s6.write(180-(3*u));    //0
        s7.write(55+(1.75*u));
        s8.write(120-(2.5*u));
        if(u>5)
        {
          s2.write(110);
          s6.write(70);
        }
      }
      s1.write(110);  //100
      s2.write(110);  //120
      s3.write(65);
      s4.write(130);
      s5.write(95);  //100  //95
      s6.write(70);    //0
      s7.write(90);
      s8.write(70);
    }
    /*w=1; 
    leftint();
    delay(1000);
    l=0;*/
    }
}
