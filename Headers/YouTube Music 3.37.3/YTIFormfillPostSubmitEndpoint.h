//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIPing;

@interface YTIFormfillPostSubmitEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *emailKey; // @dynamic emailKey;
@property(copy, nonatomic) NSString *emailValue; // @dynamic emailValue;
@property(nonatomic) int format; // @dynamic format;
@property(copy, nonatomic) NSString *fullNameKey; // @dynamic fullNameKey;
@property(copy, nonatomic) NSString *fullNameValue; // @dynamic fullNameValue;
@property(nonatomic) _Bool hasEmailKey; // @dynamic hasEmailKey;
@property(nonatomic) _Bool hasEmailValue; // @dynamic hasEmailValue;
@property(nonatomic) _Bool hasFormat; // @dynamic hasFormat;
@property(nonatomic) _Bool hasFullNameKey; // @dynamic hasFullNameKey;
@property(nonatomic) _Bool hasFullNameValue; // @dynamic hasFullNameValue;
@property(nonatomic) _Bool hasLeadMetadata; // @dynamic hasLeadMetadata;
@property(nonatomic) _Bool hasPing; // @dynamic hasPing;
@property(copy, nonatomic) NSString *leadMetadata; // @dynamic leadMetadata;
@property(retain, nonatomic) YTIPing *ping; // @dynamic ping;

@end

