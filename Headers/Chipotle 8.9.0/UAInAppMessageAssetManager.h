//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, UAInAppMessageAssetCache;
@protocol UAInAppMessageCachePolicyDelegate, UAInAppMessagePrepareAssetsDelegate;

@interface UAInAppMessageAssetManager : NSObject
{
    id <UAInAppMessagePrepareAssetsDelegate> _prepareAssetsDelegate;
    id <UAInAppMessageCachePolicyDelegate> _cachePolicyDelegate;
    UAInAppMessageAssetCache *_assetCache;
    NSOperationQueue *_queue;
}

+ (id)assetManagerWithAssetCache:(id)arg1 operationQueue:(id)arg2;
+ (id)assetManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UAInAppMessageAssetCache *assetCache; // @synthesize assetCache=_assetCache;
@property(nonatomic) __weak id <UAInAppMessageCachePolicyDelegate> cachePolicyDelegate; // @synthesize cachePolicyDelegate=_cachePolicyDelegate;
@property(retain, nonatomic) id <UAInAppMessagePrepareAssetsDelegate> prepareAssetsDelegate; // @synthesize prepareAssetsDelegate=_prepareAssetsDelegate;
- (void)assetsForSchedule:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onScheduleFinished:(id)arg1;
- (void)onDisplayFinished:(id)arg1;
- (void)onPrepare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onSchedule:(id)arg1;
- (id)initWithAssetCache:(id)arg1 operationQueue:(id)arg2;

@end

