//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMBRenderConfig, NSMutableArray;

@interface GMSx_GMMBLevel : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *aspectArray; // @dynamic aspectArray;
@property(readonly, nonatomic) unsigned long long aspectArray_Count; // @dynamic aspectArray_Count;
@property(retain, nonatomic) GMSx_GMMBRenderConfig *badgeRenderConfig; // @dynamic badgeRenderConfig;
@property(nonatomic) _Bool hasBadgeRenderConfig; // @dynamic hasBadgeRenderConfig;
@property(nonatomic) _Bool hasLevel; // @dynamic hasLevel;
@property(nonatomic) int level; // @dynamic level;

@end

