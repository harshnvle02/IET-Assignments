package com.demo.sort;

import java.util.Arrays;

public class InsertionSort {

	public static void main(String[] args) {
		int []arr = {65,35,26,14,23,12,91};
		System.out.println("Before Sorting array");
		System.out.println(Arrays.toString(arr));
		insertionSort(arr);
	}

	private static void insertionSort(int []arr) {
		int n= arr.length;
		for(int i=1;i<n;i++) {
			int j=i-1;
			int num=arr[i];
			
			while(j>=0 && arr[j]>num) {
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=num;
			System.out.println(Arrays.toString(arr));
		}
	}	
}
