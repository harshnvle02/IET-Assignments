package com.demo.sort;
import java.util.Scanner;

public class BubbleSort {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number of element");
		int num = sc.nextInt();
		int [] arr = new int[num];
		
		System.out.println("Enter array:");
		for(int i = 0; i < num; i ++) {
			arr[i] = sc.nextInt();
		}
		
		int [] newArr =new int[arr.length];
		
		newArr = sort(arr);
		System.out.println("Sorted array is:");
		
		for(int i = 0; i < arr.length; i++) {
			System.out.println(newArr[i]);
			
		}
		
	}

	private static int[] sort(int[] arr) {
       
		int length = arr.length;
		int temp = 0;
		
		for(int i = 0; i < arr.length; i++) {
			
			for(int j = 0; j < length-i; j++) {
				
				if(j+1 == arr.length) {
					break;
				}
				if(arr[j] > arr[j+1]) {
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		
		return arr;
		
	}
}
