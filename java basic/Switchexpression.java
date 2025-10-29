enum Day {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}
public class Switchexpression {
    public static void main(String[] args) {
        Day d = Day.WEDNESDAY;
        int result = switch(d){
            case MONDAY, TUESDAY, FRIDAY -> 6;
            case SUNDAY, THURSDAY, SATURDAY -> 8;
            case WEDNESDAY -> 4;
        };
        System.out.println("Result: " + result);
    }
}
