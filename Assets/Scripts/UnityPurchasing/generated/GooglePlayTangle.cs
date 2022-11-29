// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("g9I0LXyXfo1LmJW+CV2HkEGcHYmCjuG0+/TFDaTgSbWvHsdgQj/6g2dhmO0tUwmHi6nb2DguP3QD60owYqGXmZoThb8dP20QmH27Wvc4Ac6eXX/WwFQ8b3wCOdq8kPYgxrImGKfQRDA/mzQK/JMJaNY2rqC0p0rGOInHxI+kFqc7G2UTNLCw9BgjayAmlBc0JhsQHzyQXpDhGxcXFxMWFZQXGRYmlBccFJQXFxaBCz8fFUaLR2wCC9tBjxbs4tfPxyMl53b50+QHUpzdrkNX4mNn80gwIcA500EOY6PWBt4LaW5d3WSqQhTnmkBQU0nL6l1hkqUVKS0/JUiZsSJ5bMWjVDjPkStnllAsoDATUUB2i5mkGuzsCPXsqvyV34l0axQVFxYX");
        private static int[] order = new int[] { 3,6,13,12,11,5,7,12,12,13,11,13,13,13,14 };
        private static int key = 22;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
