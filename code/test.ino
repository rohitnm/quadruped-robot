void test()
{
  if(Serial.available()>0)
  {
    g=Serial.read();
    if(g=='K')
    {
      khada();
    }
    else if(g=='1')
    {
      newinitial();
    }
    else if(g=='2')
    {
      leftint();
    }
    else if(g=='3')
    {
      w=0;
      forwardf1();
    }
    else if(g=='4')
    {
      revinitial();
    }
    else if(g=='q')
    {
      ss1+=5;
      s1.write(ss1);
      Serial.print("Servo 1");
      Serial.print("\t");
      Serial.println(ss1);
    }
    else if(g=='w')
    {
      ss1-=5;
      s1.write(ss1);
      Serial.print("Servo 1");
      Serial.print("\t");
      Serial.println(ss1);
    }
    else if(g=='e')
    {
      ss2+=5;
      s2.write(ss2);
      Serial.print("Servo 2");
      Serial.print("\t");
      Serial.println(ss2);
    }
    else if(g=='r')
    {
      ss2-=5;
      s2.write(ss2);
      Serial.print("Servo 2");
      Serial.print("\t");
      Serial.println(ss2);
    }
    else if(g=='t')
    {
      ss3+=5;
      s3.write(ss3);
      Serial.print("Servo 3");
      Serial.print("\t");
      Serial.println(ss3);
    }
    else if(g=='y')
    {
      ss3-=5;
      s3.write(ss3);
      Serial.print("Servo 3");
      Serial.print("\t");
      Serial.println(ss3);
    }
    else if(g=='u')
    {
      ss4+=5;
      s4.write(ss4);
      Serial.print("Servo 4");
      Serial.print("\t");
      Serial.println(ss4);
    }
    else if(g=='i')
    {
      ss4-=5;
      s4.write(ss4);
      Serial.print("Servo 4");
      Serial.print("\t");
      Serial.println(ss4);
    }
    else if(g=='o')
    {
      ss5+=5;
      s5.write(ss5);
      Serial.print("Servo 5");
      Serial.print("\t");
      Serial.println(ss5);
    }
    else if(g=='p')
    {
      ss5-=5;
      s5.write(ss5);
      Serial.print("Servo 5");
      Serial.print("\t");
      Serial.println(ss5);
    }
    else if(g=='a')
    {
      ss6+=5;
      s6.write(ss6);
      Serial.print("Servo 6");
      Serial.print("\t");
      Serial.println(ss6);
    }
    else if(g=='s')
    {
      ss6-=5;
      s6.write(ss6);
      Serial.print("Servo 6");
      Serial.print("\t");
      Serial.println(ss6);
    }
    else if(g=='d')
    {
      ss7+=5;
      s7.write(ss7);
      Serial.print("Servo 7");
      Serial.print("\t");
      Serial.println(ss7);
    }
    else if(g=='f')
    {
      ss7-=5;
      s7.write(ss7);
      Serial.print("Servo 7");
      Serial.print("\t");
      Serial.println(ss7);
    }
    else if(g=='g')
    {
      ss8+=5;
      s8.write(ss8);
      Serial.print("Servo 8");
      Serial.print("\t");
      Serial.println(ss8);
    }
    else if(g=='h')
    {
      ss8-=5;
      s8.write(ss8);
      Serial.print("Servo 8");
      Serial.print("\t");
      Serial.println(ss8);
    }
  }
}
