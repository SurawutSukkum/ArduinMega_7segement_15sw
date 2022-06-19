int piority1 = 0;
int piority2 = 0;
int show_number_1 = 0;
int show_number_2 = 0;
int time_cnt=0;
// Input arduino mega 2560 start pin 2 - 16
int sw1 = 2;
int sw2 = 3;
int sw3 = 4;
int sw4 = 5;
int sw5 = 6;
int sw6 = 7;
int sw7 = 8;
int sw8 = 9;
int sw9 = 10;
int sw10 = 11;
int sw11 = 12;
int sw12 = 13;
int sw13 = 14;
int sw14 = 15;
int sw15 = 16;

//output segment 1 start pin 17-23
int segment_1_a = 17;
int segment_1_b = 18;
int segment_1_c = 19;
int segment_1_d = 20;
int segment_1_e = 21; 
int segment_1_f = 22;
int segment_1_g = 23;

//output segment 2 start pin 24-30
int segment_2_a = 24;
int segment_2_b = 25;
int segment_2_c = 26;
int segment_2_d = 27;
int segment_2_e = 28; 
int segment_2_f = 29;
int segment_2_g = 30;


void display_segment(int number)
{


  if( number == 0)
  { 
    Serial.println("Number="+String(number));
    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
   //output segment 2 show 0
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,HIGH); 
   digitalWrite(segment_2_f,HIGH); 
   digitalWrite(segment_2_g,LOW);
  }
   
 if( number == 1)
  { 
    Serial.println("Number="+String(number));

    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 1
   digitalWrite(segment_2_a,LOW); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,LOW); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,LOW); 
   digitalWrite(segment_2_g,LOW);
  }

 if( number == 2)
  { 
   Serial.println("Number="+String(number));
    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 2
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,LOW); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,HIGH); 
   digitalWrite(segment_2_f,LOW); 
   digitalWrite(segment_2_g,HIGH);
  }  

  if( number == 3)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 3
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,LOW); 
   digitalWrite(segment_2_g,HIGH);
  } 

    if( number == 4)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 4
   digitalWrite(segment_2_a,LOW); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,LOW); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,HIGH); 
   digitalWrite(segment_2_g,HIGH);
  } 

  if( number == 5)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 5
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,LOW); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,HIGH); 
   digitalWrite(segment_2_g,HIGH);
  } 

  if( number == 6)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 6
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,LOW); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,HIGH); 
   digitalWrite(segment_2_f,HIGH); 
   digitalWrite(segment_2_g,HIGH);
  } 
  
  if( number == 7)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 7
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,LOW); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,LOW); 
   digitalWrite(segment_2_g,LOW);
  } 
  
  if( number == 8)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 8
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,HIGH); 
   digitalWrite(segment_2_f,HIGH); 
   digitalWrite(segment_2_g,HIGH);
  } 

  if( number == 9)
  {
   Serial.println("Number="+String(number));  
    //output segment 1 show 0
   digitalWrite(segment_1_a,HIGH); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,HIGH); 
   digitalWrite(segment_1_e,HIGH); 
   digitalWrite(segment_1_f,HIGH); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 9
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,HIGH); 
   digitalWrite(segment_2_g,HIGH);
  }
  
  if( number == 10)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 1
   digitalWrite(segment_1_a,LOW); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,LOW); 
   digitalWrite(segment_1_e,LOW); 
   digitalWrite(segment_1_f,LOW); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 0
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,HIGH); 
   digitalWrite(segment_2_f,HIGH); 
   digitalWrite(segment_2_g,LOW);
  }
  
  if( number == 11)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 1
   digitalWrite(segment_1_a,LOW); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,LOW); 
   digitalWrite(segment_1_e,LOW); 
   digitalWrite(segment_1_f,LOW); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 1
   digitalWrite(segment_2_a,LOW); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,LOW); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,LOW); 
   digitalWrite(segment_2_g,LOW);
  }
  
   if( number == 12)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 1
   digitalWrite(segment_1_a,LOW); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,LOW); 
   digitalWrite(segment_1_e,LOW); 
   digitalWrite(segment_1_f,LOW); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 2
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,LOW); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,HIGH); 
   digitalWrite(segment_2_f,LOW); 
   digitalWrite(segment_2_g,HIGH);
  } 
  
 if( number == 13)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 1
   digitalWrite(segment_1_a,LOW); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,LOW); 
   digitalWrite(segment_1_e,LOW); 
   digitalWrite(segment_1_f,LOW); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 3
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,LOW); 
   digitalWrite(segment_2_g,HIGH);
  } 
  
   if( number == 14)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 1
   digitalWrite(segment_1_a,LOW); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,LOW); 
   digitalWrite(segment_1_e,LOW); 
   digitalWrite(segment_1_f,LOW); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 4
   digitalWrite(segment_2_a,LOW); 
   digitalWrite(segment_2_b,HIGH); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,LOW); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,HIGH); 
   digitalWrite(segment_2_g,HIGH);
  } 

     if( number == 15)
  { 
   Serial.println("Number="+String(number)); 
    //output segment 1 show 1
   digitalWrite(segment_1_a,LOW); 
   digitalWrite(segment_1_b,HIGH); 
   digitalWrite(segment_1_c,HIGH); 
   digitalWrite(segment_1_d,LOW); 
   digitalWrite(segment_1_e,LOW); 
   digitalWrite(segment_1_f,LOW); 
   digitalWrite(segment_1_g,LOW); 
  
   //output segment 2 show 5
   digitalWrite(segment_2_a,HIGH); 
   digitalWrite(segment_2_b,LOW); 
   digitalWrite(segment_2_c,HIGH); 
   digitalWrite(segment_2_d,HIGH); 
   digitalWrite(segment_2_e,LOW); 
   digitalWrite(segment_2_f,HIGH); 
   digitalWrite(segment_2_g,HIGH);
  } 
}
void setup() {
// Input arduino mega 2560 start pin 2 - 16
 Serial.begin(9600);
 pinMode(sw1,INPUT); 
 pinMode(sw2,INPUT); 
 pinMode(sw3,INPUT); 
 pinMode(sw4,INPUT); 
 pinMode(sw5,INPUT); 
 pinMode(sw6,INPUT); 
 pinMode(sw7,INPUT); 
 pinMode(sw8,INPUT); 
 pinMode(sw9,INPUT); 
 pinMode(sw10,INPUT); 
 pinMode(sw11,INPUT);      
 pinMode(sw12,INPUT); 
 pinMode(sw13,INPUT); 
 pinMode(sw14,INPUT);
 pinMode(sw15,INPUT);

//output segment 1 
 pinMode(segment_1_a,OUTPUT); 
 pinMode(segment_1_b,OUTPUT); 
 pinMode(segment_1_c,OUTPUT); 
 pinMode(segment_1_d,OUTPUT); 
 pinMode(segment_1_e,OUTPUT); 
 pinMode(segment_1_f,OUTPUT); 
 pinMode(segment_1_g,OUTPUT); 

 //output segment 2 
 pinMode(segment_2_a,OUTPUT); 
 pinMode(segment_2_b,OUTPUT); 
 pinMode(segment_2_c,OUTPUT); 
 pinMode(segment_2_d,OUTPUT); 
 pinMode(segment_2_e,OUTPUT); 
 pinMode(segment_2_f,OUTPUT); 
 pinMode(segment_2_g,OUTPUT); 
 display_segment(0);
 
}

