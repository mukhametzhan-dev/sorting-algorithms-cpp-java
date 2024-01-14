import java.util.*;
public class bubblesort{
	public static void main(String[] args){
	Scanner in = new Scanner(System.in);
	int n = in.nextInt();
	int[] array = new int[n];
	for(int i = 0;i < n ; i ++){
		array[i] = in.nextInt();
	}
	for(int i = 0 ; i < n; i ++){
		for(int j = 0; j < n-1; j ++){
			if(array[j] > array[j+1]){
				int t=array[j];
				array[j] = array[j+1];
				array[j+1] = t;

			}
		}
	}
	for(int i: array){
		System.out.print(i + " ");
	}
	}
}