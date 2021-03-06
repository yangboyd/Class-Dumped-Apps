//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryViewerViewModel, NSDictionary, NSString;
@protocol IGStoryItemType;

@protocol IGStoryFullscreenSectionLoggingContextType <NSObject>
- (NSDictionary *)finalStateFieldsForStoryItem:(id <IGStoryItemType>)arg1;
- (NSString *)videoPlayerStateForStoryItem:(id <IGStoryItemType>)arg1;
- (_Bool)hasMediaLoaded:(id <IGStoryItemType>)arg1;
- (_Bool)loadedOnImpressionForStoryItem:(id <IGStoryItemType>)arg1;
- (long long)totalProfileTapCountForStoryItem:(id <IGStoryItemType>)arg1;
- (NSDictionary *)urlTapCountForStoryItem:(id <IGStoryItemType>)arg1;
- (NSDictionary *)commonFieldsForStoryItem:(id <IGStoryItemType>)arg1;
- (double)mediaSecondsElapsed:(id <IGStoryItemType>)arg1;
- (double)totalPauseDurationFromTrayInViewerForStoryItem:(id <IGStoryItemType>)arg1;
- (double)totalPauseDurationForStoryItem:(id <IGStoryItemType>)arg1;
- (double)startTimeForStoryItem:(id <IGStoryItemType>)arg1;
- (double)totalPauseDurationForStory:(IGStoryViewerViewModel *)arg1;
- (double)startTimeForStory:(IGStoryViewerViewModel *)arg1;
@end

