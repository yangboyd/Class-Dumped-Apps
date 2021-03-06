//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryViewerLoggingContext, IGStoryViewerViewController;
@protocol IGStoryFullscreenControllerType;

@protocol IGStoriesRotaryDelegate <NSObject>
- (void)rotaryViewerViewController:(IGStoryViewerViewController *)arg1 didStartRotationOnFullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg2 loggingContext:(IGStoryViewerLoggingContext *)arg3;
- (void)rotaryViewerViewController:(IGStoryViewerViewController *)arg1 didEndRotationOnFullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg2 loggingContext:(IGStoryViewerLoggingContext *)arg3;
- (void)rotaryViewerViewController:(IGStoryViewerViewController *)arg1 onFullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg2 didRotateDegrees:(double)arg3;
@end

