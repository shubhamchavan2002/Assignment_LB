import java.util.*;

class ArrayDemo {
    public int Brr[];

    public ArrayDemo(int Brr[]) {
        this.Brr = Brr;
    }

    public void Display() {
        int iCnt = 0;
        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            if ((Brr[iCnt] % 2) == 0 && (Brr[iCnt] % 5) == 0) {
                System.out.print(Brr[iCnt] + "\t");
            }
        }
    }
}

class Question3 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;
        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        System.out.println("Enter the elements : ");
        for (iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayDemo ADobj = new ArrayDemo(Arr);
        ADobj.Display();

        sobj.close();

    }
}