import java.util.Scanner;
import LB.Matrix;

class MyMatrix extends Matrix {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public int Frequency(int iNo) {
        int count = 0;
        int i = 0, j = 0;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                if (Arr[i][j] == iNo) {
                    count++;
                }
            }
        }
        return count;
    }

}

class Question2 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;
        int iRet = 0;
        int iValue = 0;

        System.out.println("Enter number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of Columns :");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);
        mobj.Accept();
        mobj.Display();

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        iRet = mobj.Frequency(iValue);
        System.out.println("Addition of diagonal is : " + iRet);

        mobj = null;
        System.gc();

    }
}