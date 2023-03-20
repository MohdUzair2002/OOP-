public class fib1{
    private static int fib12(int n)
     {
         return fib12(n-1)+fib12(n-2);
     }
     public static void main(String[] args)
{
    System.out.println(fib12(5));
}
}
