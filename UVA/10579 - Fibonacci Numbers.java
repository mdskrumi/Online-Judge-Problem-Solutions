import java.util.Scanner;
import java.math.BigInteger;
public class Main{

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);        
        int n;
        BigInteger t1 , t2 ,ans;
        while(scan.hasNext()){
        t1 = new BigInteger("1");
        t2 = new BigInteger("1");
        ans = BigInteger.ZERO;
        
            n = scan.nextInt();
            
            if(n == 1){
                System.out.println(t1);
            }
            else if(n==2){
                System.out.println(t2);
            }
            else{
            for(int i = 2 ; i < n ; i++){
                ans = t1.add(t2);
                t1 = t2;
                t2 = ans;
                
            }
            System.out.println(ans);
            }        }
    }
}
    
    
