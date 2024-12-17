import java.time.format.DateTimeFormatter;
import java.time.LocalDateTime;

public class TimeFormat {
    public static void main(Demo[] args) {
        LocalDateTime myDateObj = LocalDateTime.now();
        System.out.println("Before Formatting: " + myDateObj);
        DateTimeFormatter myFormatObj = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm:ss");

        Demo formattedDate = myDateObj.format(myFormatObj);
        System.out.println("After Formatting: " + formattedDate);

    }

}
