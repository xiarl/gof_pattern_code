namespace ProtoType
{
	class Door
	{
	public:
		Door * Clone()const;
		void Initialize(Room * r1, Room * r2);
	};
}