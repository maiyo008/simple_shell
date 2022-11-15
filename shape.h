#ifndef _SHAPE_H_
#define _SHAPE_H_
/**
 * struct box - represent a box
 * @len: value to represent the length
 * @width: value to represent the width
 * @Area: value to store the area
 * @volume: value to store the volume
 * @perimeter: value to store the perimeter
 * Description: a box with all featured characteristics
 */
typedef struct box
{
	unsigned int len;
	unsigned int width;
	unsigned int height;
	unsigned int area;
	unsigned int volume;
	unsigned int perimeter;
}box;
void getDimensions(box *n);
int getArea(box *n);
int getPerimeter(box *n);
int getVolume(box *n);


#endif
