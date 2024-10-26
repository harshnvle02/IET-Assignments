package com.demo.search;
import java.util.Scanner;

public class BinarySearchTest {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int [] arr = new int[5];
		
		System.out.println("Enter sorted array");
		
		for(int i = 0; i < arr.length; i++) {
			
			arr[i] =sc.nextInt();
		}
		
		System.out.println("Enter number to search");
		int search = sc.nextInt();
		
		int low = 0;
		int high = arr.length-1;
		int mid = (low + high)/2;
		
		
		int  pos =binarySearch(arr, low, high, search);
		if(pos != -1) {
			System.out.println("Number found at pos" +pos+1);
		}
		else {
			System.out.println("no not found");
		}
	}

	private static int binarySearch(int[] arr, int low, int high, int search) {
		
		
		int l = low;
		int h = high;
		int m = (l + h)/2;
		
		
			if(l <= h) {

				if(arr[m] == search) {
					return m;
				}
				else if(search > arr[m]) {
					
					return binarySearch(arr, m+1, h, search);
				}
				else if(search < arr[m]) {
					
					return binarySearch(arr,l,m-1,search);
				}
		}
			return -1;	
	}
}
