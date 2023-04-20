namespace Isc.CrestronTelegram.Simpl;
        // class declarations
         class SimplApi;
         class SimplStringEventArg;
     class SimplApi 
    {
        // class delegates

        // class events
        EventHandler SimplStringEvent ( SimplApi sender, SimplStringEventArg args );

        // class functions
        FUNCTION Init ( STRING apiKey );
        FUNCTION SendDigital ( STRING format , INTEGER value );
        FUNCTION SendAnalog ( STRING format , INTEGER value );
        FUNCTION SendString ( STRING format , STRING value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class SimplStringEventArg 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Message[];
    };

