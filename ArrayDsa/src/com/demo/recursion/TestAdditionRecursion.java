package com.demo.recursion;
import java.util.Scanner;

public class TestAdditionRecursion {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the num:");
		int num = sc.nextInt();
		int add = addition(num);
		System.out.println("addition from 1 to "+num+" is " +add);
	}

	private static int addition(int num) {
	
		if(num == 1) {
			
			return 1;
		}else {
			
			return num + addition(num-1);
		}
	}
}
