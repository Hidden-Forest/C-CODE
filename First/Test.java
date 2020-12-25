package First;
import java.sql.Array;
import java.util.Arrays;
import java.util.Scanner;
import static java.sql.Array.*;

public class Test {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int size1=input.nextInt();
        int size2=input.nextInt();
        int[] List1=new int[size1+size2];
        for(int i=0;i<(size1+size2);++i){
            List1[i] = input.nextInt();
        }
        Arrays.sort(List1);
        for(int i=0;i<(size2+size2);++i){
            System.out.printf("%d ",List1[i]);
        }
    }

}
