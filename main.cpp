#include <iostream>
#include <cstdlib>
#include "integer.h"
#include "tdalist.h"
#include "farraylist.h" //Arreglos de tamaño fijo
#include "slinkedlist.h" //Lista Enlazada Sencilla
#include "dlcursorlist.h" //Cursor de Tamaño Fijo simulando lista doblemente enlazada

#include <stdio.h>   
#include <stdlib.h> 
#include <time.h>      

using namespace std;

int main(int argc, char *argv[]){
	
	TDAList* list;
    
    clock_t start;
    clock_t end;
    
    srand(time(NULL));

    /*list = new SLinkedList();

    int number, position;
    for (int i = 1; i <= 5000; ++i) {
    	start = clock();
    	number = rand()%100;
    	position = 0+(rand()%(int)(list->size()-0+1));
    	list->insert(new Integer(number),position);
    	end = clock()-start/CLOCKS_PER_SEC;
    	//cout << i << "\t" << end << endl;
    	cout << end << " ";
    }*/

    /*list = new FArrayList(5000);
    
    int number, position;
    for (int i = 1; i <= 5000; ++i) {
    	start = clock();
    	number = rand()%100;
    	position = 0+(rand()%(int)(list->size()-0+1));
    	list->insert(new Integer(number),position);
    	end = clock()-start/CLOCKS_PER_SEC;
    	//cout << i << "\t" << end << endl;
    	cout << end << " ";
    }*/

    /*list = new DLCursorList(5000);
    
    int number, position;
    for (int i = 1; i <= 5000; ++i) {
    	start = clock();
    	number = rand()%100;
    	position = 0+(rand()%(int)(list->size()-0+1));
    	list->insert(new Integer(number),position);
    	end = clock()-start/CLOCKS_PER_SEC;
    	//cout << i << "\t" << end << endl;
    	cout << end << " ";
    }*/

//---------------------------------------------------------------------------------------
	list = new SLinkedList();
	Object* data;
    int number, position;
    for (int i = 0; i < 5000; ++i)
    {
    for (int i = 1; i <= 5; ++i) {
    	number = rand()%100;
    	position = 0+(rand()%(int)(list->size()-0+1));
    	list->insert(new Integer(number),position);
    }
    //for (int i = 1; i <= 5000; ++i) {
    	start = clock();
    	//list->first();
    	//list->last();
    	//Object* data;
    	//data = NULL;
    	//list->indexOf(data);
    	list->clear();
    	end = clock()-start/CLOCKS_PER_SEC;
    	//cout << i << "\t" << end << endl;
    	cout << end << " ";
	//}
}

//---------------------------------------------------------------------------------------
	
/*    list = new FArrayList(5000);
    
    int number, position;
    for (int i = 0; i < 5000; ++i)
    {
    for (int i = 1; i <= 5; ++i) {
    	number = rand()%100;
    	position = 0+(rand()%(int)(list->size()-0+1));
    	list->insert(new Integer(number),position);
    }
    //for (int i = 1; i <= 5000; ++i) {
    	start = clock();
    	//list->first();
    	//list->last();
    	//Object* data;
    	//data = NULL;
    	//list->indexOf(data);
    	list->clear();
    	end = clock()-start/CLOCKS_PER_SEC;
    	//cout << i << "\t" << end << endl;
    	cout << end << " ";
	//}
	}
 */   		
//---------------------------------------------------------------------------------------
	/*list = new DLCursorList(5000);
    
    int number, position;
    for (int i = 0; i < 5000; ++i)
    {
    	
    
    for (int i = 1; i <= 5; ++i) {
    	number = rand()%100;
    	position = 0+(rand()%(int)(list->size()-0+1));
    	list->insert(new Integer(number),position);
    }
    //for (int i = 1; i <= 5000; ++i) {
    	start = clock();
    	//list->first();
    	//list->last();
    	//Object* data;
    	//data = NULL;
    	//list->indexOf(data);
    	list->clear();
    	end = clock()-start/CLOCKS_PER_SEC;
    	//cout << i << "\t" << end << endl;
    	cout << end << " ";
	//}

}*/


    delete list;
	return 0;
}