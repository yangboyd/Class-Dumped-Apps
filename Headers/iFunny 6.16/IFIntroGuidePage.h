//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFGuidePage.h>

@class IFActivityIndicator, UIView;

@interface IFIntroGuidePage : IFGuidePage
{
    _Bool _contentLoaded;
    UIView *_reloadFeedView;
    IFActivityIndicator *_loaderView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IFActivityIndicator *loaderView; // @synthesize loaderView=_loaderView;
@property(nonatomic) __weak UIView *reloadFeedView; // @synthesize reloadFeedView=_reloadFeedView;
@property(nonatomic) _Bool contentLoaded; // @synthesize contentLoaded=_contentLoaded;
- (void)feedLoadingError;
- (void)feedLoadingCompleted;
- (void)feedLoadingStarted;
- (void)animateView;
- (void)correctGestureTriggered:(id)arg1;
- (void)configureloaderView;
- (void)reloadFeed;
- (void)configureReloadFeed;
- (void)configureIntroPage;
- (id)initWithDelegate:(id)arg1;

@end

