#include <stdio.h>
#include <string.h>
//see flowchart
int main(){
    printf("Enter a cardinal direction:\n");
    char dir[6];
    scanf("%s", &dir);

    //north path
    if(strcmp(dir, "north") == 0)
    {
        printf("you chose north\n");
        printf("enter a positive integer:\n");
        int intNorth;
        scanf("%d", &intNorth);
        if(intNorth % 2 == 0)
        {
            printf("yes or no\n");
            char yonNorth[4];
            scanf("%s", &yonNorth);
            if(strcmp(yonNorth, "yes") == 0)
            {
                printf("lake\n");
            }
            else if(strcmp(yonNorth, "no") == 0)
            {
                printf("pool\n");
            }
        }
        else if(intNorth % 2 != 0) 
        {
            printf("beach\n");
        }
    }

    //south path
    if(strcmp(dir, "south") == 0)
    {
        printf("you chose south\n");
        printf("left or right:\n");
        char lorSouth[6];
        scanf("%s", &lorSouth);
        if(strcmp(lorSouth, "left") == 0)
        {
            printf("jog\n");
        }
        else if(strcmp(lorSouth, "right") == 0)
        {
            printf("fast or slow:\n");
            char fosSouth[5];
            scanf("%s", &fosSouth);
            if(strcmp(fosSouth, "fast") == 0)
            {
                printf("bike\n");
            }
            else if(strcmp(fosSouth, "slow") == 0)
            {
                printf("big or small:\n");
                char bosSouth[6];
                scanf("%s", &bosSouth);
                if(strcmp(bosSouth, "big") == 0)
                {
                    printf("run\n");
                }
                else if(strcmp(bosSouth, "small") == 0)
                {
                    printf("walk\n");
                }
            }
        }
    }

    //east path
    if(strcmp(dir, "east") == 0)
    {
        printf("choose a color:\n");
        char cEast[6];
        scanf("%s", &cEast);

        //red path
        if(strcmp(cEast, "red") == 0)
        {
            printf("yes or no:\n");
            char yonEast[4];
            scanf("%s", &yonEast);
            if(strcmp(yonEast, "yes") == 0)
            {
                printf("tree-climb\n");
            }
            else if(strcmp(yonEast, "no") == 0)
            {
                printf("up or down:\n");
                char uodEast[5];
                scanf("%s", &uodEast);
                if(strcmp(uodEast, "up") == 0)
                {
                    printf("top-rope\n");
                }
                else if(strcmp(uodEast, "down") == 0)
                {
                    printf("boulder\n");
                }
            }
        }

        //white path
        else if(strcmp(cEast, "white") == 0)
        {
            printf("easy or hard:\n");
            char eohEast[5];
            scanf("%s", &eohEast);
            if(strcmp(eohEast, "easy") == 0)
            {
                printf("longboard\n");
            }
            else if(strcmp(eohEast, "hard") == 0)
            {
                printf("workout\n");
            }
        }

        //gray path
        else if(strcmp(cEast, "gray") == 0)
        {
            printf("left, center, or right:\n");
            char lcrEast[7];
            scanf("%s", &lcrEast);
            if(strcmp(lcrEast, "left") == 0)
            {
                printf("build or destroy:\n");
                char bodEast[8];
                scanf("%s", &bodEast);
                if(strcmp(bodEast, "build") == 0)
                {
                    printf("hike\n");
                }
                else if(strcmp(bodEast, "destroy") == 0)
                {
                    printf("spelunk\n");
                }
            }
            else if(strcmp(lcrEast, "center") == 0)
            {
                printf("open or closed:\n");
                char oocEast[7];
                scanf("%s", &oocEast);
                if(strcmp(oocEast, "open") == 0)
                {
                    printf("zoo\n");
                }
                else if(strcmp(oocEast, "closed") == 0)
                {
                    printf("aquarium\n");
                }
            }
            else if(strcmp(lcrEast, "right") == 0)
            {
                printf("museum\n");
            }
        }
    }

    //west path
    if(strcmp(dir, "west") == 0)
    {
        printf("enter an integer:\n");
        int intWest;
        scanf("%d", &intWest);
        if(intWest >= 0 )
        {
            printf("frisbee\n");
        }
        else
        {
            printf("sunny or cloudy:\n");
            char socWest[7];
            scanf("%s", &socWest);
            if(strcmp(socWest, "sunny") == 0)
            {
                printf("tennis\n");
            }
            else if(strcmp(socWest, "cloudy") == 0)
            {
                printf("racquetball\n");
            }
        }        
    }
    return 0;
}