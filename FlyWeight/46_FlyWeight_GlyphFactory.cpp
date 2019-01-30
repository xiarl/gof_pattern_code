#include "46_FlyWeight_RowColumn.h"
#include "46_FlyWeight_Character.h"
#include "46_FlyWeight_GlyphFactory.h"

namespace FlyWeightNS
{
	GlyphFactory::GlyphFactory()
	{
		for (int index = 0; index < sizeof(_character)/sizeof(Character *); ++index)
		{
			_character[index] = 0;
		}
	}

	GlyphFactory::~GlyphFactory()
	{

	}

	Character * GlyphFactory::CreateCharacter(char c)
	{
		if (! _character[c])
		{
			_character[c] = new Character(c);
		}

		return _character[c];
	}

	Row * GlyphFactory::CreateRow()
	{
		return new Row;
	}

	Column * GlyphFactory::CreateCloumn()
	{
		return new Column;
	}
}
