//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAChatJID;

@interface WAFinalLocationInfo : NSObject
{
    WAChatJID *_chatJID;
    NSString *_messageStanzaID;
}

+ (id)withChatJID:(id)arg1 messageStanzaID:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *messageStanzaID; // @synthesize messageStanzaID=_messageStanzaID;
@property(retain, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;

@end

