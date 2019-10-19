//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TWTRLikeButton, TWTRShareButton, UIViewController;

@interface TWTRTweetDetailViewActionBar : UIView
{
    UIViewController *_presenterViewController;
    TWTRLikeButton *_likeButton;
    TWTRShareButton *_shareButton;
}

@property(readonly, nonatomic) TWTRShareButton *shareButton; // @synthesize shareButton=_shareButton;
@property(readonly, nonatomic) TWTRLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
- (void).cxx_destruct;
- (id)makeHairlineView;
- (void)configureWithTweet:(id)arg1;
- (void)prepareSubviews;
- (void)commonActionBarInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

