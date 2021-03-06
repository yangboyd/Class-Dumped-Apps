//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGStreamingVideoCacheCacheEventListener-Protocol.h>

@class NSString;

@interface IGVideoCacheLogger : NSObject <IGStreamingVideoCacheCacheEventListener>
{
    NSString *_mediaId;
    struct mutex _mutex;
    _Bool _firstVideoResponseProcessed;
    _Bool _firstVideoResponseDataAtLeastPartiallyInCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isFirstVideoResponseDataAtLeastPartiallyInCache;
- (void)_updateStatsOnVideoSessionEndForMediaId:(id)arg1;
- (void)notifyVideoDidPauseForMediaId:(id)arg1;
- (void)notifyVideoDidExitForMediaId:(id)arg1;
- (void)notifyNumBytesInCache:(long long)arg1 forRequest:(id)arg2;
- (id)initWithMediaId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

