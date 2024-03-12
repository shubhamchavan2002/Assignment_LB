import java.util.*;

class Number {
    public int Brr[];

    public Number(int Brr[]) {
        this.Brr = Brr;
    }

    public int Display() {
        int iCnt = 0;
        int iMul = 1;

        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            if (Brr[iCnt] % 2 == 1) {
                iMul = iMul * Brr[iCnt];
            }
        }
        return iMul;
    }
}

class Question5 {
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

        Number ADobj = new Number(Arr);
        iRet = ADobj.Display();
        System.out.println("Product of all odd elements : " + iRet);

        sobj.close();

    }
}
