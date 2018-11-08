#include <iostream>
#include <vector>
#include "PQueueUV.h" //Use unordered Vector implementation

int main()
   {
       PriorityQueue pqueue; 

       vector<int> Vec;
 
       for (auto z: {10, 14, 8, 12, 7, 20, 17})
       {
          pqueue.insert(z);
       }

       pqueue.buildHeap();

      cout<<"Deleted "<< pqueue.deleteMin()<<" from priority queue"<<endl;
      cout<<"Inserting 5 to priority queue"<<endl;    
       
      pqueue.insert(5);
      pqueue.heapifyUp( pqueue.size() - 1 );
      cout<<"Deleted "<< pqueue.deleteMin()<<" from priority queue"<<endl;

       
      while (pqueue.size() > 0)
        Vec.push_back( pqueue.deleteMin());

    
      for (auto z: Vec)
        cout<<z<<" ";

    cout<<endl;

     }
