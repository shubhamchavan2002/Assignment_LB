import java.util.*;

class ArrayDemo {
    public int Brr[];

    public ArrayDemo(int Brr[]) {
        this.Brr = Brr;
    }

    public int Difference() {
        int iCnt = 0;
        int iEvenCount = 0;
        int iOddCount = 0;
        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            if ((Brr[iCnt] % 2) == 0) {
                iEvenCount = iEvenCount + Brr[iCnt];
            } else if ((Brr[iCnt] % 2) == 1) {
                iOddCount = iOddCount + Brr[iCnt];
            }
        }
        return iEvenCount - iOddCount;
    }
}

class Question1 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;
        int iRet = 0;
        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        System.out.println("Enter the elements : ");
        for (iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayDemo ADobj = new ArrayDemo(Arr);
        iRet = ADobj.Difference();
        System.out.println("Difference : " + iRet);

        sobj.close();

    }
}