//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGMedia, IGStoryTrayViewModel, IGTVDestinationVideoPosition, NSArray, NSString, UIView;

@protocol IGTVThumbnailSectionControllerDelegate <NSObject>
- (void)thumbnailSectionControllerDidLongPressStoryTray:(IGStoryTrayViewModel *)arg1 withSourceChannelType:(NSString *)arg2 videoPosition:(IGTVDestinationVideoPosition *)arg3;
- (void)thumbnailSectionControllerDidTapTrayItem:(IGStoryTrayViewModel *)arg1 availableTrayItems:(NSArray *)arg2 withSourceChannelType:(NSString *)arg3 videoPosition:(IGTVDestinationVideoPosition *)arg4;
- (void)thumbnailSectionControllerDidLongPressFeedItem:(IGMedia *)arg1 withSourceChannelType:(NSString *)arg2 videoPosition:(IGTVDestinationVideoPosition *)arg3;
- (void)thumbnailSectionControllerDidTapFeedItem:(IGMedia *)arg1 withSourceChannelType:(NSString *)arg2 videoPosition:(IGTVDestinationVideoPosition *)arg3 fromView:(UIView *)arg4;
- (_Bool)thumbnailSectionControllerShouldBeginLongPress;
- (long long)loggingPositionOffsetForThumbnailSectionController;
@end

