//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GPBMessage.h>

@class NSMutableArray;

@interface BDMAdExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *eventArray; // @dynamic eventArray;
@property(readonly, nonatomic) unsigned long long eventArray_Count; // @dynamic eventArray_Count;
@property(nonatomic) _Bool preload; // @dynamic preload;
@property(nonatomic) unsigned int skipAfter; // @dynamic skipAfter;
@property(nonatomic) float viewabilityDurationThreshold; // @dynamic viewabilityDurationThreshold;
@property(nonatomic) float viewabilityPixelThreshold; // @dynamic viewabilityPixelThreshold;
@property(nonatomic) unsigned int viewabilityTimeThreshold; // @dynamic viewabilityTimeThreshold;

@end

