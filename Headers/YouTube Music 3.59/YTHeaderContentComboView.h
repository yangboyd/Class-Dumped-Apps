//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTWrapperView.h"

#import "YTScrollToTopButtonHost-Protocol.h"
#import "YTSubheaderBarHostProtocol-Protocol.h"

@class NSString, UIViewController, YTHeaderView, YTQTMButton, YTSubheaderContainerView;

@interface YTHeaderContentComboView : YTWrapperView <YTScrollToTopButtonHost, YTSubheaderBarHostProtocol>
{
    YTSubheaderContainerView *_subheaderView;
    YTQTMButton *_scrollToTopButton;
    unsigned long long _buttonType;
    _Bool _isScrollToTopButtonHidden;
    _Bool _subheaderBarEnabled;
    _Bool _subheaderIsPinned;
    _Bool _enableFirstLoadHideShowAnimation;
    _Bool _firstSubheaderAnimationLoad;
    UIViewController *_viewController;
    YTHeaderView *_headerView;
}

+ (id)wrapperViewWithChildView:(id)arg1;
@property(readonly, nonatomic) YTHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) _Bool subheaderIsPinned; // @synthesize subheaderIsPinned=_subheaderIsPinned;
@property(nonatomic) _Bool subheaderBarEnabled; // @synthesize subheaderBarEnabled=_subheaderBarEnabled;
@property(retain, nonatomic) YTSubheaderContainerView *subheaderView; // @synthesize subheaderView=_subheaderView;
- (void).cxx_destruct;
- (void)setScrollToTopButtonHidden:(_Bool)arg1;
- (void)addScrollToTopButton:(id)arg1 buttonType:(unsigned long long)arg2;
- (void)disableSubheaderBar;
- (void)enableSubheaderBarWithView:(id)arg1;
- (void)subheaderDidBecomePinned:(_Bool)arg1;
- (void)enableFirstLoadHideShowAnimation:(_Bool)arg1;
- (void)hideSubheaderBar;
- (void)showSubheaderBar;
- (void)dealloc;
- (void)bindHeaderViewToViewController:(id)arg1;
- (void)layoutSubviews;
- (void)layoutChildView;
- (id)initWithChildView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

