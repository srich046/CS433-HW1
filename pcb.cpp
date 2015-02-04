/*
PCB implementation file
Sean Rich
Feb 9 2015
*/

#include <iostream>
#include "pcb.h"
using namespace std;

//initializes queue
ReadyQueue::ReadyQueue()
{
  size = 0;
}

//adds a PCB into the table, keeping the table in order
void ReadyQueue::insertProc(PCB_STATE setState, int setPriority, int setID)
{
  PCB *N;
  N = new PCB;
  N->state = setState;
  N->priority = setPriority;
  N->ID = setID;
  //once data structure is determined, search through until N->priority fits and add N

  //needs to increment size to keep count in line
  size++;
}

PCB ReadyQueue::RemoveProc()
{
  //since insertProc already inserts in order, ReadyQueue[0] is by nature the highest priority
  PCB highestProc = ReadyQueue[0];

  //decrements size to keep count in order
  size--;
} 

int ReadyQueue::Size()
{
  return size;
}

void ReadyQueue::DisplayQueue()
{
  cout << "Displaying all items in queue...";
  for(int i=0; i<=size; i++)
    //this will need to be edited once data structure is determined to figure out indexing
    cout << ReadyQueue[i]->processID << "\t" << ReadyQueue[i]->priority;
}

void ReadyQueue::Age()
{
  for(int i=0; i<=size; i++)
    {
      //once data structure is determined, select index i and decrement priority
      PCB->Priority--;
    }
}

