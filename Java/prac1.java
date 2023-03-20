public class prac1 {
  int x=8;
  // public prac1()
  // {
  //   x=0;
  // }
  public prac1 (int x)
  {
    this.x=x;
  }
  public static void change(prac1 p,int x)
  {
    p.x=x;
    x=50;
    System.out.println(x);
    System.out.println(p.x);
  }
        public static void main(String[] args) {
          // prac1 obj1=new prac1();
          prac1 obj1=new prac1(4);
          int x=2;
          prac1.change(obj1, x);
          System.out.println();
        }
      
    
}
