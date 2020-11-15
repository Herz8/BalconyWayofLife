// RTC_functions

RTC_DS1307 rtc;
char TimeStamp[20]; // char*
// char* Weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

String GetTimeStamp() {
  DateTime now = rtc.now();
  sprintf(TimeStamp,"%4d-%02d-%02d %02d:%02d:%02d", now.year(), now.month(), now.day(), now.hour(), now.minute(), now.second());
  return TimeStamp;
}

void Activate_RTC() { 
  // RTC Online?
  if (! rtc.begin()) {
    Serial.print("RTC offline! ");
    while (1);
  }
  else {
    Serial.print("RTC online! ");
  }
  
  if (!rtc.isrunning()) {
    Serial.println(" RTC lost power, lets set the time!");
	
	  // Comment out below lines once you set the date & time.
    // Set time to time this sketch was compiled
         rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // Set specific Time e.g. 24.10.2020 12:56:00
      // rtc.adjust(DateTime(2020, 10, 24, 12, 56, 0));
  }
  else {
    Serial.print("Time of RTC set to ");
    Serial.println(GetTimeStamp());
  }  
}