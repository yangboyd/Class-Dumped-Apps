//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCKOCSession, NSData, NSString;

@interface GCKOCCreateSessionResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSenderIdentityPkcs12; // @dynamic hasSenderIdentityPkcs12;
@property(nonatomic) _Bool hasSenderIdentityPkcs12Password; // @dynamic hasSenderIdentityPkcs12Password;
@property(nonatomic) _Bool hasSession; // @dynamic hasSession;
@property(copy, nonatomic) NSData *senderIdentityPkcs12; // @dynamic senderIdentityPkcs12;
@property(copy, nonatomic) NSString *senderIdentityPkcs12Password; // @dynamic senderIdentityPkcs12Password;
@property(retain, nonatomic) GCKOCSession *session; // @dynamic session;

@end

