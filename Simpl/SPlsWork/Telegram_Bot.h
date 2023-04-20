namespace Telegram.Bot;
        // class declarations
         class TelegramBotClient;
         class TelegramBotClientExtensions;
         class TelegramBotClientOptions;
    static class TelegramBotClientExtensions 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Telegram.Bot.Types;
        // class declarations
         class Animation;
         class Audio;
         class BotCommand;
         class BotCommandScope;
         class BotCommandScopeDefault;
         class BotCommandScopeAllPrivateChats;
         class BotCommandScopeAllGroupChats;
         class BotCommandScopeAllChatAdministrators;
         class BotCommandScopeChat;
         class BotCommandScopeChatAdministrators;
         class BotCommandScopeChatMember;
         class CallbackGame;
         class CallbackQuery;
         class Chat;
         class ChatAdministratorRights;
         class ChatId;
         class ChatInviteLink;
         class ChatJoinRequest;
         class ChatLocation;
         class ChatMember;
         class ChatMemberOwner;
         class ChatMemberAdministrator;
         class ChatMemberMember;
         class ChatMemberRestricted;
         class ChatMemberLeft;
         class ChatMemberBanned;
         class ChatMemberUpdated;
         class ChatPermissions;
         class ChatPhoto;
         class ChosenInlineResult;
         class Contact;
         class Dice;
         class Document;
         class File;
         class FileBase;
         class Game;
         class GameHighScore;
         class InlineQuery;
         class InputMedia;
         class InputMediaAnimation;
         class InputMediaAudio;
         class InputMediaBase;
         class InputMediaDocument;
         class InputMediaPhoto;
         class InputMediaVideo;
         class Location;
         class LoginUrl;
         class MaskPosition;
         class MenuButton;
         class MenuButtonCommands;
         class MenuButtonWebApp;
         class MenuButtonDefault;
         class Message;
         class MessageAutoDeleteTimerChanged;
         class MessageEntity;
         class MessageId;
         class PhotoSize;
         class Poll;
         class PollAnswer;
         class PollOption;
         class ProximityAlertTriggered;
         class ResponseParameters;
         class SentWebAppMessage;
         class Sticker;
         class StickerSet;
         class Update;
         class User;
         class UserProfilePhotos;
         class Venue;
         class Video;
         class VideoChatEnded;
         class VideoChatParticipantsInvited;
         class VideoChatScheduled;
         class VideoChatStarted;
         class VideoNote;
         class Voice;
         class VoiceChatEnded;
         class VoiceChatParticipantsInvited;
         class VoiceChatScheduled;
         class VoiceChatStarted;
         class WebAppData;
         class WebAppInfo;
         class WebhookInfo;
           class BotCommandScopeType;
           class ChatType;
           class ChatMemberStatus;
           class FileType;
           class InputMediaType;
           class MaskPositionPoint;
           class MenuButtonType;
           class Invoice;
           class SuccessfulPayment;
           class PassportData;
           class InlineKeyboardMarkup;
           class MessageType;
           class MessageEntityType;
           class ShippingQuery;
           class PreCheckoutQuery;
           class UpdateType;
     class Animation 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Width;
        SIGNED_LONG_INTEGER Height;
        SIGNED_LONG_INTEGER Duration;
        PhotoSize Thumb;
        STRING FileName[];
        STRING MimeType[];
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class Audio 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Duration;
        STRING Performer[];
        STRING Title[];
        STRING FileName[];
        STRING MimeType[];
        PhotoSize Thumb;
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class BotCommand 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Command[];
        STRING Description[];
    };

     class BotCommandScope 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScopeType Type;
    };

     class BotCommandScopeDefault 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScopeType Type;
    };

     class BotCommandScopeAllPrivateChats 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScopeType Type;
    };

     class BotCommandScopeAllGroupChats 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScopeType Type;
    };

     class BotCommandScopeAllChatAdministrators 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScopeType Type;
    };

     class BotCommandScopeChat 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScopeType Type;
        ChatId ChatId;
    };

     class BotCommandScopeChatAdministrators 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScopeType Type;
        ChatId ChatId;
    };

     class BotCommandScopeChatMember 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScopeType Type;
        ChatId ChatId;
    };

     class CallbackGame 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class CallbackQuery 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        User From;
        Message Message;
        STRING InlineMessageId[];
        STRING ChatInstance[];
        STRING Data[];
        STRING GameShortName[];
    };

     class Chat 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ChatType Type;
        STRING Title[];
        STRING Username[];
        STRING FirstName[];
        STRING LastName[];
        ChatPhoto Photo;
        STRING Bio[];
        STRING Description[];
        STRING InviteLink[];
        Message PinnedMessage;
        ChatPermissions Permissions;
        STRING StickerSetName[];
        ChatLocation Location;
    };

     class ChatAdministratorRights 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class ChatInviteLink 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING InviteLink[];
        User Creator;
        STRING Name[];
    };

     class ChatJoinRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        Chat Chat;
        User From;
        STRING Bio[];
        ChatInviteLink InviteLink;
    };

     class ChatLocation 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        Location Location;
        STRING Address[];
    };

     class ChatMember 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ChatMemberStatus Status;
        User User;
    };

     class ChatMemberOwner 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ChatMemberStatus Status;
        STRING CustomTitle[];
        User User;
    };

     class ChatMemberAdministrator 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ChatMemberStatus Status;
        STRING CustomTitle[];
        User User;
    };

     class ChatMemberMember 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ChatMemberStatus Status;
        User User;
    };

     class ChatMemberRestricted 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ChatMemberStatus Status;
        User User;
    };

     class ChatMemberLeft 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ChatMemberStatus Status;
        User User;
    };

     class ChatMemberBanned 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ChatMemberStatus Status;
        User User;
    };

     class ChatMemberUpdated 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        Chat Chat;
        User From;
        ChatMember OldChatMember;
        ChatMember NewChatMember;
        ChatInviteLink InviteLink;
    };

     class ChatPermissions 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class ChatPhoto 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING SmallFileId[];
        STRING SmallFileUniqueId[];
        STRING BigFileId[];
        STRING BigFileUniqueId[];
    };

     class ChosenInlineResult 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ResultId[];
        User From;
        Location Location;
        STRING InlineMessageId[];
        STRING Query[];
    };

     class Contact 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING PhoneNumber[];
        STRING FirstName[];
        STRING LastName[];
        STRING Vcard[];
    };

     class Dice 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Emoji[];
        SIGNED_LONG_INTEGER Value;
    };

     class Document 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        PhotoSize Thumb;
        STRING FileName[];
        STRING MimeType[];
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class File 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING FilePath[];
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class FileBase 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class Game 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Title[];
        STRING Description[];
        PhotoSize Photo[];
        STRING Text[];
        MessageEntity TextEntities[];
        Animation Animation;
    };

     class GameHighScore 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Position;
        User User;
        SIGNED_LONG_INTEGER Score;
    };

     class InlineQuery 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        User From;
        STRING Query[];
        STRING Offset[];
        Location Location;
    };

     class InputMediaBase 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        InputMediaType Type;
        InputMedia Media;
        STRING Caption[];
        MessageEntity CaptionEntities[];
    };

     class Location 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class LoginUrl 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Url[];
        STRING ForwardText[];
        STRING BotUsername[];
    };

     class MaskPosition 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MaskPositionPoint Point;
    };

     class MenuButton 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MenuButtonType Type;
    };

     class MenuButtonCommands 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MenuButtonType Type;
    };

     class MenuButtonWebApp 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MenuButtonType Type;
        STRING Text[];
        WebAppInfo WebApp;
    };

     class MenuButtonDefault 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MenuButtonType Type;
    };

     class Message 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER MessageId;
        User From;
        Chat SenderChat;
        Chat Chat;
        User ForwardFrom;
        Chat ForwardFromChat;
        STRING ForwardSignature[];
        STRING ForwardSenderName[];
        Message ReplyToMessage;
        User ViaBot;
        STRING MediaGroupId[];
        STRING AuthorSignature[];
        STRING Text[];
        MessageEntity Entities[];
        Animation Animation;
        Audio Audio;
        Document Document;
        PhotoSize Photo[];
        Sticker Sticker;
        Video Video;
        VideoNote VideoNote;
        Voice Voice;
        STRING Caption[];
        MessageEntity CaptionEntities[];
        Contact Contact;
        Dice Dice;
        Game Game;
        Poll Poll;
        Venue Venue;
        Location Location;
        User NewChatMembers[];
        User LeftChatMember;
        STRING NewChatTitle[];
        PhotoSize NewChatPhoto[];
        MessageAutoDeleteTimerChanged MessageAutoDeleteTimerChanged;
        Message PinnedMessage;
        Invoice Invoice;
        SuccessfulPayment SuccessfulPayment;
        STRING ConnectedWebsite[];
        PassportData PassportData;
        ProximityAlertTriggered ProximityAlertTriggered;
        VideoChatScheduled VideoChatScheduled;
        VideoChatStarted VideoChatStarted;
        VideoChatEnded VideoChatEnded;
        VideoChatParticipantsInvited VideoChatParticipantsInvited;
        WebAppData WebAppData;
        InlineKeyboardMarkup ReplyMarkup;
        MessageType Type;
    };

     class MessageAutoDeleteTimerChanged 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER MessageAutoDeleteTime;
    };

     class MessageEntity 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MessageEntityType Type;
        SIGNED_LONG_INTEGER Offset;
        SIGNED_LONG_INTEGER Length;
        STRING Url[];
        User User;
        STRING Language[];
    };

     class MessageId 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Id;
    };

     class PhotoSize 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Width;
        SIGNED_LONG_INTEGER Height;
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class Poll 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        STRING Question[];
        PollOption Options[];
        SIGNED_LONG_INTEGER TotalVoterCount;
        STRING Type[];
        STRING Explanation[];
        MessageEntity ExplanationEntities[];
    };

     class PollAnswer 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING PollId[];
        User User;
        SIGNED_LONG_INTEGER OptionIds[];
    };

     class PollOption 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Text[];
        SIGNED_LONG_INTEGER VoterCount;
    };

     class ProximityAlertTriggered 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        User Traveler;
        User Watcher;
        SIGNED_LONG_INTEGER Distance;
    };

     class ResponseParameters 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class SentWebAppMessage 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING InlineMessageId[];
    };

     class Sticker 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Width;
        SIGNED_LONG_INTEGER Height;
        PhotoSize Thumb;
        STRING Emoji[];
        STRING SetName[];
        MaskPosition MaskPosition;
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class StickerSet 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Name[];
        STRING Title[];
        Sticker Stickers[];
        PhotoSize Thumb;
    };

     class Update 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Id;
        Message Message;
        Message EditedMessage;
        Message ChannelPost;
        Message EditedChannelPost;
        InlineQuery InlineQuery;
        ChosenInlineResult ChosenInlineResult;
        CallbackQuery CallbackQuery;
        ShippingQuery ShippingQuery;
        PreCheckoutQuery PreCheckoutQuery;
        Poll Poll;
        PollAnswer PollAnswer;
        ChatMemberUpdated MyChatMember;
        ChatMemberUpdated ChatMember;
        ChatJoinRequest ChatJoinRequest;
        UpdateType Type;
    };

     class User 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING FirstName[];
        STRING LastName[];
        STRING Username[];
        STRING LanguageCode[];
    };

     class UserProfilePhotos 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER TotalCount;
        PhotoSize Photos;
    };

     class Venue 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        Location Location;
        STRING Title[];
        STRING Address[];
        STRING FoursquareId[];
        STRING FoursquareType[];
        STRING GooglePlaceId[];
        STRING GooglePlaceType[];
    };

     class Video 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Width;
        SIGNED_LONG_INTEGER Height;
        SIGNED_LONG_INTEGER Duration;
        PhotoSize Thumb;
        STRING FileName[];
        STRING MimeType[];
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class VideoChatEnded 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Duration;
    };

     class VideoChatParticipantsInvited 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        User Users[];
    };

     class VideoChatScheduled 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class VideoChatStarted 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class VideoNote 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Length;
        SIGNED_LONG_INTEGER Duration;
        PhotoSize Thumb;
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class Voice 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Duration;
        STRING MimeType[];
        STRING FileId[];
        STRING FileUniqueId[];
    };

     class VoiceChatEnded 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Duration;
    };

     class VoiceChatParticipantsInvited 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        User Users[];
    };

     class VoiceChatScheduled 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class VoiceChatStarted 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class WebAppData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Data[];
        STRING ButtonText[];
    };

     class WebAppInfo 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Url[];
    };

     class WebhookInfo 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Url[];
        SIGNED_LONG_INTEGER PendingUpdateCount;
        STRING IpAddress[];
        STRING LastErrorMessage[];
        UpdateType AllowedUpdates;
    };

