//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString;

@interface YTILiveStreamViewerStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long concurrentViewersCount; // @dynamic concurrentViewersCount;
@property(retain, nonatomic) YTIFormattedString *concurrentViewersText; // @dynamic concurrentViewersText;
@property(retain, nonatomic) YTIFormattedString *concurrentViewersTinyText; // @dynamic concurrentViewersTinyText;
@property(nonatomic) _Bool hasConcurrentViewersCount; // @dynamic hasConcurrentViewersCount;
@property(nonatomic) _Bool hasConcurrentViewersText; // @dynamic hasConcurrentViewersText;
@property(nonatomic) _Bool hasConcurrentViewersTinyText; // @dynamic hasConcurrentViewersTinyText;

@end

