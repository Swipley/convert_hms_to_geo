Progress: 67%      If you find a new macros you can DM Swipley#0001
# Convert HMS to GEO
This simple header converts leak HMS (hierarchy map sequences) data to SM64 decomp GeoLayouts.
- **NOTE**: This is super easy to use you just need to follow 4 steps

## "Creators":
- [M A R I O](https://github.com/MarioMaster9) [Official Creator]
- [Swipley](https://github.com/swipley) [Helper]
- [Emnet](https://github.com/realemnet) [Helper]
- [Mohammed](https://github.com/noname64212) [Helper]

## How to use it?
- Step 1: Download "convert_hms_to_geo_layouts.h" from [Releases](https://github.com/Swipley/convert_hms_to_geo/releases/).
- Step 2: Put the file "convert_hms_to_geo_layout.h" inside the ```include``` folder of your decomp repo.
- Step 3: Open ```sm64.h``` on the same ```include``` folder and add `#include "convert_hms_to_geo_layouts.h"` (or you can just not do sm64.h and just include it in every group file (group(numbers)_geo.c) and (common(numbers)_geo.c) or you can just open the geo.inc.c of where you add the hms file
- Step 4: Save & run ```make VERSION=jp COMPARE=0``` ```make VERSION=us COMPARE=0``` ```make VERSION=eu COMPARE=0``` (this will re-compile some parts, so don't worry)
- Step 5: if you have a file which has hms data and gfx data together, simply add `#include "convert_hms_to_geo_layouts.h"` there.

