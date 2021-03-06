//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTBarInteractiveTransitionParticipant-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTTheme;
@protocol SPTPageContainer, SPTPageController><SPTBarInteractiveTransitionParticipant;

@interface SPTNowPlayingBarContainerViewController : UIViewController <SPTPageController, SPTBarInteractiveTransitionParticipant>
{
    UIViewController<SPTPageController><SPTBarInteractiveTransitionParticipant> *_barViewController;
    SPTTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIViewController<SPTPageController><SPTBarInteractiveTransitionParticipant> *barViewController; // @synthesize barViewController=_barViewController;
- (_Bool)shouldShowBar;
- (id)backgroundViewForBarTransition:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (struct CGSize)preferredContentSize;
- (void)setupAppearance;
- (void)setupConstraints;
- (void)viewDidLoad;
- (id)initWithNowPlayingBarViewController:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

