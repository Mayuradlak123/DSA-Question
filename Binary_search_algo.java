import java.util.Scanner;

class Binary_Search_algo {
    Scanner sc = new Scanner(System.in);

    int binarySearch(int arr[], int k) {
        // int n = arr.length;
        int low = 0, high = arr.length - 1;

        while (low <= high) {
            int mid = high - low / 2;
            if (arr[mid] == k)
                return mid;
            if (arr[mid] < k)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }

    public void getInput() {
        int i, n, k;
        System.out.println("Enter Length of array ");
        n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter Element of array : ");
        for (i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter Element for search : ");
        k = sc.nextInt();
        int res = binarySearch(arr, k);
        if (res > 0) {
            System.out.println("Element found at Index : " + res);
        } else {
            System.out.println("Element not Found ");
        }
    }

    public static void main(String args[]) {

        Binary_Search_algo obj = new Binary_Search_algo();
        obj.getInput();
    }
}