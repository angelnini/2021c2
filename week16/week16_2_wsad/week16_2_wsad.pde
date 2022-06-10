void setup(){
  size(300,300);
}
int x=150, y=150;
void draw(){//畫圖60次/秒
  background(#DBFF98);
  ellipse(x,y,30,30);
}
void keyPressed(){//按鍵
  if(key=='w') y-=2;//往上2格
  if(key=='s') y+=2;
  if(key=='a') x-=2;
  if(key=='d') x+=2;
}
