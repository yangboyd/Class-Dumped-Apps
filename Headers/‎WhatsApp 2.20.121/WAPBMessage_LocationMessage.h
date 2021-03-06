//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSData, NSString, WAPBContextInfo;

@interface WAPBMessage_LocationMessage : GPBMessage
{
}

+ (id)descriptor;
@property(copy, nonatomic) NSString *addressWithSanitization;
@property(copy, nonatomic) NSString *nameWithSanitization;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) unsigned int accuracyInMeters; // @dynamic accuracyInMeters;
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(copy, nonatomic) NSString *comment; // @dynamic comment;
@property(retain, nonatomic) WAPBContextInfo *contextInfo; // @dynamic contextInfo;
@property(nonatomic) unsigned int degreesClockwiseFromMagneticNorth; // @dynamic degreesClockwiseFromMagneticNorth;
@property(nonatomic) double degreesLatitude; // @dynamic degreesLatitude;
@property(nonatomic) double degreesLongitude; // @dynamic degreesLongitude;
@property(nonatomic) _Bool hasAccuracyInMeters; // @dynamic hasAccuracyInMeters;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasComment; // @dynamic hasComment;
@property(nonatomic) _Bool hasContextInfo; // @dynamic hasContextInfo;
@property(nonatomic) _Bool hasDegreesClockwiseFromMagneticNorth; // @dynamic hasDegreesClockwiseFromMagneticNorth;
@property(nonatomic) _Bool hasDegreesLatitude; // @dynamic hasDegreesLatitude;
@property(nonatomic) _Bool hasDegreesLongitude; // @dynamic hasDegreesLongitude;
@property(nonatomic) _Bool hasIsLive; // @dynamic hasIsLive;
@property(nonatomic) _Bool hasJpegThumbnail; // @dynamic hasJpegThumbnail;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasSpeedInMps; // @dynamic hasSpeedInMps;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool isLive; // @dynamic isLive;
@property(copy, nonatomic) NSData *jpegThumbnail; // @dynamic jpegThumbnail;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) float speedInMps; // @dynamic speedInMps;

@end