namespace Telegram.Bot.Types.ReplyMarkups;
        // class declarations
         class ForceReplyMarkup;
         class InlineKeyboardButton;
         class InlineKeyboardMarkup;
         class KeyboardButton;
         class KeyboardButtonPollType;
         class ReplyKeyboardMarkup;
         class ReplyKeyboardRemove;
         class ReplyMarkupBase;
     class ForceReplyMarkup 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING InputFieldPlaceholder[];
    };

     class KeyboardButtonPollType 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Type[];
    };

     class ReplyKeyboardRemove 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class ReplyMarkupBase 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Telegram.Bot.Types.Payments;
        // class declarations
         class Invoice;
         class LabeledPrice;
         class OrderInfo;
         class PreCheckoutQuery;
         class ShippingAddress;
         class ShippingOption;
         class ShippingQuery;
         class SuccessfulPayment;
     class Invoice 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Title[];
        STRING Description[];
        STRING StartParameter[];
        STRING Currency[];
        SIGNED_LONG_INTEGER TotalAmount;
    };

     class OrderInfo 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Name[];
        STRING PhoneNumber[];
        STRING Email[];
        ShippingAddress ShippingAddress;
    };

     class PreCheckoutQuery 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        User From;
        STRING Currency[];
        SIGNED_LONG_INTEGER TotalAmount;
        STRING InvoicePayload[];
        STRING ShippingOptionId[];
        OrderInfo OrderInfo;
    };

     class ShippingAddress 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING CountryCode[];
        STRING State[];
        STRING City[];
        STRING StreetLine1[];
        STRING StreetLine2[];
        STRING PostCode[];
    };

     class ShippingOption 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        STRING Title[];
        LabeledPrice Prices[];
    };

     class ShippingQuery 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        User From;
        STRING InvoicePayload[];
        ShippingAddress ShippingAddress;
    };

     class SuccessfulPayment 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Currency[];
        SIGNED_LONG_INTEGER TotalAmount;
        STRING InvoicePayload[];
        STRING ShippingOptionId[];
        OrderInfo OrderInfo;
        STRING TelegramPaymentChargeId[];
        STRING ProviderPaymentChargeId[];
    };

