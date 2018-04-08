import java.util.Scanner;

class NPrint{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        int input;

        input = scan.nextInt();

        for(int index = 1; index <= input; index ++){
            System.out.println(index);
        }
        scan.close();
    }
}