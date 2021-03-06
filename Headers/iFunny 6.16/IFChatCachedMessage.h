//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/RLMObject.h>

@class IFChatCachedUser, NSDate, NSString, RLMArray;
@protocol IFChatCachedUser;

@interface IFChatCachedMessage : RLMObject
{
    _Bool _isDeliveryError;
    float _thumbHeight;
    float _thumbWidth;
    NSString *_type;
    NSString *_text;
    NSString *_avatarUrl;
    NSDate *_messageDate;
    NSString *_messageID;
    NSString *_chatID;
    IFChatCachedUser *_user;
    RLMArray<IFChatCachedUser> *_users;
    NSString *_thumbURL;
    NSString *_contentURL;
}

+ (id)indexedProperties;
+ (id)primaryKey;
+ (id)requiredProperties;
- (void).cxx_destruct;
@property(retain) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property float thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property float thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(retain) NSString *thumbURL; // @synthesize thumbURL=_thumbURL;
@property(retain) RLMArray<IFChatCachedUser> *users; // @synthesize users=_users;
@property(retain) IFChatCachedUser *user; // @synthesize user=_user;
@property(retain) NSString *chatID; // @synthesize chatID=_chatID;
@property _Bool isDeliveryError; // @synthesize isDeliveryError=_isDeliveryError;
@property(retain) NSString *messageID; // @synthesize messageID=_messageID;
@property(retain) NSDate *messageDate; // @synthesize messageDate=_messageDate;
@property(retain) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain) NSString *text; // @synthesize text=_text;
@property(retain) NSString *type; // @synthesize type=_type;
- (id)uniqueIdentifier;
- (id)initWithEntity:(id)arg1;

@end

