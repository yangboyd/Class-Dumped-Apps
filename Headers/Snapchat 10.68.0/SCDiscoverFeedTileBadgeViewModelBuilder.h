//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, SCDiscoverFeedTileBadgeViewLayoutConfiguration, UIImage;

@interface SCDiscoverFeedTileBadgeViewModelBuilder : NSObject
{
    NSAttributedString *_title;
    UIImage *_icon;
    SCDiscoverFeedTileBadgeViewLayoutConfiguration *_layoutConfig;
}

+ (id)discoverFeedTileBadgeViewModelFromExistingDiscoverFeedTileBadgeViewModel:(id)arg1;
+ (id)discoverFeedTileBadgeViewModel;
- (void).cxx_destruct;
- (id)withLayoutConfig:(id)arg1;
- (id)withIcon:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)build;

@end

