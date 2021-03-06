//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEUnitObject.h"

#import "IVEScreenShot-Protocol.h"

@class HTSVideoData, NSObject, NSString;
@protocol OS_dispatch_queue, VEFetchAssetProtocol;

@interface VEImageGeneratorUnit : VEUnitObject <IVEScreenShot>
{
    NSString *_route;
    HTSVideoData *_videoData;
    id <VEFetchAssetProtocol> _assetFetch;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) id <VEFetchAssetProtocol> assetFetch; // @synthesize assetFetch=_assetFetch;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)setConfig:(id)arg1;
- (void)getImageWithVideoDataAtTime:(CDStruct_1b6d18a9)arg1 preferredSize:(struct CGSize)arg2 needProcess:(_Bool)arg3 isMV:(_Bool)arg4 compeletion:(CDUnknownBlockType)arg5;
- (void)getEffectImageAtTime:(double)arg1 preferredSize:(struct CGSize)arg2 compeletion:(CDUnknownBlockType)arg3;
- (void)getImageAtTime:(double)arg1 preferredSize:(struct CGSize)arg2 needProcess:(_Bool)arg3 compeletion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

