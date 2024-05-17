#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
  char* name;
  char* id;
  char* address;
};
int comparator(const void* p, const void* q)
{
  return strcmp(((struct Student*)p)->name,
        ((struct Student*)q)->name);
}
int main()
{
  int i = 0, n = 5;

  struct Student arr[n];

  arr[0].id = "PUR078BEI001";
  arr[0].name = "Sangr";
  arr[0].address = "New Jersey";

  arr[1].id = "PUR078BEI002";
  arr[1].name = "Paisan";
  arr[1].address = "Lameh";

  arr[2].id = "PUR078BEI003";
  arr[2].name = "Romas";
  arr[2].address = "Kings";

  arr[3].id = "PUR078BEI004";
  arr[3].name = "Toram";
  arr[3].address = "pises";

 

  printf("Unsorted Student Records:\n");
  for (i = 0; i < n; i++) {
    printf("%d. Id.pass = %s, Name = %s, address = %s \n",
      i,arr[i].id, arr[i].name, arr[i].address);
  }
  qsort(arr, n, sizeof(struct Student), comparator);

  printf("\n\nStudent Records sorted by Name:\n");
  for (i = 0; i < n; i++) {
    printf("%d. Id.pass = %s, Name = %s, Address = %s \n",i,
      arr[i].id, arr[i].name, arr[i].address);
  }

  return 0;
}
