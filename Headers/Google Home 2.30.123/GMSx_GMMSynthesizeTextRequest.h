//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTLoggingParams, NSData, NSString;

@interface GMSx_GMMSynthesizeTextRequest : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasLoggingParams; // @dynamic hasLoggingParams;
@property(nonatomic) _Bool hasNlgData; // @dynamic hasNlgData;
@property(nonatomic) _Bool hasVoiceName; // @dynamic hasVoiceName;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) GMSx_GMTTLoggingParams *loggingParams; // @dynamic loggingParams;
@property(copy, nonatomic) NSData *nlgData; // @dynamic nlgData;
@property(copy, nonatomic) NSString *voiceName; // @dynamic voiceName;

@end

