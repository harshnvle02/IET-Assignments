package com.demo.sort;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Scanner;


public class QuickSort{

	public static void main(String[] args) {
     
		Scanner sc = new Scanner(System.in);   
		System.out.println("Enter the number");
		int size = sc.nextInt();
		int [] arr = new int[size];
		
		System.out.println("Enter array");
		for(int i = 0; i < size; i++) {
			arr[i] = sc.nextInt();
		}
		
		for(int i=0;i<size;i++) {
			arr[i]=i;
		}
		System.out.println(Arrays.toString(arr));
		
		Quickshort(arr,0,size-1 );
		
	}

	private static void Quickshort(int[] arr, int first, int last) {
		
		int pivot = first;
		int i = first;
		int j= last;
		
		
	}
}