namespace Telegram.Bot.Types.Passport;
        // class declarations
         class EncryptedCredentials;
         class EncryptedPassportElement;
         class EncryptedPassportElementType;
         class PassportData;
         class PassportFile;
     class EncryptedCredentials 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Data[];
        STRING Hash[];
        STRING Secret[];
    };

     class EncryptedPassportElement 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        EncryptedPassportElementType Type;
        STRING Data[];
        STRING PhoneNumber[];
        STRING Email[];
        PassportFile Files[];
        PassportFile FrontSide;
        PassportFile ReverseSide;
        PassportFile Selfie;
        PassportFile Translation[];
        STRING Hash[];
    };

    static class EncryptedPassportElementType // enum
    {
        static SIGNED_LONG_INTEGER PersonalDetails;
        static SIGNED_LONG_INTEGER Passport;
        static SIGNED_LONG_INTEGER DriverLicence;
        static SIGNED_LONG_INTEGER IdentityCard;
        static SIGNED_LONG_INTEGER InternalPassport;
        static SIGNED_LONG_INTEGER Address;
        static SIGNED_LONG_INTEGER UtilityBill;
        static SIGNED_LONG_INTEGER BankStatement;
        static SIGNED_LONG_INTEGER RentalAgreement;
        static SIGNED_LONG_INTEGER PassportRegistration;
        static SIGNED_LONG_INTEGER TemporaryRegistration;
        static SIGNED_LONG_INTEGER PhoneNumber;
        static SIGNED_LONG_INTEGER Email;
    };

     class PassportData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        EncryptedPassportElement Data[];
        EncryptedCredentials Credentials;
    };

     class PassportFile 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING FileId[];
        STRING FileUniqueId[];
    };

