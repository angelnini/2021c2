PShape gundam;//等一下要用的鋼彈模型
void setup(){//p語言是java的變形
  size(500,500,P3D);//有p語言的3D功能
  gundam=loadShape("Gundam.obj");//讀入模型，類似loadImage()
}
void draw(){//每秒60次畫圖
  background(#A8F5C2);
  translate(250,0,0);//往右移一半
  scale(20,20,20);//放大20倍，看起來倒過來，因為3D模型時y軸向上
  shape(gundam);//show出模型，類似image()
}
