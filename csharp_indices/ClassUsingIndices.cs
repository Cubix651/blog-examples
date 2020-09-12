using System;

namespace csharp_indices
{
    public class ClassUsingIndices
    {
        public int this[Index index]
        {
            get {
                return index.IsFromEnd
                    ? -index.Value
                    : index.Value;
            }
        }

        public string this[Range range]
        {
            get
            {
                var (x, y) = range.GetOffsetAndLength(100);
                return $"{x} - {x+y}";
            }
        }
    }
}