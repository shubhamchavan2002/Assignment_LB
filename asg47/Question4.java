import java.util.Scanner;
import LB.Matrix;

class MyMatrix extends Matrix {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public boolean ChkIdentity() {
        int i = 0, j = 0;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                if (i == j && Arr[i][j] != 1) {
                    return false;
                }
            }
        }
        return true;
    }

}

class Question4 {
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

        bRet = mobj.ChkIdentity();
        if (bRet == true) {
            System.out.println("It is identity matrix");
        } else {
            System.out.println("It is not identity matrix");
        }

        mobj = null;
        System.gc();

    }
}