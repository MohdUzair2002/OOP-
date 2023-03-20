// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.HashMap;
import java.util.Map;
class Fib35 {
    static Map<Integer,Integer>memo=new HashMap<>(Map.of(0,0,1,1));
    private static int fib31(int n)
    {
        if(!memo.containsKey(n)){
            memo.put(n,fib31(n-1)+fib31(n-2));
        }
        return memo.get(n);
        }
    
    public static void main(String[] args) {
        System.out.println(fib31(5)); 
        System.out.println(fib31(10)); 
        System.out.println(fib31(0));
    }
}  