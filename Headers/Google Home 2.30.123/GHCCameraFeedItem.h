//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCCameraCapturedData, GHCOverflowMenu, NSMutableArray, NSString;

@interface GHCCameraFeedItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCCameraCapturedData *cameraData; // @dynamic cameraData;
@property(retain, nonatomic) NSMutableArray *chipActionsArray; // @dynamic chipActionsArray;
@property(readonly, nonatomic) unsigned long long chipActionsArray_Count; // @dynamic chipActionsArray_Count;
@property(nonatomic) _Bool hasCameraData; // @dynamic hasCameraData;
@property(nonatomic) _Bool hasOverflowMenu; // @dynamic hasOverflowMenu;
@property(retain, nonatomic) NSMutableArray *overflowActionsArray; // @dynamic overflowActionsArray;
@property(readonly, nonatomic) unsigned long long overflowActionsArray_Count; // @dynamic overflowActionsArray_Count;
@property(retain, nonatomic) GHCOverflowMenu *overflowMenu; // @dynamic overflowMenu;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

