package com.demo.sort;

import java.util.Arrays;

public class selectionsort {

	public static void main(String[] args) {
		
		int arr[] = {25,2,55,14,1,3,15,4,45};
		
		System.out.println("Given Array");
		System.out.println(Arrays.toString(arr));

		System.out.println("Sorted Array");
		selectionSort(arr);
		
		System.out.println(Arrays.toString(arr));
	}

	private static void selectionSort(int []arr) {
		
		for (int i = 0; i < arr.length-1; i++) {
			
				 int min_ind=i;
				 for (int j = i+1; j <arr.length; j++) {
					
					 if (arr[j]<arr[min_ind]) {
						
						min_ind=j;
					}
				}
		
				 int temp =arr[i];
			     arr[i]=arr[min_ind];
			     arr[min_ind]=temp;
		}
		  System.out.println(Arrays.toString(arr));
	}

}
