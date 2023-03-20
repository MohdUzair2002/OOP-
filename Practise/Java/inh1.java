class prac1{
    prac1(){
        int x=0;
    };
    public int c1(){
    int x=5;
    System.out.println(x);
    return x;
    }
   public  int c2(){
        int x=5;
        System.out.println(x);
        return x;
        }
       public int c3(){
            int x=5;
            System.out.println("A");
            return x;
            }
}
class prac2 extends prac1
{prac2 (int x){
    int a=x;
 }
    public int c2(){
        int x=6;
        System.out.println("B");
        return x;
        }
}
class prac3 extends prac2{
   prac3 (int x)
   {super (x);
       int a=x;
   }
   
 
    public int  c3(){
        int x=7;
        System.out.println(x);
        return x;
        }
    
}
class inh1{
    public static void main(String [] args)
    {   prac1 p1=new prac1();
        prac2 p2=new prac2(2);
        prac3 p3=new prac3(4);
        prac2 p4=new prac3(5);
        p4.c3();
    }
}