import java.util.*;

class Number {
    public int Brr[];
    public int iSt;
    public int iEnd;

    public Number(int Brr[], int iSt, int iEnd) {
        this.Brr = Brr;
        this.iSt = iSt;
        this.iEnd = iEnd;
    }

    public void Display() {
        int iCnt = 0;

        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            if (Brr[iCnt] >= iSt && Brr[iCnt] <= iEnd) {
                System.out.print(Brr[iCnt] + "\t");
            }
        }
    }
}

class Question4 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;
        int iStart = 0;
        int iEnd = 0;
        int iRet = 0;
        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        System.out.println("Enter the Starting number : ");
        iStart = sobj.nextInt();

        System.out.println("Enter the Ending number : ");
        iEnd = sobj.nextInt();

        int Arr[] = new int[iSize];
        System.out.println("Enter the elements : ");
        for (iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        Number ADobj = new Number(Arr, iStart, iEnd);
        ADobj.Display();

        sobj.close();

    }
}
