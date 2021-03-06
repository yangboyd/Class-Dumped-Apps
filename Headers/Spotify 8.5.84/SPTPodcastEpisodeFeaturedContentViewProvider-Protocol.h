//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTPageCreationContext, UIViewController;
@protocol SPTPageController, SPTPodcastEpisodeFeaturedContentViewController;

@protocol SPTPodcastEpisodeFeaturedContentViewProvider <NSObject>
- (UIViewController<SPTPageController> *)featuredContentTimelineForEpisodeURL:(NSURL *)arg1 withContext:(SPTPageCreationContext *)arg2;
- (UIViewController *)featuredContentTrackListForEpisodeURL:(NSURL *)arg1 withContext:(SPTPageCreationContext *)arg2;
- (UIViewController<SPTPodcastEpisodeFeaturedContentViewController> *)featuredContentForEpisodeURL:(NSURL *)arg1 withContext:(SPTPageCreationContext *)arg2;
@end

