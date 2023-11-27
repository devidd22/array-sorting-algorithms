#include <stdio.h>

static void sort(void)
{
// Get maximum element
  int max = getMax(array, size);

  // Apply counting sort to sort elements based on place value.
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(array, size, place);
}

int main()
{
	return 0;
}
