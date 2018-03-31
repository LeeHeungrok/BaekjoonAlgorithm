import java.util.Scanner;

class SugarDelivery{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        final int THREE_KG = 3;
        final int FIVE_KG = 5;
        int suger, count = 0;

        suger = scan.nextInt();

        count = suger / FIVE_KG;

        suger = suger % FIVE_KG;

        count = suger / THREE_KG;

        suger = suger % THREE_KG;

        if(suger != 0){
            System.out.println(-1);
        }
        else {
            System.out.println(count);
        }
        
        scan.close();
    }
}