import java.util.Scanner;

public class Palindrome {
    static boolean PalindromeNum(int a)
    {
        int reverse = 1;
        int r = 1;
        int n = a;
        while (n < 0){
            r = n%10;
            reverse = reverse * 10 + r;
            n = n/10;
        }
        return reverse == a;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Choose  \n 1. Palindrome Number \n 2. Palindrome String");
        int choice = sc.nextInt();
        switch (choice) {
            case 1:
                System.out.println("Enter the number");
                int num = sc.nextInt();
                if(PalindromeNum(num)){
                    System.out.println("palindrome");
                } else {
                    System.out.println("not palindrome");
                }

            /*
            case 2:
                System.out.println("Enter the string");
                String str = sc.next();
                if(PalindromeNum(str)){
                    System.out.println("palindrome");
                } else {
                    System.out.println("not palindrome");
                }
                */
        }

    }

}
