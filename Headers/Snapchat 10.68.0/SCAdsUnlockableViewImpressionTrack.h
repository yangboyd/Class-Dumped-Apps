//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, GPBFloatValue, NSData, SCAdsDeviceInfo;

@interface SCAdsUnlockableViewImpressionTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(copy, nonatomic) NSData *encGeoData; // @dynamic encGeoData;
@property(nonatomic) _Bool hasDeviceInfo; // @dynamic hasDeviceInfo;
@property(nonatomic) _Bool hasIsAudioOn; // @dynamic hasIsAudioOn;
@property(nonatomic) _Bool hasMediaDurationSeconds; // @dynamic hasMediaDurationSeconds;
@property(nonatomic) _Bool hasTimeViewedSeconds; // @dynamic hasTimeViewedSeconds;
@property(retain, nonatomic) GPBBoolValue *isAudioOn; // @dynamic isAudioOn;
@property(retain, nonatomic) GPBFloatValue *mediaDurationSeconds; // @dynamic mediaDurationSeconds;
@property(nonatomic) int snapViewType; // @dynamic snapViewType;
@property(nonatomic) int snappableInviteAction; // @dynamic snappableInviteAction;
@property(retain, nonatomic) GPBFloatValue *timeViewedSeconds; // @dynamic timeViewedSeconds;

@end

