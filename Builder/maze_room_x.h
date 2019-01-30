
namespace builder_p
{
	enum Direction
	{
		North,
		East,
		South,
		West,
	};

	class WallX;
	class DoorX;

	class RoomX
	{
	public:
		void SetSide(Direction dir, WallX *);
		void SetSide(Direction dir, DoorX *);
	};
}