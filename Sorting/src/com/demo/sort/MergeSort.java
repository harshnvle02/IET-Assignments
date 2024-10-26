package com.demo.sort;

import java.util.Arrays;

public class MergeSort {
	
	public static void main(String[] args) {
		
		int []arr= {23,1,2,56,34,2,7,8,9};
		System.out.println("Before Sorting");
		System.out.println(Arrays.toString(arr));
		mergeSort(arr,0,arr.length-1);
		System.out.println("After Sorting");
		System.out.println(Arrays.toString(arr));
	}

	
	private static void mergeSort(int[] arr, int first, int last) {

		if(first<last) {
//			find mid of the array
			int mid=(first+last)/2;
			mergeSort(arr,first,mid);
			mergeSort(arr,mid+1,last);
			merge(arr,first,mid,last);
		}
	}

	private static void merge(int[] arr, int first, int mid, int last) {
		int i,j,k;
//		length of leftArray
		int n1= mid-first+1;
//		length of rightArray
		int n2= last-mid;
		
		int []leftArray= new int[n1];
		int []rightArray= new int[n2];
		
		i=0;
		for(int a=first;a<=mid;a++) {
			leftArray[i]=arr[a];
			i++;
		}
		
		j=0;
		for(int a=mid+1;a<=last;a++) {
			rightArray[j]=arr[a];
			j++;
		}
		System.out.println("Left Array: "+Arrays.toString(leftArray));
		System.out.println("Right Array: "+Arrays.toString(rightArray));
		
//		merge arrays
		j=0;
		i=0;
		k=first;
		
		while(i<n1 && j<n2) {
			if(leftArray[i]>rightArray[j]) {
				arr[k]=leftArray[i];
				i++;
				k++;
			}else {
				arr[k]=rightArray[j];
				j++;
				k++;
			}	
		}
		while(i<n1) {
			arr[k]=leftArray[i];
			i++;
			k++;
		}
		while(j<n2) {
			arr[k]=rightArray[j];
			j++;
			k++;
		}
		System.out.println(Arrays.toString(arr));
	}
}
