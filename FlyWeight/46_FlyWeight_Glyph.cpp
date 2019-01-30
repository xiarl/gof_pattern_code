
#include "46_FlyWeight_BTree.h"
#include "46_FlyWeight_FontWindow.h"
#include "46_FlyWeight_GlyphContext.h"
#include "46_FlyWeight_Glyph.h"


namespace FlyWeightNS
{
	Glyph::Glyph()
	{

	}

	Glyph::~Glyph()
	{

	}

	void Glyph::Draw(Window *, GlyphContext &)
	{

	}

	void Glyph::SetFont(Font *, GlyphContext &)
	{

	}

	Font * Glyph::GetFont(GlyphContext &)
	{
		return 0;
	}

	void Glyph::First(GlyphContext &)
	{

	}
	void Glyph::Next(GlyphContext &)
	{

	}
	bool Glyph::IsDone(GlyphContext &)
	{
		return true;
	}

	Glyph * Glyph::Current(GlyphContext &)
	{
		return 0;
	}

	void Glyph::Insert(Glyph *, GlyphContext &)
	{

	}
	void Glyph::Remove(GlyphContext &)
	{

	}
}