namespace Telegram.Bot.Types.InputFiles;
        // class declarations
         class InputFileStream;
         class InputOnlineFile;
         class InputTelegramFile;

namespace Telegram.Bot.Types.InlineQueryResults;
        // class declarations
         class InlineQueryResult;
         class InlineQueryResultArticle;
         class InlineQueryResultAudio;
         class InlineQueryResultCachedAudio;
         class InlineQueryResultCachedDocument;
         class InlineQueryResultCachedGif;
         class InlineQueryResultCachedMpeg4Gif;
         class InlineQueryResultCachedPhoto;
         class InlineQueryResultCachedSticker;
         class InlineQueryResultCachedVideo;
         class InlineQueryResultCachedVoice;
         class InlineQueryResultContact;
         class InlineQueryResultDocument;
         class InlineQueryResultGame;
         class InlineQueryResultGif;
         class InlineQueryResultLocation;
         class InlineQueryResultMpeg4Gif;
         class InlineQueryResultPhoto;
         class InlineQueryResultType;
         class InlineQueryResultVenue;
         class InlineQueryResultVideo;
         class InlineQueryResultVoice;
         class InputContactMessageContent;
         class InputInvoiceMessageContent;
         class InputLocationMessageContent;
         class InputMessageContent;
         class InputTextMessageContent;
         class InputVenueMessageContent;
     class InlineQueryResult 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        InlineQueryResultType Type;
        STRING Id[];
        InlineKeyboardMarkup ReplyMarkup;
    };

    static class InlineQueryResultType // enum
    {
        static SIGNED_LONG_INTEGER Article;
        static SIGNED_LONG_INTEGER Photo;
        static SIGNED_LONG_INTEGER Gif;
        static SIGNED_LONG_INTEGER Mpeg4Gif;
        static SIGNED_LONG_INTEGER Video;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER Contact;
        static SIGNED_LONG_INTEGER Document;
        static SIGNED_LONG_INTEGER Location;
        static SIGNED_LONG_INTEGER Venue;
        static SIGNED_LONG_INTEGER Voice;
        static SIGNED_LONG_INTEGER Game;
        static SIGNED_LONG_INTEGER Sticker;
    };

     class InputMessageContent 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Telegram.Bot.Types.Enums;
        // class declarations
         class BotCommandScopeType;
         class ChatAction;
         class ChatMemberStatus;
         class ChatType;
         class Emoji;
         class FileType;
         class InputMediaType;
         class MaskPositionPoint;
         class MenuButtonType;
         class MessageEntityType;
         class MessageType;
         class ParseMode;
         class PollType;
         class UpdateType;
    static class BotCommandScopeType // enum
    {
        static SIGNED_LONG_INTEGER Default;
        static SIGNED_LONG_INTEGER AllPrivateChats;
        static SIGNED_LONG_INTEGER AllGroupChats;
        static SIGNED_LONG_INTEGER AllChatAdministrators;
        static SIGNED_LONG_INTEGER Chat;
        static SIGNED_LONG_INTEGER ChatAdministrators;
        static SIGNED_LONG_INTEGER ChatMember;
    };

    static class ChatAction // enum
    {
        static SIGNED_LONG_INTEGER Typing;
        static SIGNED_LONG_INTEGER UploadPhoto;
        static SIGNED_LONG_INTEGER RecordVideo;
        static SIGNED_LONG_INTEGER UploadVideo;
        static SIGNED_LONG_INTEGER RecordVoice;
        static SIGNED_LONG_INTEGER UploadVoice;
        static SIGNED_LONG_INTEGER UploadDocument;
        static SIGNED_LONG_INTEGER FindLocation;
        static SIGNED_LONG_INTEGER RecordVideoNote;
        static SIGNED_LONG_INTEGER UploadVideoNote;
        static SIGNED_LONG_INTEGER ChooseSticker;
    };

    static class ChatMemberStatus // enum
    {
        static SIGNED_LONG_INTEGER Creator;
        static SIGNED_LONG_INTEGER Administrator;
        static SIGNED_LONG_INTEGER Member;
        static SIGNED_LONG_INTEGER Left;
        static SIGNED_LONG_INTEGER Kicked;
        static SIGNED_LONG_INTEGER Restricted;
    };

    static class ChatType // enum
    {
        static SIGNED_LONG_INTEGER Private;
        static SIGNED_LONG_INTEGER Group;
        static SIGNED_LONG_INTEGER Channel;
        static SIGNED_LONG_INTEGER Supergroup;
        static SIGNED_LONG_INTEGER Sender;
    };

    static class Emoji // enum
    {
        static SIGNED_LONG_INTEGER Dice;
        static SIGNED_LONG_INTEGER Darts;
        static SIGNED_LONG_INTEGER Basketball;
        static SIGNED_LONG_INTEGER Football;
        static SIGNED_LONG_INTEGER SlotMachine;
        static SIGNED_LONG_INTEGER Bowling;
    };

    static class FileType // enum
    {
        static SIGNED_LONG_INTEGER Stream;
        static SIGNED_LONG_INTEGER Id;
        static SIGNED_LONG_INTEGER Url;
    };

    static class InputMediaType // enum
    {
        static SIGNED_LONG_INTEGER Photo;
        static SIGNED_LONG_INTEGER Video;
        static SIGNED_LONG_INTEGER Animation;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER Document;
    };

    static class MaskPositionPoint // enum
    {
        static SIGNED_LONG_INTEGER Forehead;
        static SIGNED_LONG_INTEGER Eyes;
        static SIGNED_LONG_INTEGER Mouth;
        static SIGNED_LONG_INTEGER Chin;
    };

    static class MenuButtonType // enum
    {
        static SIGNED_LONG_INTEGER Default;
        static SIGNED_LONG_INTEGER Commands;
        static SIGNED_LONG_INTEGER WebApp;
    };

    static class MessageEntityType // enum
    {
        static SIGNED_LONG_INTEGER Mention;
        static SIGNED_LONG_INTEGER Hashtag;
        static SIGNED_LONG_INTEGER BotCommand;
        static SIGNED_LONG_INTEGER Url;
        static SIGNED_LONG_INTEGER Email;
        static SIGNED_LONG_INTEGER Bold;
        static SIGNED_LONG_INTEGER Italic;
        static SIGNED_LONG_INTEGER Code;
        static SIGNED_LONG_INTEGER Pre;
        static SIGNED_LONG_INTEGER TextLink;
        static SIGNED_LONG_INTEGER TextMention;
        static SIGNED_LONG_INTEGER PhoneNumber;
        static SIGNED_LONG_INTEGER Cashtag;
        static SIGNED_LONG_INTEGER Underline;
        static SIGNED_LONG_INTEGER Strikethrough;
        static SIGNED_LONG_INTEGER Spoiler;
    };

    static class MessageType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Text;
        static SIGNED_LONG_INTEGER Photo;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER Video;
        static SIGNED_LONG_INTEGER Voice;
        static SIGNED_LONG_INTEGER Document;
        static SIGNED_LONG_INTEGER Sticker;
        static SIGNED_LONG_INTEGER Location;
        static SIGNED_LONG_INTEGER Contact;
        static SIGNED_LONG_INTEGER Venue;
        static SIGNED_LONG_INTEGER Game;
        static SIGNED_LONG_INTEGER VideoNote;
        static SIGNED_LONG_INTEGER Invoice;
        static SIGNED_LONG_INTEGER SuccessfulPayment;
        static SIGNED_LONG_INTEGER WebsiteConnected;
        static SIGNED_LONG_INTEGER ChatMembersAdded;
        static SIGNED_LONG_INTEGER ChatMemberLeft;
        static SIGNED_LONG_INTEGER ChatTitleChanged;
        static SIGNED_LONG_INTEGER ChatPhotoChanged;
        static SIGNED_LONG_INTEGER MessagePinned;
        static SIGNED_LONG_INTEGER ChatPhotoDeleted;
        static SIGNED_LONG_INTEGER GroupCreated;
        static SIGNED_LONG_INTEGER SupergroupCreated;
        static SIGNED_LONG_INTEGER ChannelCreated;
        static SIGNED_LONG_INTEGER MigratedToSupergroup;
        static SIGNED_LONG_INTEGER MigratedFromGroup;
        static SIGNED_LONG_INTEGER Poll;
        static SIGNED_LONG_INTEGER Dice;
        static SIGNED_LONG_INTEGER MessageAutoDeleteTimerChanged;
        static SIGNED_LONG_INTEGER ProximityAlertTriggered;
        static SIGNED_LONG_INTEGER WebAppData;
        static SIGNED_LONG_INTEGER VideoChatScheduled;
        static SIGNED_LONG_INTEGER VideoChatStarted;
        static SIGNED_LONG_INTEGER VideoChatEnded;
        static SIGNED_LONG_INTEGER VideoChatParticipantsInvited;
    };

    static class ParseMode // enum
    {
        static SIGNED_LONG_INTEGER Markdown;
        static SIGNED_LONG_INTEGER Html;
        static SIGNED_LONG_INTEGER MarkdownV2;
    };

    static class PollType // enum
    {
        static SIGNED_LONG_INTEGER Regular;
        static SIGNED_LONG_INTEGER Quiz;
    };

    static class UpdateType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Message;
        static SIGNED_LONG_INTEGER InlineQuery;
        static SIGNED_LONG_INTEGER ChosenInlineResult;
        static SIGNED_LONG_INTEGER CallbackQuery;
        static SIGNED_LONG_INTEGER EditedMessage;
        static SIGNED_LONG_INTEGER ChannelPost;
        static SIGNED_LONG_INTEGER EditedChannelPost;
        static SIGNED_LONG_INTEGER ShippingQuery;
        static SIGNED_LONG_INTEGER PreCheckoutQuery;
        static SIGNED_LONG_INTEGER Poll;
        static SIGNED_LONG_INTEGER PollAnswer;
        static SIGNED_LONG_INTEGER MyChatMember;
        static SIGNED_LONG_INTEGER ChatMember;
        static SIGNED_LONG_INTEGER ChatJoinRequest;
    };

