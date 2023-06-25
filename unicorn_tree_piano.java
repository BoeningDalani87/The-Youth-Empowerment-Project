import java.util.Scanner;

public class LeadershipProgram
{
  private String[] mentees;
  private int menteeCount;
  private String[] mentors;
  private int mentorCount;
  private String[] goals;
  private int goalCount;
                        
  public LeadershipProgram()
  {
    this.menteeCount = 0;
    this.mentorCount = 0;
    this.goalCount = 0;
    this.mentees = new String[1000];
    this.mentors = new String[1000];
    this.goals = new String[1000];
  }
                        
  public void addMentee(String name)
  {
    mentees[menteeCount] = name;
    menteeCount++;
  }
                        
  public void addMentor(String name)
  {
    mentors[mentorCount] = name;
    mentorCount++;
  }
                        
  public void addGoal(String goal)
  {
    goals[goalCount] = goal;
    goalCount++;
  }
                        
  public void printMenteeNames()
  {
    for(String mentee : mentees)
    {
      if(mentee != null)
        System.out.println(mentee);
    }
  }
                        
  public void printMentorNames()
  {
    for(String mentor : mentors)
    {
      if(mentor != null)
        System.out.println(mentor);
    }
  }
                        
  public void printGoals()
  {
    for(String goal : goals)
    {
      if(goal != null)
        System.out.println(goal);
    }
  }
                        
  public void startProgram()
  {
    System.out.println("Welcome to the Leadership Program!");
    System.out.println("Mentors and mentees will be completing activities and setting goals to gain leadership skills and become more effective in their communities.");
    System.out.println("Let's get started!");
    Scanner scanner = new Scanner(System.in);
    String input;
    while(true)
    {
      System.out.println("Press 1 to add a mentor, 2 to add a mentee, 3 to add a goal, 4 to print mentee names, 5 to print mentor names, 6 to print goals, or 7 to quit.");
      input = scanner.nextLine();
      if(input.equals("1"))
      {
        System.out.println("Enter the name of the mentor:");
        addMentor(scanner.nextLine());
      }
      else if(input.equals("2"))
      {
        System.out.println("Enter the name of the mentee:");
        addMentee(scanner.nextLine());
      }
      else if(input.equals("3"))
      {
        System.out.println("Enter the goal:");
        addGoal(scanner.nextLine());
      }
      else if(input.equals("4"))
      {
        printMenteeNames();
      }
      else if(input.equals("5"))
      {
        printMentorNames();
      }
      else if(input.equals("6"))
      {
        printGoals();
      }
      else if(input.equals("7"))
      {
        break;
      }
      else
      {
        System.out.println("Invalid input. Please try again.");
      }
    }
    scanner.close();
    System.out.println("Thank you for using the Leadership Program. See you next time!");
  }
                         
  public static void main(String[] args)
  {
    LeadershipProgram lp = new LeadershipProgram();
    lp.startProgram();
  }
}