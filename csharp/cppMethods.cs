using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace csharp
{
    internal static class cppMethods
    {
        const string dllPath = "cpp.dll";

        [DllImport(dllPath, EntryPoint = "DoSomethingWithAStringParameter1")]
        public static extern void DoSomethingWithAStringParameter1([MarshalAs(UnmanagedType.LPStr)] string s);

        [DllImport(dllPath, EntryPoint = "DoSomethingWithAStringParameter2")]
        public static extern void DoSomethingWithAStringParameter2(out nint strPointer, [MarshalAs(UnmanagedType.LPStr)] string s);

        [DllImport(dllPath, EntryPoint = "DoSomethingWithAStringParameter3")]
        public static extern nint DoSomethingWithAStringParameter3([MarshalAs(UnmanagedType.LPStr)] string s);
    }
}