namespace Telegram.Bot.Requests;
        // class declarations
         class AnswerCallbackQueryRequest;
         class DeleteMyCommandsRequest;
         class GetMyCommandsRequest;
         class SetMyCommandsRequest;
         class GetFileRequest;
         class GetUserProfilePhotosRequest;
         class GetChatMenuButtonRequest;
         class GetMeRequest;
         class GetMyDefaultAdministratorRightsRequest;
         class CloseRequest;
         class LogOutRequest;
         class BanChatMemberRequest;
         class BanChatSenderChatRequest;
         class ApproveChatJoinRequest;
         class CreateChatInviteLinkRequest;
         class DeclineChatJoinRequest;
         class EditChatInviteLinkRequest;
         class ExportChatInviteLinkRequest;
         class RevokeChatInviteLinkRequest;
         class DeleteChatPhotoRequest;
         class DeleteChatStickerSetRequest;
         class GetChatAdministratorsRequest;
         class GetChatMemberCountRequest;
         class GetChatMemberRequest;
         class GetChatMembersCountRequest;
         class GetChatRequest;
         class KickChatMemberRequest;
         class LeaveChatRequest;
         class PinChatMessageRequest;
         class PromoteChatMemberRequest;
         class RestrictChatMemberRequest;
         class SetChatAdministratorCustomTitleRequest;
         class SetChatDescriptionRequest;
         class SetChatPermissionsRequest;
         class SetChatPhotoRequest;
         class SetChatStickerSetRequest;
         class SetChatTitleRequest;
         class UnbanChatMemberRequest;
         class UnbanChatSenderChatRequest;
         class UnpinAllChatMessagesRequest;
         class UnpinChatMessageRequest;
         class CopyMessageRequest;
         class ForwardMessageRequest;
         class EditInlineMessageLiveLocationRequest;
         class EditMessageLiveLocationRequest;
         class SendLocationRequest;
         class SendVenueRequest;
         class StopInlineMessageLiveLocationRequest;
         class StopMessageLiveLocationRequest;
         class SendAnimationRequest;
         class SendAudioRequest;
         class SendChatActionRequest;
         class SendContactRequest;
         class SendDiceRequest;
         class SendDocumentRequest;
         class SendMediaGroupRequest;
         class SendMessageRequest;
         class SendPhotoRequest;
         class SendPollRequest;
         class SendVideoNoteRequest;
         class SendVideoRequest;
         class SendVoiceRequest;
         class SetChatMenuButtonRequest;
         class SetMyDefaultAdministratorRightsRequest;
         class GetGameHighScoresRequest;
         class GetInlineGameHighScoresRequest;
         class SendGameRequest;
         class SetGameScoreRequest;
         class SetInlineGameScoreRequest;
         class DeleteWebhookRequest;
         class GetUpdatesRequest;
         class GetWebhookInfoRequest;
         class SetWebhookRequest;
         class AnswerInlineQueryRequest;
         class AnswerWebAppQueryRequest;
         class AnswerPreCheckoutQueryRequest;
         class AnswerShippingQueryRequest;
         class SendInvoiceRequest;
         class AddAnimatedStickerToSetRequest;
         class AddStaticStickerToSetRequest;
         class AddStickerToSetRequest;
         class AddVideoStickerToSetRequest;
         class CreateNewAnimatedStickerSetRequest;
         class CreateNewStaticStickerSetRequest;
         class CreateNewStickerSetRequest;
         class CreateNewVideoStickerSetRequest;
         class DeleteStickerFromSetRequest;
         class GetStickerSetRequest;
         class SendStickerRequest;
         class SetStickerPositionInSetRequest;
         class SetStickerSetThumbRequest;
         class UploadStickerFileRequest;
         class DeleteMessageRequest;
         class EditInlineMessageCaptionRequest;
         class EditInlineMessageMediaRequest;
         class EditInlineMessageReplyMarkupRequest;
         class EditInlineMessageTextRequest;
         class EditMessageCaptionRequest;
         class EditMessageMediaRequest;
         class EditMessageReplyMarkupRequest;
         class EditMessageTextRequest;
         class StopPollRequest;
     class DeleteMyCommandsRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScope Scope;
        STRING LanguageCode[];
        STRING MethodName[];
    };

     class GetMyCommandsRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BotCommandScope Scope;
        STRING LanguageCode[];
        STRING MethodName[];
    };

     class GetChatMenuButtonRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING MethodName[];
    };

     class GetMeRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING MethodName[];
    };

     class GetMyDefaultAdministratorRightsRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING MethodName[];
    };

     class CloseRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING MethodName[];
    };

     class LogOutRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING MethodName[];
    };

     class SetChatMenuButtonRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MenuButton MenuButton;
        STRING MethodName[];
    };

     class SetMyDefaultAdministratorRightsRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ChatAdministratorRights Rights;
        STRING MethodName[];
    };

     class DeleteWebhookRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING MethodName[];
    };

     class GetUpdatesRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING MethodName[];
    };

     class GetWebhookInfoRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING MethodName[];
    };

     class AddStickerToSetRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Name[];
        STRING Emojis[];
        MaskPosition MaskPosition;
        STRING MethodName[];
    };

     class CreateNewStickerSetRequest 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Name[];
        STRING Title[];
        STRING Emojis[];
        MaskPosition MaskPosition;
        STRING MethodName[];
    };

namespace Telegram.Bot.Polling;
        // class declarations
         class ReceiverOptions;
         class DefaultUpdateHandler;
         class DefaultUpdateReceiver;
     class ReceiverOptions 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        UpdateType AllowedUpdates;
    };

namespace Telegram.Bot.Exceptions;
        // class declarations
         class ApiRequestException;
         class ApiResponse;
         class DefaultExceptionParser;
         class RequestException;
     class DefaultExceptionParser 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Telegram.Bot.Args;
        // class declarations
         class ApiRequestEventArgs;
         class ApiResponseEventArgs;

namespace Telegram.Bot.Requests.Abstractions;
        // class declarations

namespace Telegram.Bot.Extensions;
        // class declarations

