struct node{
        int key, val, cnt;
        node* next;
        node* prev;
        node(int _key, int _val){
            key = _key;
            val = _val;
            cnt = 1;
        }
    };
    
    struct List{
        int size;
        node* head;
        node* tail;
        List(){
            head = new node(0,0);
            tail = new node(0,0);
            head -> next = tail;
            tail -> prev = head;
            size = 0;
        }
    void addFront(node* Node){
        node* temp = head->next;
        Node -> next = temp;
        Node -> prev = head;
        head -> next = Node;
        temp -> prev = Node;
        size++;
    }
    void removeNode(node* delNode){
        node* delprev = delNode -> prev;
        node* delnext = delNode -> next;
        delprev -> next = delnext;
        delnext -> prev = delprev;
         size--;
    }
    };
class LFUCache {
public:  
    map<int, List*>FreqListMap;
    map<int, node*>keyNode;
    int maxSizeCache;
    int minFreq;
    int currSize;
    
    LFUCache(int capacity) {
       maxSizeCache = capacity;
        minFreq = 0;
        currSize = 0;
    }
    
    void upFreqListMap(node* node){
        keyNode.erase(node->key);
        FreqListMap[node->cnt]->removeNode(node);
        if(node->cnt == minFreq &&   FreqListMap[node->cnt]->size == 0){
            minFreq++;
        }
        
        List* nextHigherList = new List();
        if( FreqListMap.find(node->cnt + 1) !=  FreqListMap.end()){
            nextHigherList = FreqListMap[node->cnt + 1];            
        }
        node->cnt +=1;
        nextHigherList->addFront(node);
        FreqListMap[node->cnt] = nextHigherList;
        keyNode[node->key] = node;
    }
    int get(int key) {
        if(keyNode.find(key) != keyNode.end()){
            node* node = keyNode[key];
            int res = node->val;
            upFreqListMap(node);
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(maxSizeCache == 0) return;
        
        if(keyNode.find(key) != keyNode.end()){
            node* node = keyNode[key];
            node->val = value;
            upFreqListMap(node);
        }
        else{
            if(currSize == maxSizeCache){
                List* list = FreqListMap[minFreq];
                keyNode.erase(list->tail->prev->key);
                FreqListMap[minFreq]->removeNode(list->tail->prev);
                currSize--;
            }
            currSize++;
            minFreq = 1;
            List* freqList = new List();
            if(FreqListMap.find(minFreq) != FreqListMap.end()){
                 freqList  = FreqListMap[minFreq];
            }
            node* Node = new node(key, value);
             freqList->addFront(Node);
            keyNode[key] = Node;
            FreqListMap[minFreq] =  freqList ;
            
        }
    }
};