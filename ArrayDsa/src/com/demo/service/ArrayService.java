package com.demo.service;

public class ArrayService {

	public int findMax(int[] arr) {
		
		int max = arr[0];
		
		for(int i = 0; i < arr.length; i++) {
			
			if(arr[i] > max) {
				max = arr[i];
			}
		}
		return max;
	}

	public int findSecMax(int[] arr) {
		
		
		int largest = 0;
		int secLargest = 0;
	
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] > largest) {
				largest = arr[i];
			}
		}
		for(int i = 0; i < arr.length; i++) {
			
			if(arr[i] > secLargest && arr[i] != largest) {
				secLargest = arr[i];
			}
		}
		
		return secLargest;
	
	}



}
