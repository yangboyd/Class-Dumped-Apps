//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTLightweightCellDelegate-Protocol.h"

@class NSString, YTIPlaybackIdMatcher, YTLightweightCell, YTMMoodbarMoodCell, YTMPlaybackPublishController;
@protocol YTMPlaybackPublishControllerObserver;

@protocol YTMMoodbarMoodCellViewDelegate <YTLightweightCellDelegate>
- (void)lightweightCell:(YTLightweightCell *)arg1 removePlayerObservation:(id <YTMPlaybackPublishControllerObserver>)arg2 forPlaybackIDMatcher:(YTIPlaybackIdMatcher *)arg3;
- (void)lightweightCell:(YTLightweightCell *)arg1 requestPlayerObservation:(id <YTMPlaybackPublishControllerObserver>)arg2 forPlaybackIDMatcher:(YTIPlaybackIdMatcher *)arg3;
- (void)moodbarCell:(YTMMoodbarMoodCell *)arg1 didReceivePlaybackInactiveEventFromPlaybackPublishController:(YTMPlaybackPublishController *)arg2 forPlaylistID:(NSString *)arg3;
- (void)moodbarCell:(YTMMoodbarMoodCell *)arg1 didReceivePlaybackActiveEventFromPlaybackPublishController:(YTMPlaybackPublishController *)arg2 forPlaylistID:(NSString *)arg3;
@end

