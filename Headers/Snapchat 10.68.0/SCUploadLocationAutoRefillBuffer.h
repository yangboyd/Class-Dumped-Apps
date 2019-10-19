//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol SCPerforming, SCUploadLocationsProvider;

@interface SCUploadLocationAutoRefillBuffer : NSObject
{
    id <SCPerforming> _performer;
    NSMutableArray *_uploadLocations;
    NSMutableArray *_callbacks;
    id <SCUploadLocationsProvider> _provider;
    unsigned long long _refillThreshold;
    _Bool _isFetchingFromProvider;
}

- (void).cxx_destruct;
- (void)_fulfillPendingCallbacks;
- (void)_fulfillCallbacksWithFetchedUploadLocations:(id)arg1 error:(id)arg2;
- (void)_fulfillCallbacks;
- (void)uploadLocationWithCallbackPerformer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithProvider:(id)arg1 refillThreshold:(unsigned long long)arg2 performer:(id)arg3;

@end

