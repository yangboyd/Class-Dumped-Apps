//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, IGVideoLoader, NSArray, NSMutableSet, NSString;

@interface IGSundialViewerVideoPreloader : NSObject
{
    IGUserSession *_userSession;
    IGVideoLoader *_videoLoader;
    NSString *_analyticsModule;
    NSMutableSet *_bufferedVideoIDs;
    _Bool _enableOneAheadBuffer;
    NSArray *_videos;
    long long _activeVideoIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long activeVideoIndex; // @synthesize activeVideoIndex=_activeVideoIndex;
@property(retain, nonatomic) NSArray *videos; // @synthesize videos=_videos;
- (void)_updateModuleGraph;
- (void)_setupModuleGraph;
- (void)_bufferNextVideoIfNeeded;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

@end

