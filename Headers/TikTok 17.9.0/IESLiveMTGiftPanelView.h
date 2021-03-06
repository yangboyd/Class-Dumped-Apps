//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESLiveMTGiftViewFactory-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class HTSEventContext, IESLiveMTGiftCanvasView, IESLiveMTGiftPanelViewModel, IESLiveMTGiftStore, NSString, UICollectionView;
@protocol HTSLivePluginLayoutMachineProvider, HTSLiveSmallGiftAction, HTSLiveViewHierarchyProvider, IESLiveAlertFactory, IESLiveGiftListActions, IESLiveMTGiftActions, IESLiveMTMessageListRouter, IESLiveMTSendGiftActions, IESLiveToastFactory, IESLiveTracker, IESLiveUserService;

@interface IESLiveMTGiftPanelView : UIView <UIGestureRecognizerDelegate, IESLiveMTGiftViewFactory>
{
    IESLiveMTGiftPanelViewModel *_viewModel;
    HTSEventContext *_trackContext;
    CDUnknownBlockType _onHideBlock;
    UICollectionView *_collectionView;
    UIView *_backgroundView;
    IESLiveMTGiftCanvasView *_doodleCanvasView;
    id <IESLiveMTGiftActions> _giftDispatcher;
    id <IESLiveMTSendGiftActions> _sendDispatcher;
    id <HTSLiveSmallGiftAction> _smallGiftDispatcher;
    id <IESLiveTracker> _tracker;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveAlertFactory> _alertFactory;
    id <IESLiveUserService> _userService;
    id <IESLiveGiftListActions> _giftListDispatcher;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <IESLiveMTMessageListRouter> _messageListRouter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMTMessageListRouter> messageListRouter; // @synthesize messageListRouter=_messageListRouter;
@property(nonatomic) __weak id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(retain, nonatomic) id <IESLiveGiftListActions> giftListDispatcher; // @synthesize giftListDispatcher=_giftListDispatcher;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveSmallGiftAction> smallGiftDispatcher; // @synthesize smallGiftDispatcher=_smallGiftDispatcher;
@property(retain, nonatomic) id <IESLiveMTSendGiftActions> sendDispatcher; // @synthesize sendDispatcher=_sendDispatcher;
@property(retain, nonatomic) id <IESLiveMTGiftActions> giftDispatcher; // @synthesize giftDispatcher=_giftDispatcher;
@property(retain, nonatomic) IESLiveMTGiftCanvasView *doodleCanvasView; // @synthesize doodleCanvasView=_doodleCanvasView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType onHideBlock; // @synthesize onHideBlock=_onHideBlock;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) IESLiveMTGiftPanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)removeCanvasView;
- (void)p_showCanvasView;
- (id)messageListView;
- (void)p_updateSmallGiftFrame;
- (void)p_dismiss;
- (void)p_updateConstraint;
- (void)p_setBackgroundViewPath;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateFirstChargeBanner;
- (void)selectGiftItem:(id)arg1;
- (void)cleanViewModel;
- (void)hidePanel:(_Bool)arg1;
- (void)showPanel;
- (void)bindViewModel;
- (void)loadSubview;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) IESLiveMTGiftStore *store;
@property(readonly) Class superclass;

@end

