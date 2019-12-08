import java.util.Scanner;
import java.math.BigInteger;
public class Main {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);        
        int n ,m ,n_m;
        while(scan.hasNext()){
        n = scan.nextInt();
        m = scan.nextInt();
        if(n==0 && m==0)break;
        n_m = n-m;
        BigInteger ans = fact(n).divide((fact(n_m).multiply(fact(m))));
        
        System.out.println(n+" things taken "+m+" at a time is " + ans +" exactly.");
        
        }
    }
    
    public static BigInteger fact(int x){
        
        BigInteger f = new BigInteger("1");
        BigInteger mul = new BigInteger("1");
       // BigInteger mul
        for(int i = 0 ; i < x ;i++ ){
            mul = f.multiply(mul);
            f = f.add(BigInteger.ONE);
        }
        return mul;
    }
        
    }   
    
