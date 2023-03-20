class OuterClass {
    float x ;
  
    private static  class InnerClass {
      float y ;
    }
    public static void main(String[] args) {
     OuterClass o1=new OuterClass();
     OuterClass.InnerClass i1=new InnerClass();
     System.out.println(o1.x+i1.y);
    }
  }
  
  