import java.util.*;

public class ArmstrongNumber {
    static int power(int a, int b) {
        int result = a;
        for (int i = 1; i < b; i++) {
            result = result * a;
        }
        return result;
    }

    static boolean isArmstrong(int num){
        int a = num;
        int b = num;
        int len = String.valueOf(num).length();
        int r = 1;
        int sum = 0;
        while(a > 0) {
            r = a%10;
            sum = sum + power(r, len);
            a = a/10;
        }
        if (b == sum ) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if(isArmstrong(num)){
            System.out.println("Armstrong Number");
        } else {
            System.out.println("Not Armstrong Number");
        }
    }
}
