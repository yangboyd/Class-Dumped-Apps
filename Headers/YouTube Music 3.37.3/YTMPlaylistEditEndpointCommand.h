//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCommandHandler-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTEditPlaylistController;
@protocol YTResponder;

@interface YTMPlaylistEditEndpointCommand : NSObject <YTCommandHandler, YTResponder>
{
    YTEditPlaylistController *_editPlaylistController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)handlePlaylistEditResponseActions:(id)arg1;
- (void)sendNotificationsForEndpoint:(id)arg1 addedPlaylistSetVideoId:(id)arg2 entry:(id)arg3;
- (void)removeFromPlaylistWithEntry:(id)arg1 serviceEndpoint:(id)arg2;
- (void)addToPlaylistWithEntry:(id)arg1 serviceEndpoint:(id)arg2;
- (void)executeWithCommand:(id)arg1 entry:(id)arg2 fromView:(id)arg3 sender:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

