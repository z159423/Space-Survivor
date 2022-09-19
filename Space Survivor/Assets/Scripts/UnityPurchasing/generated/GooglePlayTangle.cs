// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("3R4oJiWsOgCigNKvJ8IE5UiHvnE9MV4LREt6shtf9goQoXjf/YBFPNjeJ1KS7LY4NBZkZ4eRgMu8VPWPGG/7j4Aki7VDLLbXaYkRHwsY9XlwLpTYKe+TH4+s7v/JNCYbpVNTtyHiwGl/64PQw72GZQMvSZ95DZmnPG2LksMowTL0JyoBtuI4L/4jojZV4t4tGqqWkoCa9yYOncbTehzrhxxpuWG01tHiYtsV/atYJf/v7PZ0hzZ4ezAbqRiEpNqsiw8PS6ec1J8rqKapmSuoo6srqKipPrSAoKr5NLjtI2IR/Ohd3NhM94+ef4Zs/rHc+NO9tGT+MKlTXWhweJyaWMlGbFuZK6iLmaSvoIMv4S9epKioqKypqkpTFUMqYDbL1KuqqKmo");
        private static int[] order = new int[] { 12,6,13,5,8,11,11,10,9,10,11,11,13,13,14 };
        private static int key = 169;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
