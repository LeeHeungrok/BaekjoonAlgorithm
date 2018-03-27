import java.util.Scanner;

class Sum{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int left, right, result;

        left = scan.nextInt();
        right = scan.nextInt();

        result = left + right;
        System.out.println(result);

        scan.close();
    }
}