//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ECDuringLiveCommodityListRouter-Protocol.h"
#import "TikTokLiveComponent-Protocol.h"

@class ECDuringLiveCommodityListProvider, ECDuringLiveCommodityListViewModel, NSString, TikTokLiveComponentContext;
@protocol ECLiveCommodityListViewProtocol, TikTokLiveToolbar, TikTokLiveViewHierarchyProvider;

@interface ECDuringLiveCommodityListFragment : NSObject <TikTokLiveComponent, ECDuringLiveCommodityListRouter>
{
    TikTokLiveComponentContext *_componentContext;
    id <TikTokLiveViewHierarchyProvider> _viewProvider;
    id <TikTokLiveToolbar> _toolbarProvider;
    id <ECLiveCommodityListViewProtocol> _commodityList;
    ECDuringLiveCommodityListProvider *_duringLiveContentProvider;
    ECDuringLiveCommodityListViewModel *_viewModel;
}

+ (id)componentWithRoom:(id)arg1 componentContext:(id)arg2 trackContext:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) ECDuringLiveCommodityListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) ECDuringLiveCommodityListProvider *duringLiveContentProvider; // @synthesize duringLiveContentProvider=_duringLiveContentProvider;
@property(retain, nonatomic) id <ECLiveCommodityListViewProtocol> commodityList; // @synthesize commodityList=_commodityList;
@property(nonatomic) __weak id <TikTokLiveToolbar> toolbarProvider; // @synthesize toolbarProvider=_toolbarProvider;
@property(nonatomic) __weak id <TikTokLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) TikTokLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
- (void)p_showCommodityList:(id)arg1;
- (void)fetchCommodityList;
- (void)showDuringLiveCommodityList;
- (void)componentDidAppear;
- (id)initWithViewModel:(id)arg1;
- (void)didSetAttachingDIContext;
- (void)componentDidUnmount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

