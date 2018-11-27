public class CounterThread extends Thread{

     protected Counter counter = null;

     public CounterThread(Counter counter){
        this.counter = counter;
     }

     public void run() {
	for(int i=0; i<10; i++){
           try{
	   counter.add(i);
	   System.out.println("i="+i+"id : "+Thread.currentThread().getId()+" |count : "+counter.count);
//	   Thread.sleep(2000L);
	   }catch(Exception e){}
        }
     }
  }
