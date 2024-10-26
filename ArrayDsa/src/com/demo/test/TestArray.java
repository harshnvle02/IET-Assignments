package com.demo.test;
import com.demo.service.*;
import java.util.Scanner;

public class TestArray {
	
	static ArrayService service = new ArrayService();
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int [] arr = new int[5];
		
		System.out.println("Enter array");
		
		for(int i = 0; i < arr.length; i++) {
			
			arr[i] =sc.nextInt();
		}
		int max = service.findMax(arr);
		System.out.println("Max number is:" +max);
		
		int secMax = service.findSecMax(arr);
	}
}
