void setup()
{
  size(400,300);
  textSize(40);
}
int choice=-1;
void draw(){
  background(#C7E7FC);
  fill(#FF8686);
  if (choice==0) ellipse(25,25,40,40); //圓心x,圓心y,寬度w,高度h
  if (choice==1) ellipse(25,75,40,40);
  if (choice==2) ellipse(25,125,40,40);
  text("Choice 1",50,50);
  text("Choice 2",50,100);
  text("Choice 3",50,150);
  
}
void mousePressed(){
  choice=int(random(3));
}
