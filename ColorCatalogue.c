#include <stdio.h>
#include <assert.h>
#include "Color.h"


void ColorCatalogue()
{
  int colorCode = 1;
  int lMajorColorIdx;
  int lMinorColorIdx;
  
  printf(" MajorColor         MinorColor        ColorCode  \n");
  
  for( lMajorColorIdx = 0; lMajorColorIdx < numberOfMajorColors; lMajorColorIdx++ )
  {
     for( lMinorColorIdx = 0; lMinorColorIdx < numberOfMajorColors; lMinorColorIdx++ )
     {
         printf( "%s\t %s\t %d", MajorColorNames[lMajorColorIdx], MinorColorNames[lMinorColorIdx], colorCode );
         colorCode++;
     }
  }
}
