import java.util.*;

class StringDemo {
    public String str = null;

    public StringDemo(String str) {
        this.str = str;
    }

    public int CountDiff() {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int iCountCapital = 0;
        int iCountSmall = 0;
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            if (Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z') {
                iCountCapital++;
            } else if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z') {
                iCountSmall++;
            }

        }
        return iCountCapital - iCountSmall;

    }
}

class Question3 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        int iRet = 0;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        StringDemo SDobj = new StringDemo(str);

        iRet = SDobj.CountDiff();
        System.out.println("Difference between capital and small charachter are : " + iRet);

        sobj.close();

    }
}