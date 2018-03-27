import java.util.Scanner;

class Divide{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        float left, right, result;

        left = scan.nextFloat();
        right = scan.nextFloat();

        result = left / right;

        System.out.printf("%.9f\n", result);
        
        scan.close();
    }
}