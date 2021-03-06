//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTImageURLLoader-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTLocalAssetImageLoader : NSObject <RCTTurboModule, RCTImageURLLoader>
{
}

+ (void)load;
+ (id)moduleName;
- (CDUnknownBlockType)loadImageForURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 progressHandler:(CDUnknownBlockType)arg5 partialLoadHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)shouldCacheLoadedImages;
- (_Bool)requiresScheduling;
- (_Bool)canLoadImageURL:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end

