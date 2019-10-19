//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, SCMapExploreItem, SCMapExplorerCarouselView, SCMapPerson, SCMapReplyMessageContent, UIView;
@protocol SCMapReplyScreenshotGenerating;

@protocol SCMapExplorerCarouselViewDelegate <NSObject>
- (id <SCMapReplyScreenshotGenerating>)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 screenshotGeneratorForUserId:(NSString *)arg2;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 wantsToPresentReplyCameraForUserId:(NSString *)arg2;
- (void)mapExplorerCarouselViewDidFocus:(SCMapExplorerCarouselView *)arg1 forUserId:(NSString *)arg2;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 wantsToSendReplyMessage:(SCMapReplyMessageContent *)arg2 toUserId:(NSString *)arg3;
- (void)mapExplorerCarouselViewWantsToPlayMapStory:(SCMapExplorerCarouselView *)arg1 withPoiId:(NSString *)arg2 fromSourceView:(UIView *)arg3;
- (void)mapExplorerCarouselViewWantsToBeDismissed:(SCMapExplorerCarouselView *)arg1;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 wantsToNavigateToURL:(NSURL *)arg2;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 wantsChatForPeople:(NSArray *)arg2;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 didLongPressOnPerson:(SCMapPerson *)arg2;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 didTapStoryForPerson:(SCMapPerson *)arg2 sourceView:(UIView *)arg3;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 didLongPressOnItem:(SCMapExploreItem *)arg2;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 didTapItem:(SCMapExploreItem *)arg2;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 didShowItem:(SCMapExploreItem *)arg2;
- (void)mapExplorerCarouselView:(SCMapExplorerCarouselView *)arg1 willShowItem:(SCMapExploreItem *)arg2;
@end

