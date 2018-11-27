public class Example {

    public static void main(String[] args) throws Exception{
      Counter counter = new Counter();
      Thread  threadA = new CounterThread(counter);
      Thread  threadB = new CounterThread(counter);
/*      Counter counterA = new Counter();
      Counter counterB = new Counter();
      Thread  threadA = new CounterThread(counterA);
      Thread  threadB = new CounterThread(counterB);
*/

      threadA.start();
//      Thread.sleep(2000L);
      threadB.start(); 
    }
  }
