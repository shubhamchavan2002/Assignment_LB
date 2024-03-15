import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public void SummationCol() {
        int columnSum = 0;
        for (int j = 0; j < Arr[0].length; j++) {
            for (int i = 0; i < Arr.length; i++) {
                columnSum = columnSum + Arr[i][j];
            }
            System.out.println("Summation of Column " + (j + 1) + " is " + columnSum);
            columnSum = 0;
        }
    }
}

class Question4 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;
        int iRet = 0;

        System.out.println("Enter number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of Columns :");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);
        mobj.Accept();
        mobj.Display();
        mobj.SummationCol();

        mobj = null; // I dont want this memory
        System.gc(); // garbage collector

    }
}