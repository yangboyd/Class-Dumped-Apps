//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRTweetContentViewLayout-Protocol.h"

@class NSLayoutConstraint, NSString, TWTRTweetViewMetrics;

@interface TWTRTweetContentViewLayoutCompact : NSObject <TWTRTweetContentViewLayout>
{
    TWTRTweetViewMetrics *_metrics;
    NSLayoutConstraint *_imageTopConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *imageTopConstraint; // @synthesize imageTopConstraint=_imageTopConstraint;
@property(readonly, nonatomic) TWTRTweetViewMetrics *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
- (void)setShowingMedia:(_Bool)arg1;
- (void)applyConstraintsForContentView:(id)arg1;
- (_Bool)allowsMediaCornerRounding;
- (id)fontForTweetLabel;
- (unsigned long long)tweetViewStyle;
- (id)initWithMetrics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

