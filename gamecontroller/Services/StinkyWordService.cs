using ProfanityFilter;

namespace gamecontroller.Services
{
	public class StinkyWordService
	{
		public bool StringContainsNoNoWords(string theString)
		{
			ProfanityFilter.ProfanityFilter filter = new ProfanityFilter.ProfanityFilter();
			filter.RemoveProfanity("wog"); // GWOG IS SLUR CONFIRMED???? WTF????
			return filter.ContainsProfanity(theString);
		}
	}
}
