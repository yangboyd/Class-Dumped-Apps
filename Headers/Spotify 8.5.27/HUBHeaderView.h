//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HUBComponentViewManagerDelegate-Protocol.h"

@class HUBComponentView, HUBComponentViewImageLoader, HUBComponentViewManager, NSString;
@protocol HUBComponentModel, HUBHeaderViewComponentDelegate;

@interface HUBHeaderView : UIView <HUBComponentViewManagerDelegate>
{
    id <HUBComponentModel> _componentModel;
    id <HUBHeaderViewComponentDelegate> _componentDelegate;
    HUBComponentViewImageLoader *_componentViewImageLoader;
    HUBComponentViewManager *_componentViewManager;
    HUBComponentView *_headerComponentView;
}

@property(retain, nonatomic) HUBComponentView *headerComponentView; // @synthesize headerComponentView=_headerComponentView;
@property(readonly, nonatomic) HUBComponentViewManager *componentViewManager; // @synthesize componentViewManager=_componentViewManager;
@property(readonly, nonatomic) HUBComponentViewImageLoader *componentViewImageLoader; // @synthesize componentViewImageLoader=_componentViewImageLoader;
@property(nonatomic) __weak id <HUBHeaderViewComponentDelegate> componentDelegate; // @synthesize componentDelegate=_componentDelegate;
@property(retain, nonatomic) id <HUBComponentModel> componentModel; // @synthesize componentModel=_componentModel;
- (void).cxx_destruct;
- (void)componentViewManager:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)componentViewManager:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)componentViewWillAppear;
- (id)createComponentViewForComponentModel:(id)arg1;
- (void)configureComponentView;
- (void)updateComponentsWithContentOffset:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGSize preferredComponentViewSize;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 imageLoaderFactory:(id)arg2 componentRegistry:(id)arg3 componentEventHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

