//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastEpisodeDescriptionBaseViewController.h"

#import "SPTThemableView-Protocol.h"

@class NSString, UILayoutGuide, UIStackView, UIViewController;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTPodcastEpisodeDescriptionViewController : SPTPodcastEpisodeDescriptionBaseViewController <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> layoutDelegate;
    UIViewController *_descriptionPage;
    UIStackView *_contentStack;
    UILayoutGuide *_layoutGuide;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(retain, nonatomic) UIStackView *contentStack; // @synthesize contentStack=_contentStack;
@property(retain, nonatomic) UIViewController *descriptionPage; // @synthesize descriptionPage=_descriptionPage;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (void)applyThemeLayout;
- (void)didTapSeeMoreWithVoiceOver;
- (void)setUpConstraints;
- (void)setUpView;
- (unsigned long long)maximumNumberOfLines;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 logger:(id)arg3 htmlParser:(id)arg4 descriptionPage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

