import java.util.Scanner;
import LB.Matrix;

class MyMatrix extends Matrix {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public void SwapRows() {
        int i = 0;
        for (i = 0; i < Arr.length - 1; i += 2) {
            int[] temp = Arr[i];
            Arr[i] = Arr[i + 1];
            Arr[i + 1] = temp;
        }
    }
}

class Question5 {
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

        mobj.SwapRows();
        mobj.Display();

        mobj = null;
        System.gc();

    }
}