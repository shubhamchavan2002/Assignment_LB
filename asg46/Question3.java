import java.util.Scanner;
import LB.Matrix;

class MyMatrix extends Matrix {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public int MaxDiagonal() {
        int imaxMain = Arr[0][0];
        int imaxAnti = Arr[0][0];
        int i = 0, j = 0;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                if (i == j) {
                    imaxMain = Arr[i][j];
                }
                if (i + j == Arr.length - 1) {
                    imaxAnti = Arr[i][j];
                }
            }
        }
        if (imaxMain > imaxAnti) {
            return imaxMain;
        } else {
            return imaxAnti;
        }
    }

}

class Question3 {
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

        iRet = mobj.MaxDiagonal();
        System.out.println("Maximum from both diagonal is : " + iRet);

        mobj = null;
        System.gc();

    }
}