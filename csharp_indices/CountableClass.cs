using System.Linq;

namespace csharp_indices
{
    public class CountableClass
    {
        public int this[int index] => index;
        public int Length => 100;

        public int[] Slice(int start, int length) => Enumerable.Range(start, length).ToArray();
    }
}