import java.util.Scanner;
public class JavaExample
{
  public static void main(String[] args){
    int numberOfRows;
    System.out.println("Enter the number of rows: ");
    Scanner sc = new Scanner(System.in);
    numberOfRows = sc.nextInt();
    sc.close();
    for (int i= 0; i<= numberOfRows-1 ; i++){
      for (int j=0; j<i; j++){
        System.out.print(" ");
      }
      for (int k=i; k<=numberOfRows-1; k++){
        System.out.print("*" + " ");
      }
      System.out.println();
    }
    for (int i= numberOfRows-1; i>= 0; i--){
      for (int j=0; j<i; j++){
        System.out.print(" ");
      }
      for (int k=i; k<=numberOfRows-1; k++){
        System.out.print("*" + " ");
      }
      System.out.println();
    }
  }
}  
/* Enter the number of rows : 5
 
* * * * *
 * * * *
  * * *
   * *
    *
    *
   * * 
  * * *
 * * * *
* * * * *

 */