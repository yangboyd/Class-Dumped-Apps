//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface SFPDPhotosReportAbuseRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *authKey; // @dynamic authKey;
@property(copy, nonatomic) NSString *envelopeMediaKey; // @dynamic envelopeMediaKey;
@property(nonatomic) _Bool hasAuthKey; // @dynamic hasAuthKey;
@property(nonatomic) _Bool hasEnvelopeMediaKey; // @dynamic hasEnvelopeMediaKey;
@property(nonatomic) _Bool hasMediaKey; // @dynamic hasMediaKey;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(nonatomic) int type; // @dynamic type;

@end

