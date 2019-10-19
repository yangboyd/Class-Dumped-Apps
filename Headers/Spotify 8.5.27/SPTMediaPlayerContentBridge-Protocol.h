//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPPlayableContentManager;
@protocol MPPlayableContentDataSource, MPPlayableContentDelegate, SPTPlaybackQueueInitializer;

@protocol SPTMediaPlayerContentBridge <NSObject>
@property(readonly, nonatomic) MPPlayableContentManager *contentManager;
@property(nonatomic) __weak id <SPTPlaybackQueueInitializer> playbackQueueInitializer;
@property(nonatomic) __weak id <MPPlayableContentDelegate> playableContentSubDelegate;
@property(nonatomic) __weak id <MPPlayableContentDataSource> playableContentDataSource;
@end

