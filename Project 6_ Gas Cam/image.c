#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "image.h"

ImagePPM *mallocPPM(int numRows, int numCols){
    ImagePPM *pImage = malloc(sizeof(ImagePPM));
    pImage->pixels = malloc(sizeof(Pixel *) * numRows);
    for(int i = 0; i < numRows; i++)
    {
        pImage->pixels[i] = malloc(sizeof(Pixel) * numCols);
    }
    return pImage;
}

ImagePGM *mallocPGM(int numRows, int numCols){
    ImagePGM *pImage = malloc(sizeof(ImagePGM));
    pImage->pixels = malloc(sizeof(Pixel *) * numRows);
    for(int i = 0; i < numRows; i++)
    {
        pImage->pixels[i] = malloc(sizeof(Pixel) * numCols);
    }
    return pImage;
}
// open the file, create an ImagePPM, and return the pointer
// return NULL if the file cannot be opened

ImagePPM *readPPM(char *filename)
{
    FILE *fp = fopen(filename, "r");
    if(fp == NULL)
    {
        return NULL;
    }
    char magic[3];
    int numCols, numRows;
    int maxVal;

    fscanf(fp, "%s", magic);
    fscanf(fp, "%d%d", &numCols, &numRows);
    fscanf(fp, "%d", &maxVal);

    ImagePPM *pImage = mallocPPM(numRows, numCols);
    strcpy(pImage->magic, magic);
    pImage->numRows = numRows;
    pImage->numCols = numCols;
    pImage->maxVal = maxVal;

    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numCols; j++)
        {
            fscanf(fp, "%d", &pImage->pixels[i][j].red);
            fscanf(fp, "%d", &pImage->pixels[i][j].green);
            fscanf(fp, "%d", &pImage->pixels[i][j].blue);
        }
    }
    fclose(fp);
    return pImage;
}

// open the file and write the ImagePPM to the file
// return 1 on success
// return 0 if the file cannot be opened

int writePPM(ImagePPM *pImagePPM, char *filename)
{
    FILE *fp = fopen(filename, "w");
    if(fp == NULL)
    {
        return NULL;
    }

    fprintf(fp, "%s \n", pImagePPM->magic);
    fprintf(fp, "%d %d \n", pImagePPM->numCols, pImagePPM->numRows);
    fprintf(fp, "%d \n", pImagePPM->maxVal);

    for(int i = 0; i < pImagePPM->numRows; i++)
    {
        for(int j = 0; j < pImagePPM->numCols; j++)
        {
            fscanf(fp, "%4d", pImagePPM->pixels[i][j].red);
            fscanf(fp, "%4d", pImagePPM->pixels[i][j].green);
            fscanf(fp, "%4d\t", pImagePPM->pixels[i][j].blue);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 1;
}

// free the ImagePPM and its pixels
// everything with a malloc needs a free

void freePPM(ImagePPM *pImagePPM)
{
    for(int i = 0; i < pImagePPM->numRows; i++)
    {
        free(pImagePPM->pixels[i]);
    }
    free(pImagePPM->pixels);
    free(pImagePPM);
    return;
}

// open the file, create an ImagePGM, and return the pointer
// return NULL if the file cannot be opened

ImagePGM *readPGM(char *filename)
{
    FILE *fp = fopen(filename, "r");
    if(fp == NULL)
    {
        return NULL;
    }
    char magic[3];
    int numCols, numRows;
    int maxVal;

    fscanf(fp, "%s", magic);
    fscanf(fp, "%d%d", &numCols, &numRows);
    fscanf(fp, "%d", &maxVal);

    ImagePGM *pImage = mallocPGM(numRows, numCols);
    strcpy(pImage->magic, magic);
    pImage->numRows = numRows;
    pImage->numCols = numCols;
    pImage->maxVal = maxVal;

    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numCols; j++)
        {
            fscanf(fp, "%d", &pImage->pixels[i][j]);
        }
    }
    fclose(fp);
    return pImage;
}

// open the file and write the ImagePGM to the file
// return 1 on success
// return 0 if the file cannot be opened

int writePGM(ImagePGM *pImagePGM, char *filename)
{
    FILE *fp = fopen(filename, "w");
    if(fp == NULL)
    {
        return NULL;
    }

    fprintf(fp, "%s \n", pImagePGM->magic);
    fprintf(fp, "%d %d \n", pImagePGM->numCols, pImagePGM->numRows);
    fprintf(fp, "%d \n", pImagePGM->maxVal);

    for(int i = 0; i < pImagePGM->numRows; i++)
    {
        for(int j = 0; j < pImagePGM->numCols; j++)
        {
            fscanf(fp, "%4d", pImagePGM->pixels[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 1; 
}

// free the ImagePGM and its pixels
// everything with a malloc needs a free

void freePGM(ImagePGM *pImagePGM)
{
    for(int i = 0; i < pImagePGM->numRows; i++)
    {
        free(pImagePGM->pixels[i]);
    }
    free(pImagePGM->pixels);
    free(pImagePGM);
    return;
    return;
}

ImagePGM *convertToPGM(ImagePPM *pImagePPM)
{
    ImagePGM *pNew = mallocPGM(pImagePPM->numCols, pImagePPM->numRows);
    strcpy(pNew->magic, "P2");
    pNew->numRows = pImagePPM->numRows;
    pNew->numCols = pImagePPM->numCols;
    pNew->maxVal = pImagePPM->maxVal;

    Pixel *pix;
    for(int i = 0)
    {
        for()
        {
            fscanf(pNew, )
        }
    }
    return pNew;
}

ImagePGM *shrinkPGM(ImagePGM *pImagePGM)
{
    return NULL;
}
