import java.util.Scanner;

class Operation{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int left, right;

        left = scan.nextInt();
        right = scan.nextInt();

        System.out.println(left + right);
        System.out.println(left - right);
        System.out.println(left * right);
        System.out.println(left / right);
        System.out.println(left % right);

        scan.close();
    }
}