//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMECameraImageLoader-Protocol.h"

@class NSString, NSURL, ResourceLoadEffort;
@protocol HMECameraImageLoader, HMEFeedAnalyticsLogger;

@interface HMEFeedCameraImageLoader : NSObject <HMECameraImageLoader>
{
    id <HMEFeedAnalyticsLogger> _analyticsLogger;
    id <HMECameraImageLoader> _imageLoader;
    ResourceLoadEffort *_loadEffort;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) ResourceLoadEffort *loadEffort; // @synthesize loadEffort=_loadEffort;
@property(readonly, nonatomic) id <HMECameraImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <HMEFeedAnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
- (void)logResourceLoadEffort;
- (void)didFinishLoadingWithCached:(_Bool)arg1 error:(id)arg2;
- (void)cancel;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 nestMediaManager:(id)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