void loop() {

  
  if( sw1 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw1 == 1 )
    {
        if(piority1 == 0 && show_number_2 != 1)
         {
          piority1 = 1;
          show_number_1 = 1;
         }
         if(piority2 == 0 && show_number_1 != 1)
         {
          piority2 = 1;
          show_number_2 = 1;
         } 
    }
  }
  if( sw2 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw2 == 1 )
    {
        if(piority1 == 0 && show_number_2 != 2)
         {
          piority1 = 1;
          show_number_1 = 2;
         }
         if(piority2 == 0 && show_number_1 != 2)
         {
          piority2 = 1;
          show_number_2 = 2;
         }     
    }
  }
  if( sw3 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw3 == 1 )
    {
        if(piority1 == 0 && show_number_2 != 3)
         {
          piority1 = 1;
          show_number_1 = 3;
         }
         if(piority2 == 0 && show_number_1 != 3)
         {
          piority2 = 1;
          show_number_2 = 3;
         }      
    }
  }
  if( sw4 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw4 == 1 )
    {
        if(piority1 == 0 && show_number_2 != 4)
         {
          piority1 = 1;
          show_number_1 = 4;
         }
         if(piority2 == 0 && show_number_1 != 4)
         {
          piority2 = 1;
          show_number_2 = 4;
         }         
    }
  }
  if( sw5 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw5 == 1 )
    {
        if(piority1 == 0 && show_number_2 != 5)
         {
          piority1 = 1;
          show_number_1 = 5;
         }
         if(piority2 == 0 && show_number_1 != 5)
         {
          piority2 = 1;
          show_number_2 = 5;
         }         
    }
  }
   if( sw6 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw6 == 1 )
    {
        if(piority1 == 0 && show_number_2 != 6)
         {
          piority1 = 1;
          show_number_1 = 6;
         }
         if(piority2 == 0 && show_number_1 != 6)
         {
          piority2 = 1;
          show_number_2 = 6;
         }        
    }
  }
  if( sw7 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw7 == 1 )
    {
        if(piority1 == 0 && show_number_2 != 7)
         {
          piority1 = 1;
          show_number_1 = 7;
         }
         if(piority2 == 0 && show_number_1 != 7)
         {
          piority2 = 1;
          show_number_2 = 7;
         }        
    }
  }
  if( sw8 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw8 == 1 )
    {
         if(piority1 == 0 && show_number_2 != 8)
         {
          piority1 = 1;
          show_number_1 = 8;
         }
         if(piority2 == 0 && show_number_1 != 8)
         {
          piority2 = 1;
          show_number_2 = 8;
         }       
    }
  }
   if( sw9 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw9 == 1 )
    {
         if(piority1 == 0 && show_number_2 != 9)
         {
          piority1 = 1;
          show_number_1 = 9;
         }
         if(piority2 == 0 && show_number_1 != 9)
         {
          piority2 = 1;
          show_number_2 = 9;
         }       
    }
  }
  if( sw10 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw10 == 1 )
    {
          if(piority1 == 0 && show_number_2 != 10)
         {
          piority1 = 1;
          show_number_1 = 10;
         }
         if(piority2 == 0 && show_number_1 != 10)
         {
          piority2 = 1;
          show_number_2 = 10;
         }      
    }
  }
  if( sw11 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw11 == 1 )
    {
         if(piority1 == 0 && show_number_2 != 11)
         {
          piority1 = 1;
          show_number_1 = 11;
         }
         if(piority2 == 0 && show_number_1 != 11)
         {
          piority2 = 1;
          show_number_2 = 11;
         }       
    }
  }
    if( sw12 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw12 == 1 )
    {
         if(piority1 == 0 && show_number_2 != 12)
         {
          piority1 = 1;
          show_number_1 = 12;
         }
         if(piority2 == 0 && show_number_1 != 12)
         {
          piority2 = 1;
          show_number_2 = 12;
         }       
    }
  }
    if( sw13 == 1 && (piority1 == 0 || piority2 == 0) )
  {
    delay(100);
    if( sw13 == 1 )
    {
          if(piority1 == 0 && show_number_2 != 13)
         {
          piority1 = 1;
          show_number_1 = 13;
         }
         if(piority2 == 0 && show_number_1 != 13)
         {
          piority2 = 1;
          show_number_2 = 13;
         }      
    }
  }
  if( sw14 == 1 && (piority1 == 0 || piority2 == 0))
  {
    delay(100);
    if( sw14 == 1 )
    {
         if(piority1 == 0 && show_number_2 != 14)
         {
          piority1 = 1;
          show_number_1 = 14;
         }
         if(piority2 == 0 && show_number_1 != 14)
         {
          piority2 = 1;
          show_number_2 = 14;
         }   
    }
  }
 if( sw15 == 1 && (piority1 == 0 || piority2 == 0) )
  {
    delay(100);
    if( sw15 == 1 )
    {
        if(piority1 == 0 && show_number_2 != 15)
         {
          piority1 = 1;
          show_number_1 = 15;
         }
         if(piority2 == 0 && show_number_1 != 15)
         {
          piority2 = 1;
          show_number_2 = 15;
         }        
    }
  }                  

  if(piority1 == 1 || piority2 == 1)
   {
    time_cnt++;
   }

  if(piority1 == 0 && piority2 == 0)
  {
     display_segment(0);
  }
  if(piority1 == 1 &&  time_cnt == 3000)
  {
     display_segment(show_number_1);
  }
  if(piority2 == 1 && time_cnt  == 6000)
  {
     display_segment(show_number_2);

  }
  if(time_cnt > 9000)
  {
    piority1 = 0;
    piority2 = 0;
    show_number_1 = 0;
    show_number_2 = 0;
    time_cnt=0;
  }
    
  delay(10);
}
