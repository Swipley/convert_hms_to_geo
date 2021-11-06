# Convert HMS to GEO
This simple header converts leak HMS (hierarchy map sequences) data to SM64 decomp GeoLayouts.
- **NOTE**: This is super easy to use you just need to follow 4 steps

## "Creators":
- Swipley
- PenguinMania
- Emnet

## How to use it?
- Step 1: Put the file "convert_hms_to_geo_layout.h" inside the ```include``` folder of your decomp repo.
- Step 2: Open ```sm64.h``` on the same ```include``` folder and add `#include "convert_hms_to_geo_layouts.h"`
- Step 3: Save & run ```make``` (this will re-compile some parts, so don't worry)
- Step 4: if you have a file which has hms data and gfx data together, simply add `#include "convert_hms_to_geo_layouts.h"` there.

