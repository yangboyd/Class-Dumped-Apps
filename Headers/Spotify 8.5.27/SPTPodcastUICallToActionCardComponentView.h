//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SPTPodcastUICallToActionCardStyle, SPTPodcastUICallToActionCardView, UITapGestureRecognizer;
@protocol HUBComponentEventHandler;

@interface SPTPodcastUICallToActionCardComponentView : HUGSThemableComponentView <UIGestureRecognizerDelegate, HUBComponentViewWithImageHandling, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    SPTPodcastUICallToActionCardView *_callToActionCardView;
    SPTPodcastUICallToActionCardStyle *_style;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) SPTPodcastUICallToActionCardStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPodcastUICallToActionCardView *callToActionCardView; // @synthesize callToActionCardView=_callToActionCardView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)sendSelectionEvent;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

