import java.util.Scanner;
import java.lang.Math;

public class PrimeNumber {
    static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        } else if (num % 2 == 0) {
            return false;
        } else {
            for (int i = 3; i < Math.sqrt(num); i++ ) {
                if (num % i == 0) {
                    return false;
                }
            }
            return true;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if (isPrime(num)) {
            System.out.println("Prime");
        } else {
            System.out.println("Not Prime");
        }
    }
}
