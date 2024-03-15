import java.util.Scanner;
import LB.Matrix;

class MyMatrix extends Matrix {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public void ReverseRow() {
        int i = 0, j = 0;
        System.out.println("Reverse : ");
        for (i = 0; i < Arr.length; i++) {
            for (j = Arr[0].length - 1; j >= 0; j--) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

}

class Question2 {
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

        mobj.ReverseRow();

        mobj = null;
        System.gc();

    }
}