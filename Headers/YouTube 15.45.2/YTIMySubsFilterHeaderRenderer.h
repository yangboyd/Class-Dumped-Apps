//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIRenderer;

@interface YTIMySubsFilterHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *channelFilter; // @dynamic channelFilter;
@property(retain, nonatomic) YTIRenderer *chipFilter; // @dynamic chipFilter;
@property(copy, nonatomic) NSString *csiEventId; // @dynamic csiEventId;
@property(nonatomic) _Bool hasChannelFilter; // @dynamic hasChannelFilter;
@property(nonatomic) _Bool hasChipFilter; // @dynamic hasChipFilter;
@property(nonatomic) _Bool hasCsiEventId; // @dynamic hasCsiEventId;

@end

