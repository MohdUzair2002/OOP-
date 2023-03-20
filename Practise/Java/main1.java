class prac1
{ int x;
  String car_name;
  prac1()
  {
    car_name="Corolla";
  }

  int speed (int x)
  {
    this.x=x;
    return x;
  }

 }
class prac2 extends prac1
{ float y;
 private String Brand="fg-100";
 prac2(){};
 prac2(String Brand,float y)
 {
   this.Brand=Brand;
   this.y=y;
 }
 
  float accel(float y)
 {
   this.y=y;
   System.out.println(Brand);
   System.out.println(y);
   return y;
 }

}
class prac3 extends prac2
 { 
   int x=5;
 }
class main1{
  public static void main(String[] args)
  {
    prac1 p1=new prac1();
    prac2 p2=new prac2("dsfsfa",4);
    prac1 p3=new prac3();
 
    System.out.println(p2.accel(4));
    System.out.println(p3.x);
    System.out.println(p1.x);
  }
}
