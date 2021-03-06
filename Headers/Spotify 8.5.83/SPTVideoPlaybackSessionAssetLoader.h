//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoPlaybackSessionAssetLoader-Protocol.h"

@class AVContentKeySession, BMAVFactory, NSString;
@protocol BMResourceLoaderInternal;

@interface SPTVideoPlaybackSessionAssetLoader : NSObject <SPTVideoPlaybackSessionAssetLoader>
{
    BMAVFactory *_avFactory;
    id <BMResourceLoaderInternal> _resourceLoader;
    AVContentKeySession *_contentKeySession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVContentKeySession *contentKeySession; // @synthesize contentKeySession=_contentKeySession;
@property(retain, nonatomic) id <BMResourceLoaderInternal> resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) BMAVFactory *avFactory; // @synthesize avFactory=_avFactory;
- (void)prepareAsset:(id)arg1 withKeys:(id)arg2 completion:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)loadPlayerItemWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)initWithAVFactory:(id)arg1 resourceLoader:(id)arg2 contentKeySession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

