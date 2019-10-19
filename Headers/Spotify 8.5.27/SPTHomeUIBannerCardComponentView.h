//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithChildren-Protocol.h"
#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"
#import "SPTHomeUIBannerCardViewDelegate-Protocol.h"

@class NSString, SPTHomeUIBannerCardView;
@protocol HUBComponentEventHandler, HUBComponentModel, HUBComponentViewChildDelegate, SPTHomeUIBannerCardComponentViewDelegate;

@interface SPTHomeUIBannerCardComponentView : HUGSThemableComponentView <SPTHomeUIBannerCardViewDelegate, HUBComponentViewWithImageHandling, HUBComponentViewWithEvents, HUBComponentViewWithChildren>
{
    id <HUBComponentEventHandler> _eventHandler;
    id <HUBComponentViewChildDelegate> _childDelegate;
    id <SPTHomeUIBannerCardComponentViewDelegate> _delegate;
    SPTHomeUIBannerCardView *_cardView;
    id <HUBComponentModel> _primaryButtonComponentModel;
    id <HUBComponentModel> _secondaryButtonComponentModel;
}

+ (id)defaultHomeCardStyleForTheme:(id)arg1 model:(id)arg2;
+ (struct CGSize)preferredSizeForModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(retain, nonatomic) id <HUBComponentModel> secondaryButtonComponentModel; // @synthesize secondaryButtonComponentModel=_secondaryButtonComponentModel;
@property(retain, nonatomic) id <HUBComponentModel> primaryButtonComponentModel; // @synthesize primaryButtonComponentModel=_primaryButtonComponentModel;
@property(readonly, nonatomic) SPTHomeUIBannerCardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) __weak id <SPTHomeUIBannerCardComponentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (id)defaultHomeCardStyleForModel:(id)arg1;
- (void)sendSelectionEventWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setBannerViewHidden:(_Bool)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (void)bannerCardViewDidTapSecondaryButton:(id)arg1;
- (void)bannerCardViewDidTapPrimaryButton:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

