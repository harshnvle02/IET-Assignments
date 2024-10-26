package com.demo.recursion;
import java.util.*;

public class TestFactRecursion {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int num = sc.nextInt();
		
		int factorial = fact(num);
		System.out.println("factorial of "+num+" is " +factorial);
	}

	private static int fact(int num) {
		
		if(num == 1) {
			return 1;
		}else {
			
			return num * fact(num-1);
		}
	}
}
