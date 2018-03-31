import java.util.Scanner;

class Remainder{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int left, center, right;

        left = scan.nextInt();
        center = scan.nextInt();
        right = scan.nextInt();

        System.out.println((left + center) % right);
        System.out.println((left % right + center % right) % right);
        System.out.println((left * center) % right);
        System.out.println((left % right * center % right) % right);

        scan.close();
    }
}