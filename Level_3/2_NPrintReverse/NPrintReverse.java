import java.util.Scanner;

class NPrintReverse{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        int input;

        input = scan.nextInt();

        for(int index = input; index > 0; index --){
            System.out.println(index);
        }

        scan.close();
    }
}