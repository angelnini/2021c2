void setup(){
  size(400,300);
}
int x=100, y=150, x2=300, y2=150;
void draw(){//畫圖60次/秒
  background(#DBFF98);
  ellipse(x,y,30,30);
  ellipse(x2,y2,30,30);
}
void keyPressed(){//按鍵,一次只能一個人
  if(key=='w') y-=2;
  if(key=='s') y+=2;
  if(key=='a') x-=2;
  if(key=='d') x+=2;
  if(keyCode==UP)    y2-=2;
  if(keyCode==DOWN)  y2+=2;
  if(keyCode==LEFT)  x2-=2;
  if(keyCode==RIGHT) x2+=2;
}
