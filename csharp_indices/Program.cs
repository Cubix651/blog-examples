using System;

namespace csharp_indices
{
    class Program
    {
        public static void Main(string[] args)
        {
            var program = new Program();
            program.SimpleExample();
            program.ExplicitExample();
            program.ImplicitExample();
        }

        private void SimpleExample()
        {
            var array = new [] {10, 20, 30, 40, 50};
            Console.WriteLine(array[^2]);
            Console.WriteLine(string.Join(", ", array[1..3]));
            Console.WriteLine(string.Join(", ", array[1..^1]));

            var index = ^1;
            Console.WriteLine($"{index} <=> Value: {index.Value}, IsFromEnd: {index.IsFromEnd}");
            var range = 1..^2;
            Console.WriteLine($"{range} <=> Start: {range.Start}, End: {range.End}");
        }

        private void ExplicitExample()
        {
            var instance = new ClassUsingIndices();
            Console.WriteLine(instance[^1]);
            Console.WriteLine(instance[2..4]);
        }

        private void ImplicitExample()
        {
            var instance = new CountableClass();
            Console.WriteLine(instance[^3]);
            Console.WriteLine(string.Join(", ", instance[90..^3]));
        }
    }
}
