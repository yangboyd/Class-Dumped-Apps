//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTRendererController.h"

@class YTIFormattedString, YTIHintRenderer;

@protocol YTChannelListAvatarViewControllerProtocol <YTRendererController>
@property(readonly, nonatomic) YTIFormattedString *channelTitle;
@property(nonatomic) __weak id <YTChannelListAvatarViewControllerDelegate> delegate;
@property(readonly, nonatomic) YTIHintRenderer *hintRenderer;
- (void)setAvatarAppearance:(unsigned long long)arg1;
@end

