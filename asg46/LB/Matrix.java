package LB;

import java.util.*;

public class Matrix {
    protected int Arr[][];

    public Matrix(int A, int B) {
        Arr = new int[A][B];
    }

    protected void finalize() {
        Arr = null;
    }

    public void Accept() {
        int i = 0, j = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements : ");
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() {
        int i = 0, j = 0;
        System.out.println("The elements are: ");
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}