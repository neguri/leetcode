char queueData[1024];
char maxData[1024];
int front = 0;
int rear = 0;

int maxLength = 0;
int localLength = 0;

void calc(const char*);
void clearQueue(void);
int addQueue(char c);
int findDuplicated(char c);
void copyData(void);


void calc(const char* str)
{

 int i,j;
 localLength = 0;
 int len = strlen(str);
 printf("%s with %d\n", str, strlen(str));
 clearQueue();

 for(i=0;i<len; i++)
 {
  for(j=i;j<len;j++)
  {
    if(findDuplicated(str[j]) == false)
    {
     addQueue(str[j]);
    }
    else
    {
      break;
    }
  }
   if(maxLength < localLength)
   {

     maxLength = localLength;
     copyData();
   }
     memset(queueData,0,sizeof(char)*1024);
     rear=0;
     localLength=0;
 }
}

void clearQueue(void)
{
 front = 0;
 rear = 0;
 localLength=0;
 maxLength=0;
 memset(queueData,0,sizeof(char)*1024);
 memset(maxData,0,sizeof(char)*1024);
}

int addQueue(char c)
{
 queueData[rear]=c;
 rear++;
 localLength++;
 return 0;
}

int findDuplicated(char c)
{
 int i=0;
 int find = false;
 for(i=0; i<rear; i++)
 {
  if(queueData[i] == c)
  {
   find = true;
   break;
  }
 }
 return find;
}

void copyData(void)
{
  int i;
  for(i=0; i<rear; i++)
  {
    maxData[i] = queueData[i];
  }
  maxData[i] = '\0';
}



int lengthOfLongestSubstring(char* s) {
    int len=0;
    calc(s);
    len = strlen(maxData);
    return len;
}
