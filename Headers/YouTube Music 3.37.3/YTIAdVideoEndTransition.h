//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIBackgroundTransition, YTIForegroundTransition;

@interface YTIAdVideoEndTransition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBackgroundTransition *backgroundTransition; // @dynamic backgroundTransition;
@property(retain, nonatomic) YTIForegroundTransition *foregroundTransition; // @dynamic foregroundTransition;
@property(nonatomic) _Bool hasBackgroundTransition; // @dynamic hasBackgroundTransition;
@property(nonatomic) _Bool hasForegroundTransition; // @dynamic hasForegroundTransition;

@end

