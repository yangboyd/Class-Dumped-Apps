//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCAdsDiscoverPage_Feed : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool adsDisabled; // @dynamic adsDisabled;
@property(nonatomic) int feedStyle; // @dynamic feedStyle;
@property(nonatomic) int feedType; // @dynamic feedType;
@property(nonatomic) unsigned int minAdsPos; // @dynamic minAdsPos;
@property(retain, nonatomic) NSMutableArray *sccTagsArray; // @dynamic sccTagsArray;
@property(readonly, nonatomic) unsigned long long sccTagsArray_Count; // @dynamic sccTagsArray_Count;
@property(retain, nonatomic) NSMutableArray *storiesArray; // @dynamic storiesArray;
@property(readonly, nonatomic) unsigned long long storiesArray_Count; // @dynamic storiesArray_Count;
@property(nonatomic) unsigned int storyOffset; // @dynamic storyOffset;

@end

