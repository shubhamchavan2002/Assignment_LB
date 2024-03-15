import java.util.Scanner;
import LB.Matrix;

class MyMatrix extends Matrix {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public boolean ChkSparse() {
        int i = 0, j = 0;
        int countNonZero = 0;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                if (Arr[i][j] != 0) {
                    countNonZero++;
                }
            }
        }
        return countNonZero < (Arr.length * Arr[0].length) / 2;
    }

}

class Question5 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;
        boolean bRet = false;

        System.out.println("Enter number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of Columns :");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);
        mobj.Accept();
        mobj.Display();

        bRet = mobj.ChkSparse();
        if (bRet == true) {
            System.out.println("It is sparse matrix");
        } else {
            System.out.println("It is not sparse matrix");
        }

        mobj = null;
        System.gc();

    }
}