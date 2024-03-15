import java.util.Scanner;
import LB.Matrix;

class MyMatrix extends Matrix {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public void Transpose() {
        int i = 0, j = 0;
        System.out.println("Tranpose is : ");
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                System.out.print(Arr[j][i] + "\t");
            }
            System.out.println();
        }
    }

}

class Question1 {
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

        mobj.Transpose();

        mobj = null;
        System.gc();

    }
}