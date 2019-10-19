//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSSet;

@interface SPTPlayerRestrictions : NSObject <NSCopying>
{
    NSSet *_disallowPeekingAtPreviousTrackReasons;
    NSSet *_disallowPeekingAtNextTrackReasons;
    NSSet *_disallowSkippingToPreviousTrackReasons;
    NSSet *_disallowSkippingToNextTrackReasons;
    NSSet *_disallowPausingReasons;
    NSSet *_disallowResumingReasons;
    NSSet *_disallowTogglingRepeatContextReasons;
    NSSet *_disallowTogglingRepeatTrackReasons;
    NSSet *_disallowTogglingShuffleReasons;
    NSSet *_disallowSeekingReasons;
    NSSet *_disallowTransferringPlaybackReasons;
    NSSet *_disallowRemoteControlReasons;
    NSSet *_disallowUpdatingContextReasons;
    NSSet *_disallowInsertingIntoNextTracksReasons;
    NSSet *_disallowInsertingIntoContextTracksReasons;
    NSSet *_disallowReorderingInNextTracksReasons;
    NSSet *_disallowReorderingInContextTracksReasons;
    NSSet *_disallowRemovingFromNextTracksReasons;
    NSSet *_disallowRemovingFromContextTracksReasons;
    NSSet *_disallowSetQueueReasons;
    NSSet *_disallowInterruptingPlaybackReasons;
}

@property(copy, nonatomic) NSSet *disallowInterruptingPlaybackReasons; // @synthesize disallowInterruptingPlaybackReasons=_disallowInterruptingPlaybackReasons;
@property(copy, nonatomic) NSSet *disallowSetQueueReasons; // @synthesize disallowSetQueueReasons=_disallowSetQueueReasons;
@property(copy, nonatomic) NSSet *disallowRemovingFromContextTracksReasons; // @synthesize disallowRemovingFromContextTracksReasons=_disallowRemovingFromContextTracksReasons;
@property(copy, nonatomic) NSSet *disallowRemovingFromNextTracksReasons; // @synthesize disallowRemovingFromNextTracksReasons=_disallowRemovingFromNextTracksReasons;
@property(copy, nonatomic) NSSet *disallowReorderingInContextTracksReasons; // @synthesize disallowReorderingInContextTracksReasons=_disallowReorderingInContextTracksReasons;
@property(copy, nonatomic) NSSet *disallowReorderingInNextTracksReasons; // @synthesize disallowReorderingInNextTracksReasons=_disallowReorderingInNextTracksReasons;
@property(copy, nonatomic) NSSet *disallowInsertingIntoContextTracksReasons; // @synthesize disallowInsertingIntoContextTracksReasons=_disallowInsertingIntoContextTracksReasons;
@property(copy, nonatomic) NSSet *disallowInsertingIntoNextTracksReasons; // @synthesize disallowInsertingIntoNextTracksReasons=_disallowInsertingIntoNextTracksReasons;
@property(copy, nonatomic) NSSet *disallowUpdatingContextReasons; // @synthesize disallowUpdatingContextReasons=_disallowUpdatingContextReasons;
@property(copy, nonatomic) NSSet *disallowRemoteControlReasons; // @synthesize disallowRemoteControlReasons=_disallowRemoteControlReasons;
@property(copy, nonatomic) NSSet *disallowTransferringPlaybackReasons; // @synthesize disallowTransferringPlaybackReasons=_disallowTransferringPlaybackReasons;
@property(copy, nonatomic) NSSet *disallowSeekingReasons; // @synthesize disallowSeekingReasons=_disallowSeekingReasons;
@property(copy, nonatomic) NSSet *disallowTogglingShuffleReasons; // @synthesize disallowTogglingShuffleReasons=_disallowTogglingShuffleReasons;
@property(copy, nonatomic) NSSet *disallowTogglingRepeatTrackReasons; // @synthesize disallowTogglingRepeatTrackReasons=_disallowTogglingRepeatTrackReasons;
@property(copy, nonatomic) NSSet *disallowTogglingRepeatContextReasons; // @synthesize disallowTogglingRepeatContextReasons=_disallowTogglingRepeatContextReasons;
@property(copy, nonatomic) NSSet *disallowResumingReasons; // @synthesize disallowResumingReasons=_disallowResumingReasons;
@property(copy, nonatomic) NSSet *disallowPausingReasons; // @synthesize disallowPausingReasons=_disallowPausingReasons;
@property(copy, nonatomic) NSSet *disallowSkippingToNextTrackReasons; // @synthesize disallowSkippingToNextTrackReasons=_disallowSkippingToNextTrackReasons;
@property(copy, nonatomic) NSSet *disallowSkippingToPreviousTrackReasons; // @synthesize disallowSkippingToPreviousTrackReasons=_disallowSkippingToPreviousTrackReasons;
@property(copy, nonatomic) NSSet *disallowPeekingAtNextTrackReasons; // @synthesize disallowPeekingAtNextTrackReasons=_disallowPeekingAtNextTrackReasons;
@property(copy, nonatomic) NSSet *disallowPeekingAtPreviousTrackReasons; // @synthesize disallowPeekingAtPreviousTrackReasons=_disallowPeekingAtPreviousTrackReasons;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool disallowInterruptingPlayback;
@property(readonly, nonatomic) _Bool disallowSetQueue;
@property(readonly, nonatomic) _Bool disallowRemovingFromContextTracks;
@property(readonly, nonatomic) _Bool disallowRemovingFromNextTracks;
@property(readonly, nonatomic) _Bool disallowReorderingInContextTracks;
@property(readonly, nonatomic) _Bool disallowReorderingInNextTracks;
@property(readonly, nonatomic) _Bool disallowInsertingIntoContextTracks;
@property(readonly, nonatomic) _Bool disallowInsertingIntoNextTracks;
@property(readonly, nonatomic) _Bool disallowUpdatingContext;
@property(readonly, nonatomic) _Bool disallowRemoteControl;
@property(readonly, nonatomic) _Bool disallowTransferringPlayback;
@property(readonly, nonatomic) _Bool disallowSeeking;
@property(readonly, nonatomic) _Bool disallowTogglingShuffle;
@property(readonly, nonatomic) _Bool disallowTogglingRepeatTrack;
@property(readonly, nonatomic) _Bool disallowTogglingRepeatContext;
@property(readonly, nonatomic) _Bool disallowResuming;
@property(readonly, nonatomic) _Bool disallowPausing;
@property(readonly, nonatomic) _Bool disallowSkippingToNextTrack;
@property(readonly, nonatomic) _Bool disallowSkippingToPreviousTrack;
@property(readonly, nonatomic) _Bool disallowPeekingAtNextTrack;
@property(readonly, nonatomic) _Bool disallowPeekingAtPreviousTrack;

@end

