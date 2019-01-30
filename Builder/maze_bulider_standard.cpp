#include "maze_builder.h"
#include "maze_room_x.h"
#include "maze_bulider_standard.h"

#include "maze_part_x.h"
#include "maze_wall_x.h"
#include "maze_door_x.h"



namespace builder_p
{
	StandardMazeBuilder::StandardMazeBuilder():_currentMaze(0)
	{

	}

	void StandardMazeBuilder::BuildMaze()
	{
		_currentMaze = new MazeX;
	}


	MazeX * StandardMazeBuilder::GetMaze()
	{
		return _currentMaze;
	}

	void StandardMazeBuilder::BuildRoom(int n)
	{
		if (! _currentMaze->RoomNo(n))
		{
			RoomX * room = new RoomX;
			_currentMaze->AddRoom(room);

			room->SetSide(North, new WallX);
			room->SetSide(South, new WallX);
			room->SetSide(East, new WallX);
			room->SetSide(West, new WallX);
		}
	}

	void StandardMazeBuilder::BuildDoor(int roomFrom, int roomTo)
	{
		RoomX * r1 = _currentMaze->RoomNo(roomFrom);
		RoomX * r2 = _currentMaze->RoomNo(roomTo);
		DoorX * d = new DoorX(r1, r2);

		r1->SetSide(CommonWall(r1, r2), d);
		r2->SetSide(CommonWall(r2, r1), d);
	}

	Direction StandardMazeBuilder::CommonWall(RoomX *, RoomX *)
	{
		return East;// todo [8/20/2018 xiarl]
	}
}

