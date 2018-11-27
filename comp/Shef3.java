import java.util.Scanner;
class Chef {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int k = 0; k < t; k++) {
          int  n = sc.nextInt();
            int arr[] = new int[n];
            int arrB[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                arrB[i] = sc.nextInt() - arr[i];
            }
            find(arrB);
        }
    }

    static void find(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > 0 && i< arr.length-2) {
                arr[i + 2] = arr[i + 2] - (3 * arr[i]);
                arr[i + 1] = arr[i + 1] - (2 * arr[i]);
                arr[i] = 0;
            } else if (arr[i] < 0) {
                System.out.println("NIE");
                return;
            } else if(arr[i]>0 && i>=arr.length-2){
                System.out.println("NIE");
                return;
            }
        }
        System.out.println("TAK");
    }
}
