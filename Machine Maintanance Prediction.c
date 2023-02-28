#include <stdio.h>

int main() {
  int numMachines;
  printf("Enter the number of machines: ");
  scanf("%d", &numMachines);

  // Create an array to store the usage data for each machine
  int usage[numMachines];

  // Prompt the user to enter the usage data for each machine
  for (int i = 0; i < numMachines; i++) {
    printf("Enter usage data for machine %d: ", i + 1);
    scanf("%d", &usage[i]);
  }

  // Calculate the average usage across all machines
  int totalUsage = 0;
  for (int i = 0; i < numMachines; i++) {
    totalUsage += usage[i];
  }
  float avgUsage = (float)totalUsage / numMachines;

  // Determine if each machine needs maintenance based on its usage relative to the average
  printf("Maintenance recommendations:\n");
  for (int i = 0; i < numMachines; i++) {
    if (usage[i] > avgUsage) {
      printf("Machine %d needs maintenance.\n", i + 1);
    } else {
      printf("Machine %d does not need maintenance.\n", i + 1);
    }
  }

  return 0;
}
