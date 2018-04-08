import java.util.Scanner;

class GuGuDan{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
    
        int input;
        
        input = scan.nextInt();
        
        for(int index = 1; index < 10; index ++){
            System.out.println(input + " * " + index + " = " + (input * index));
        }
        scan.close();
    }
}