import java.util.Scanner;

class SameOutput{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String input = "";
        int count = 0;
        while(count < 100 && scan.hasNextLine()){
            input = scan.nextLine();
            if(input.length() > 100){
                input.substring(100, input.length());
            }
            System.out.println(input);
            count++;
        }
        scan.close();
    }
}