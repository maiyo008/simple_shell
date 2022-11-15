#include <stdio.h>
#include "shape.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	box *box1;

	getDimensions(box1);
	box1->area = getArea(box1);
	box1->perimeter = getPerimeter(box1);
	box1->volume = getVolume(box1);
	printf("Properties for box1 are:\n");
	printf("Height:%d\n", box1->height);
	printf("Length:%d\n", box1->len);
	printf("Width:%d\n", box1->width);
	printf("Area:%d\n", box1->area);
	printf("Volume:%d\n", box1->volume);
	printf("Perimeter:%d\n", box1->perimeter);
	return (0);
}
/**
 * getDimensions - function to define the dimension of a box
 * @n: struct type input
 * Return: Nothing
 */
void getDimensions(box *n)
{
	n->len = 12;
	n->width = 10;
	n->height = 100;
}
/**
 * getArea - function to calculate area of one of the faces of the box
 * @n: struct type input 
 * Return: the area
 */
int getArea(box *n)
{
	unsigned int area;

	area = n->len * n->width;
	return (area);
}
/**
 * getPerimeter - function to calculate the perimeter of one of the sides of the box
 * @n: struct type input
 * Return: the perimeter
 */
int getPerimeter(box *n)
{
	return (2*(n->len + n->width));
}
/**
 * getvolume - function to calculate the volume of the box
 * @n: struct type input
 * Return: the volume
 */
int getVolume(box *n)
{
	return (n->len * n->width * n->height);
}
