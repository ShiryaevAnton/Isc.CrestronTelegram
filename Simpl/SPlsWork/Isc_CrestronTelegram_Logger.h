namespace Isc.CrestronTelegram.Logger;
        // class declarations
         class Log;
         class LoggerMessage;
         class LogLevel;
     class Log 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING _format[];

        // class properties
    };

     class LoggerMessage 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        LogLevel Level;
        STRING Message[];
        STRING TimeStamp[];
    };

    static class LogLevel // enum
    {
        static SIGNED_LONG_INTEGER Debug;
        static SIGNED_LONG_INTEGER Info;
        static SIGNED_LONG_INTEGER Error;
        static SIGNED_LONG_INTEGER Fatal;
    };

