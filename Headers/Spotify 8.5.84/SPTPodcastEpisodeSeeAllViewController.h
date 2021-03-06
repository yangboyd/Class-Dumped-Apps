//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTThemableView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GLUEAccessoryIconView, GLUELabel, NSString, SPTPodcastEpisodeLogger, SPTPodcastEpisodeSeeAllViewModel, UILayoutGuide, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol GLUETheme, SPTThemableViewLayoutDelegate;

@interface SPTPodcastEpisodeSeeAllViewController : UIViewController <UIGestureRecognizerDelegate, SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <GLUETheme> _theme;
    SPTPodcastEpisodeSeeAllViewModel *_viewModel;
    SPTPodcastEpisodeLogger *_logger;
    GLUELabel *_label;
    GLUEAccessoryIconView *_iconView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    UILayoutGuide *_layoutGuide;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(retain, nonatomic) UILongPressGestureRecognizer *highlightGestureRecognizer; // @synthesize highlightGestureRecognizer=_highlightGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) GLUEAccessoryIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GLUELabel *label; // @synthesize label=_label;
@property(retain, nonatomic) SPTPodcastEpisodeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPodcastEpisodeSeeAllViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)applyThemeLayout;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)selectionEvent;
@property(nonatomic) _Bool highlighted;
- (void)highlightGestureRecognizerChangedState:(id)arg1;
- (void)applyViewModel:(id)arg1;
- (void)setUpConstraints;
- (void)setUpView;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

