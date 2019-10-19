//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBandwidthEstimatorListener-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;

@interface SCBandwidthSignalCollector : NSObject <SCBandwidthEstimatorListener>
{
    SCQueuePerformer *_performer;
    SCLazy *_retrySignalAnnouncerLazy;
    long long _uploadBandwidth;
    long long _minRequiredBandwidth;
}

- (void).cxx_destruct;
- (void)uploadBandwidthDidChange:(long long)arg1;
- (void)downloadBandwidthDidChange:(long long)arg1;
- (id)initWithRetrySignalAnnouncerLazy:(id)arg1 minRequiredBandwidth:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

