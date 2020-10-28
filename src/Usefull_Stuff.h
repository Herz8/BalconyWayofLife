  
  /*
  // Working Example
  int CurrentYear = now.year();
  int CurrentMonth = now.month();
  int CurrentDay = now.day();
  int CurrentHour = now.hour();
  int CurrentMinute = now.minute();
  int CurrentSecond = now.second();
  char TimeStamp[25];
  sprintf(TimeStamp,"%4d-%02d-%02d %02d:%02d:%02d", CurrentYear, CurrentMonth, CurrentDay, CurrentHour, CurrentMinute, CurrentSecond);
  Serial.println(TimeStamp);

    DateTime now = rtc.now();
  char TimeStamp[10]; // char*
  sprintf(TimeStamp,"%4d-%02d-%02d %02d:%02d:%02d", now.year(), now.month(), now.day(), now.hour(), now.minute(), now.second());
  Serial.println(TimeStamp);
  delay(2000);

  // Timestamp as String:
  String CurrentDate = String(now.year()) + "-" + String(now.month()) + "-" + String(now.day());
  String CurrentTime = String(now.hour()) + ":" + String(now.minute()) + ":" + String(now.second(), DEC);
  String TimeStamp = CurrentDate + " " + CurrentTime;
  Serial.println(TimeStamp);
  */
  
  /*
  // Another Example
  char dateBuffer[12]; 
  char buffer[13];
  int i = 123;
  int d = 45;
  char* delimiter = ",";  // korr
  char* unit = "m/s";
  sprintf(buffer, "%5d%s%02d %3s", i, delimiter, d, unit); // ergibt buffer = "  123,45 m/s"

    for (int i = 0; i < 7; i++) {
    Serial.println(Weekdays[i]);
    delay(500);
    }
  */