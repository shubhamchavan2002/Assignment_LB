import java.util.*;

class StringDemo {
    public String str = null;

    public StringDemo(String str) {
        this.str = str;
    }

    public void StrRevTogtX() {
        int iCnt = 0;

        char Arr[] = str.toCharArray();

        for (iCnt = Arr.length - 1; iCnt >= 0; iCnt--) {
            if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z') {
                Arr[iCnt] = (char) (Arr[iCnt] + 32);
                System.out.print(Arr[iCnt]);
            } else if (Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z') {
                Arr[iCnt] = (char) (Arr[iCnt] - 32);
                System.out.print(Arr[iCnt]);
            }
        }

    }
}

class Question4 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        String sRet = null;

        System.out.println("Enter the first String : ");
        str = sobj.nextLine();

        StringDemo SDobj = new StringDemo(str);

        SDobj.StrRevTogtX();

    }
}