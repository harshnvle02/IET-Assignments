package com.demo.sort;

import java.util.Arrays;

public class CountSort {
 
	public static void main(String[] args) {
		int[] arr= {4,2,2,8,3,3,1};
		System.out.println("Before sorting");
		System.out.println(Arrays.toString(arr));
		int [] sorted=countSorting(arr);
		System.out.println("After sorting");
		System.out.println(Arrays.toString(sorted));
		
	}

	private static int[] countSorting(int[] arr) {
//		find maximum
		int max=findMax(arr);
//		make counter array
		int []counter=new int[max+1];
		for(int i=0;i<arr.length;i++) {
			counter[arr[i]]++;
		}
		System.out.println("Counter array");
		System.out.println(Arrays.toString(counter));
		
//		find cumulative sum
		for(int i=1;i<counter.length;i++) {
			counter[i]=counter[i]+counter[i-1];
		}
		
		System.out.println("cumulative sum array");
		System.out.println(Arrays.toString(counter));
		
//	    create new resultant array
		int []output=new int[arr.length];
		
		for(int i=0;i<arr.length;i++){
			output[counter[arr[i]]-1]=arr[i];
			counter[arr[i]]--;
		}
		return output;
	}

	private static int findMax(int[] arr) {
		int max=arr[0];
		for(int i=1;i<arr.length;i++) {
			if(max<arr[i]) {
				max=arr[i];
			}
		}
		return max;
	}
}
