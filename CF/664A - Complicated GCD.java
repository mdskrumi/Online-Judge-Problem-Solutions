package newjava;


import java.util.Scanner;
import java.math.BigInteger;
public class NewJava {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        BigInteger x , y ;
        int c;
        
        while(scan.hasNext()){
            x = scan.nextBigInteger();
            y = scan.nextBigInteger();
            
            c = x.compareTo(y);
            if(c==0){
                System.out.println(x);
            }
            else{
                System.out.println(1);
            }
          
        }

    }   
    
}
