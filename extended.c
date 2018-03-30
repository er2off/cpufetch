#include <stdio.h>
#include <string.h>
#include "extended.h"

char* getString_CPUName() {
  unsigned eax, ebx, ecx, edx;
  char* name = malloc(sizeof(char)*64);
  memset(name,0,64);

  //First, check we can use extended
  eax = 0x80000000;
  cpuid(&eax, &ebx, &ecx, &edx);
  if(eax < 0x80000001) {
    sprintf(name,"Unknown");
    return name;
  }


  //We can, fetch name
  eax = 0x80000002;
  cpuid(&eax, &ebx, &ecx, &edx);

  name[__COUNTER__] = eax       & MASK;
  name[__COUNTER__] = (eax>>8)  & MASK;
  name[__COUNTER__] = (eax>>16) & MASK;
  name[__COUNTER__] = (eax>>24) & MASK;
  name[__COUNTER__] = ebx       & MASK;
  name[__COUNTER__] = (ebx>>8)  & MASK;
  name[__COUNTER__] = (ebx>>16) & MASK;
  name[__COUNTER__] = (ebx>>24) & MASK;
  name[__COUNTER__] = ecx       & MASK;
  name[__COUNTER__] = (ecx>>8)  & MASK;
  name[__COUNTER__] = (ecx>>16) & MASK;
  name[__COUNTER__] = (ecx>>24) & MASK;
  name[__COUNTER__] = edx       & MASK;
  name[__COUNTER__] = (edx>>8)  & MASK;
  name[__COUNTER__] = (edx>>16) & MASK;
  name[__COUNTER__] = (edx>>24) & MASK;

  eax = 0x80000003;
  cpuid(&eax, &ebx, &ecx, &edx);

  name[__COUNTER__] = eax       & MASK;
  name[__COUNTER__] = (eax>>8)  & MASK;
  name[__COUNTER__] = (eax>>16) & MASK;
  name[__COUNTER__] = (eax>>24) & MASK;
  name[__COUNTER__] = ebx       & MASK;
  name[__COUNTER__] = (ebx>>8)  & MASK;
  name[__COUNTER__] = (ebx>>16) & MASK;
  name[__COUNTER__] = (ebx>>24) & MASK;
  name[__COUNTER__] = ecx       & MASK;
  name[__COUNTER__] = (ecx>>8)  & MASK;
  name[__COUNTER__] = (ecx>>16) & MASK;
  name[__COUNTER__] = (ecx>>24) & MASK;
  name[__COUNTER__] = edx       & MASK;
  name[__COUNTER__] = (edx>>8)  & MASK;
  name[__COUNTER__] = (edx>>16) & MASK;
  name[__COUNTER__] = (edx>>24) & MASK;

  eax = 0x80000004;
  cpuid(&eax, &ebx, &ecx, &edx);

  name[__COUNTER__] = eax       & MASK;
  name[__COUNTER__] = (eax>>8)  & MASK;
  name[__COUNTER__] = (eax>>16) & MASK;
  name[__COUNTER__] = (eax>>24) & MASK;
  name[__COUNTER__] = ebx       & MASK;
  name[__COUNTER__] = (ebx>>8)  & MASK;
  name[__COUNTER__] = (ebx>>16) & MASK;
  name[__COUNTER__] = (ebx>>24) & MASK;
  name[__COUNTER__] = ecx       & MASK;
  name[__COUNTER__] = (ecx>>8)  & MASK;
  name[__COUNTER__] = (ecx>>16) & MASK;
  name[__COUNTER__] = (ecx>>24) & MASK;
  name[__COUNTER__] = edx       & MASK;
  name[__COUNTER__] = (edx>>8)  & MASK;
  name[__COUNTER__] = (edx>>16) & MASK;
  name[__COUNTER__] = (edx>>24) & MASK;

  name[__COUNTER__] = '\0';
  return name;
}
