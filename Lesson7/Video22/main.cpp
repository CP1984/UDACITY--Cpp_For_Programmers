/*Debug the program so that it executes correctly.
**This program calculates floor or wall surface areas
**For the purpose of remodeling estimates.
**It asks a user to enter their name, phone, address
**Then enter the room they wish to remodel
**The user is asked to select a task
**then a material.
**The program will generate an estimate of
**the cost of the project.
**
**The user inputs are in the input.txt file.*/

#include "main.hpp"

int main()
{
	//Cost of materials for the remodel
	const float PAINTCOST .50 //per square foot
		const float WALLPAPERCOST 2.00 //per square foot
		const float CARPETCOST 4.00 //per square foot
		const float TILECOST 5.50 //per square foot
		const float WOODCOST 6.00 //per square foot

		//user information
		string userName = " ";
	string phoneNumber = " ";
	string userAddress = " ";
	string remodelRoom = " ";
	float roomWidth = 0;
	float roomDepth = 0;
	float roomHeight = 0;
	float wallSurfaceArea = 0;
	float floorArea = 0;
	int task = 0;

	//estimate variables
	int paintCost = 0;
	int wallpaperCost = 0;
	int carpetCost = 0;
	int tileCost = 0;
	int woodFloorCost = 0;

	//the possible task list
	enum task { paint, wallpaper, carpet, tile, woodFloor };

	getUserInformation(userName, userAddress, phoneNumber);
	remodelRoom = getRoomchoice();
	task = getTaskAssignment();

	getRoomInformation(task, roomWidth, roomDepth, roomHeight);

	//print the information of the user and room
	printJobInformation(userName, phoneNumber, userAddress, remodelRoom, task);
	printRoomInformation

		//If a wall treatment is to be done, get the wall surface area
		//assume all four walls of the room are to be redone
		if (task = paint or task = wallpaper)
		{
			//calculate and print the estimates
			wallSurfaceArea = calcWallSurfaceArea(roomWidth, roomDepth, roomHeight);
			paintCost = calcPaintCost(wallSurfaceArea);
			wallpaperCost = calcWallPaperCost(wallSurfaceArea);
			printWallCostComparisons(paintCost, wallpaperCost);
		}

	//if a floor is to be done, get the square footage of the room
	if (task == carpet or task == tile or task == woodFloor)
	{
		//calculate and print the estimates
		floorArea = calcFloorArea(roomWidth, roomDepth);
		carpetCost = calcCarpetCost(floorArea);
		tileCost = calcTileCost(floorArea);
		woodFloorCost = calcWoodFloor(floorArea);
		printFloorCostComparisons(carpetCost, tileCost, woodFloorCost);
	}
	return 0;
}
