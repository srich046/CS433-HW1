/*
PCB Header file
Sean Rich
Feb 9 2015
 */

//defines all possible PCB_STATEs
enum PCB_STATE { NEW, READY, RUNNING, WAITING, TERMINATED };

//defines PCB struct
struct PCB
{
  PCB_STATE state;
  int priority;
  int processID;
};

class ReadyQueue
{
 private:
  int size;

 public:
  ReadyQueue();
  void insertProc(PCB_STATE setState, int setPriority, int setID);
  PCB removeHighestProc();
  int size();
  void displayQueue(); 
  void age();
};
