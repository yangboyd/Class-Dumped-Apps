//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCLongformShowWatchedState, SCPremiumPublisher, SCPublisherShowMetadata;

@interface SCDiscoverFeedLongformShowBuilder : NSObject
{
    SCPremiumPublisher *_publisher;
    long long _editionId;
    NSString *_headline;
    NSString *_iconURL;
    unsigned long long _publisherTimestampMsecs;
    NSArray *_snaps;
    SCLongformShowWatchedState *_watchedState;
    SCPublisherShowMetadata *_showMetadata;
    long long _totalNumSnaps;
}

+ (id)discoverFeedLongformShowFromExistingDiscoverFeedLongformShow:(id)arg1;
+ (id)discoverFeedLongformShow;
- (void).cxx_destruct;
- (id)withTotalNumSnaps:(long long)arg1;
- (id)withShowMetadata:(id)arg1;
- (id)withWatchedState:(id)arg1;
- (id)withSnaps:(id)arg1;
- (id)withPublisherTimestampMsecs:(unsigned long long)arg1;
- (id)withIconURL:(id)arg1;
- (id)withHeadline:(id)arg1;
- (id)withEditionId:(long long)arg1;
- (id)withPublisher:(id)arg1;
- (id)build;

@end

