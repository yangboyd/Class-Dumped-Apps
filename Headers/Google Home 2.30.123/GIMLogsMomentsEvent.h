//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMLogsMomentsEvent_CaptureInfo;

@interface GIMLogsMomentsEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIMLogsMomentsEvent_CaptureInfo *captureInfo; // @dynamic captureInfo;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) int failureReason; // @dynamic failureReason;
@property(nonatomic) _Bool hasCaptureInfo; // @dynamic hasCaptureInfo;

@end

