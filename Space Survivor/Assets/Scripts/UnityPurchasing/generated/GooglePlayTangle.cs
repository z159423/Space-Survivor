// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("sb3Sh8jH9j6X03qGnC30U3EMybCnJColFackLyenJCQlsjgMLCZ1uFRSq94eYDq0uJro6wsdDEcw2HkD/KIYVKVjH5MDIGJzRbiqlynf3zsLuvT3vJcllAgoViAHg4PHKxBYE7DhBx5PpE2+eKumjTputKNyry66rW5M5fNnD1xPMQrpj6PFE/WBFSuU43cDDKgHOc+gOlvlBZ2Th5R59RWnJAcVKCMsD6Nto9IoJCQkICUmUZKkqqkgtowuDF4jq06IacQLMv2Q5TXtOFpdbu5XmXEn1KlzY2B6+NluUqGWJhoeDBZ7qoIRSl/2kGcLdF8xOOhyvCXf0eT89BAW1EXK4Nc0Ya/unXBk0VBUwHsDEvMK4HI9UMbfmc+m7LpHWCcmJCUk");
        private static int[] order = new int[] { 6,1,13,8,7,8,11,8,11,12,12,12,13,13,14 };
        private static int key = 37;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
