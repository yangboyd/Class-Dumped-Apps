//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol XNOEffectAssetManager;

@interface XNOLegacyEffectManager : NSObject
{
    id <XNOEffectAssetManager> _assetManager;
    NSMutableDictionary *_effectIDToProtoMap;
    NSMutableDictionary *_effectIDToEffectMap;
    NSMutableDictionary *_effectIDToQueuedLoadCallbacksMap;
}

- (void).cxx_destruct;
- (void)finishLoadingEffect:(id)arg1 withID:(id)arg2 error:(id)arg3;
- (void)startLoadingEffectWithID:(id)arg1;
- (id)managedEffectIDs;
- (void)mergeEffectProtos:(id)arg1;
- (void)loadEffectsWithIDs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithRemoteAssetManager:(id)arg1;

@end

