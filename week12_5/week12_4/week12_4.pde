void setup()
{
  size(400,300);
  textSize(40);
}
int choice=-1;
void draw(){
  background(#C7E7FC);
  fill(#FF8686);
  if (choice==0) rect(50,50,150,2);
  if (choice==1) rect(50,100,150,2);
  if (choice==2) rect(50,150,150,2);
  text("Choice 1",50,50);
  text("Choice 2",50,100);
  text("Choice 3",50,150);
  
}
void mousePressed(){
  choice=int(random(3));
}
