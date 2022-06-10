void setup(){
  size(300,300);
}
String line="";//沒字串的意思
void draw(){//畫圖60次/秒
  background(#DBFF98);
  fill(0);
  textSize(50);
  text(line,20,50);
}
void keyPressed(){//按鍵
  line="key: "+ key;//key:按的鍵
}
