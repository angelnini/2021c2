PShape gundam;
void setup(){
  size(500,500,P3D);
  gundam=loadShape("Gundam.obj");
}
void draw(){//每秒60次畫圖
  background(#A8F5C2);
  translate(250,500);
  scale(20,-20,20);//放大20倍，y軸加負號會倒過來
  rotateY(radians(frameCount));
  shape(gundam);
}
