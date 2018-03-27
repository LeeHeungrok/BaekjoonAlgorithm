import java.util.Scanner;

class Divide{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        double left, right, result;

        left = scan.nextDouble();
        right = scan.nextDouble();

        result = left / right;

        System.out.println(result);
        
        scan.close();
    }
}