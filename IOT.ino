String data;
int led1=A0,led2=A1,led3=A2,led4=A3,led5=A4,led6=A5;//,led7,led8,led9,led10,led11,led12,led13,led14,led15,led16,led17,led18;
int check=0;
const int Mangled[12]={2,3,4,5,6,7,8,9,10,11,12,13};


void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  for(int i=0;i<12;i++){
    pinMode(Mangled[i], OUTPUT);
  }
  
}
bool iequals(const String& a, const String& b)
{
    unsigned int sz = a.length();
    if (b.length() != sz)
        return false;
    for (unsigned int i = 0; i < sz; ++i)
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    return true;
}

#include<string.h>
void loop() {
  while (Serial.available()){  //Kiểm tra byte để đọc
  delay(30); //Delay để ổn định hơn 
  char c = Serial.read(); // tiến hành đọc
  if (c == '#') {break;} //Thoát khỏi vòng lặp khi phát hiện từ #
  
  data += c; // data = data + c
  
  } 
  if (data.length() > 0 || check==1 || check==2) {
    Serial.println(data);
    //////////////////////////////////////////////////////
     if( data == "tắt đèn 1" ||data == "Tắt Đèn 1")
    {digitalWrite(led1, HIGH);
    check=0;}
    else if(data == "bật đèn 1"  ||data == "Bật Đèn 1") 
    {digitalWrite(led1, LOW);
    check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 2" ||data == "Tắt Đèn 2")
    {digitalWrite(led2, HIGH);check=0;}
    else if(data == "bật đèn 2"  ||data == "Bật Đèn 2") 
    {digitalWrite(led2, LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 3" ||data == "Tắt Đèn 3")
    {digitalWrite(led3, HIGH);check=0;}
    else if(data == "bật đèn 3"  ||data == "Bật Đèn 3") 
    {digitalWrite(led3, LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 4" ||data == "Tắt Đèn 4")
    {digitalWrite(led4, HIGH);check=0;}
    else if(data == "bật đèn 4"  ||data == "Bật Đèn 4") 
    {digitalWrite(led4, LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "Tắt đèn 5" ||data == "Tắt Đèn 5"||data == "tắt đèn năm")
    {digitalWrite(led5, HIGH);check=0;}
    else if(data == "bật đèn 5" ||data == "Bật đèn 5" ||data == "Bật Đèn 5")
    {digitalWrite(led5, LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 6" ||data == "Tắt Đèn 6")
    {digitalWrite(led6, HIGH);check=0;}
    else if(data == "bật đèn 6"  ||data == "Bật Đèn 6") 
    {digitalWrite(led6, LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 7"  ||data == "Tắt Đèn 7")
    {digitalWrite(Mangled[0], HIGH);check=0;}
    else if(data == "bật đèn 7" ||data == "Bật Đèn 7") 
    {digitalWrite(Mangled[0], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 8"  ||data == "Tắt Đèn 8")
    {digitalWrite(Mangled[1], HIGH);check=0;}
    else if(data == "bật đèn 8"  ||data == "Bật Đèn 8") 
    {digitalWrite(Mangled[1], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 9" ||data == "Tắt Đèn 9")
    {digitalWrite(Mangled[2], HIGH);check=0;}
    else if(data == "bật đèn 9"  ||data == "Bật Đèn 9") 
    {digitalWrite(Mangled[2], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 10"||data == "Tắt Đèn 10")
    {digitalWrite(Mangled[3], HIGH);check=0;}
    else if(data == "bật đèn 10"  ||data == "Bật Đèn 10") 
    {digitalWrite(Mangled[3], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 11" ||data == "Tắt Đèn 11")
    {digitalWrite(Mangled[4], HIGH);check=0;}
    else if(data == "bật đèn 11"  ||data == "Bật Đèn 11") 
    {digitalWrite(Mangled[4], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 12" ||data == "Tắt Đèn 12")
    {digitalWrite(Mangled[5], HIGH);check=0;}
    else if(data == "bật đèn 12"  ||data == "Bật Đèn 12") 
    {digitalWrite(Mangled[5], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 13"  ||data == "Tắt Đèn 13")
    {digitalWrite(Mangled[6], HIGH);check=0;}
    else if(data == "bật đèn 13"  ||data == "Bật Đèn 13") 
    {digitalWrite(Mangled[6], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 14"  ||data == "Tắt Đèn 14")
    {digitalWrite(Mangled[7], HIGH);check=0;}
    else if(data == "bật đèn 14" ||data == "Bật Đèn 14") 
    {digitalWrite(Mangled[7], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 15"  ||data == "Tắt Đèn 15")
    {digitalWrite(Mangled[8], HIGH);check=0;}
    else if(data == "bật đèn 15"  ||data == "Bật Đèn 15") 
    {digitalWrite(Mangled[8], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 16"  ||data == "Tắt Đèn 16")
    {digitalWrite(Mangled[9], HIGH);check=0;}
    else if(data == "bật đèn 16"  ||data == "Bật Đèn 16") 
    {digitalWrite(Mangled[9], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 17"  ||data == "Tắt Đèn 17")
    {digitalWrite(Mangled[10], HIGH);check=0;}
    else if(data == "bật đèn 17"  ||data == "Bật Đèn 17") 
    {digitalWrite(Mangled[10], LOW);check=0;}

    //////////////////////////////////////////////////////
    else if(data == "tắt đèn 18"  ||data == "Tắt Đèn 18")
    {digitalWrite(Mangled[11], HIGH);check=0;}
    else if(data == "bật đèn 18" ||data == "Bật Đèn 18") 
    {digitalWrite(Mangled[11], LOW);check=0;}
    
    //////////////////////////////////////////
    else if(data == "bật tất cả" ||data == "Bật tất cả") 
    {digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    for(int i=0;i<12;i++){
      digitalWrite(Mangled[i], LOW);
    }
    check=0;
    }
    else if(data == "tắt tất cả" ||data == "Tắt tất cả") 
    {digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
      for(int i=0;i<12;i++){
      digitalWrite(Mangled[i], HIGH);
    }
    check=0;
    }else if(data == "bật tắt liên tục" || check==1){
      for(int i=0;i<18;i++){
        digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    for(int i=0;i<12;i++){
      digitalWrite(Mangled[i], LOW);
    }
    }
    delay(1000);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
      for(int i=0;i<12;i++){
      digitalWrite(Mangled[i], HIGH);
    }
    delay(1000);
    check=1;
      }else if(data == "bật tắt dần đều" || check==2){
     
        digitalWrite(led1, LOW);
        delay(100);
    digitalWrite(led2, LOW);
    delay(100);
    digitalWrite(led3, LOW);
    delay(100);
    digitalWrite(led4, LOW);
    delay(100);
    digitalWrite(led5, LOW);
    delay(100);
    digitalWrite(led6, LOW);
    delay(100);
    for(int i=0;i<12;i++){
      digitalWrite(Mangled[i], LOW);
      delay(100);
    }
    
    delay(1000);
   
    for(int i=11;i>=0;i--){
      digitalWrite(Mangled[i], HIGH);
      delay(100);
    }
    digitalWrite(led6, HIGH);
    delay(100);
    digitalWrite(led5, HIGH);
    delay(100);
    digitalWrite(led4, HIGH);
    delay(100);
    digitalWrite(led3, HIGH);
    delay(100);
    digitalWrite(led2, HIGH);
    delay(100);
    digitalWrite(led1, HIGH);
    delay(100);
    
    delay(1000);
    
      
      check=2;
      }
    
data="";}} //Thiết lập lại các biến
