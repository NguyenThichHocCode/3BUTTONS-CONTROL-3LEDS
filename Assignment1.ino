int red = 3;
int yel = 4;
int gre = 5;
int button1 = 8;
int button2 = 9;
int button3 = 10;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(button1, OUTPUT);
  pinMode(yel, OUTPUT);
  pinMode(button2, OUTPUT);
  pinMode(gre, OUTPUT);
  pinMode(button3, OUTPUT);
  digitalWrite(red, LOW);
  digitalWrite(yel, LOW);
  digitalWrite(gre, LOW);



}

void loop() {
  int button1Status = digitalRead(button1); // Đọc tráng thái của nút nhấn
  int button2Status = digitalRead(button2);
  int button3Status = digitalRead(button3);


  if (button1Status == 1) // Nếu button bị ấn sẽ trả giá trị bằng 1
  {
    digitalWrite(red, HIGH);
    digitalWrite(yel,LOW);
    digitalWrite(gre,LOW);
   
  }


  else if (button2Status == 1) // Nếu button bị ấn sẽ trả giá trị bằng 1
  {
    digitalWrite(red, HIGH);
    digitalWrite(yel, HIGH);
    digitalWrite(gre,LOW);
    
  }


  else if (button3Status == 1) // Nếu button bị ấn sẽ trả giá trị bằng 1
  {
    digitalWrite(red, HIGH);
    digitalWrite(yel, HIGH);
    digitalWrite(gre, HIGH);
   
  }
  }
