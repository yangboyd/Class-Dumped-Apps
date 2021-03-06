//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSArray;
@protocol AVAssetResourceLoaderDelegate;

@interface TAVFoundationItem : NSObject
{
    _Bool _hasAnyAudio;
    AVPlayerItem *_avPlayerItem;
    id <AVAssetResourceLoaderDelegate> _resourceLoader;
}

@property(nonatomic) _Bool hasAnyAudio; // @synthesize hasAnyAudio=_hasAnyAudio;
@property(readonly, nonatomic) id <AVAssetResourceLoaderDelegate> resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *accessLogEvents;
- (void)dealloc;
- (id)init;
- (id)initWithAVPlayerItem:(id)arg1;
- (id)initWithAVPlayerItem:(id)arg1 resourceLoader:(id)arg2;

@end

