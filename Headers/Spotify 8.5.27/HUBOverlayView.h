//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HUBComponentViewManagerDelegate-Protocol.h"

@class HUBComponentViewImageLoader, HUBComponentViewManager, NSArray, NSMutableArray, NSString;
@protocol HUBOverlayViewComponentDelegate;

@interface HUBOverlayView : UIView <HUBComponentViewManagerDelegate>
{
    NSArray *_componentModels;
    id <HUBOverlayViewComponentDelegate> _componentDelegate;
    HUBComponentViewImageLoader *_componentViewImageLoader;
    HUBComponentViewManager *_componentViewManager;
    NSMutableArray *_overlayComponentViews;
    struct UIEdgeInsets _contentInset;
}

@property(readonly, nonatomic) NSMutableArray *overlayComponentViews; // @synthesize overlayComponentViews=_overlayComponentViews;
@property(readonly, nonatomic) HUBComponentViewManager *componentViewManager; // @synthesize componentViewManager=_componentViewManager;
@property(readonly, nonatomic) HUBComponentViewImageLoader *componentViewImageLoader; // @synthesize componentViewImageLoader=_componentViewImageLoader;
@property(nonatomic) __weak id <HUBOverlayViewComponentDelegate> componentDelegate; // @synthesize componentDelegate=_componentDelegate;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) NSArray *componentModels; // @synthesize componentModels=_componentModels;
- (void).cxx_destruct;
- (void)componentViewManager:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)componentViewManager:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)updateOverlayInteractivity;
- (void)componentViewsWillAppear;
- (void)configureComponentViews;
- (void)applyContentInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageLoaderFactory:(id)arg2 componentRegistry:(id)arg3 componentEventHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

