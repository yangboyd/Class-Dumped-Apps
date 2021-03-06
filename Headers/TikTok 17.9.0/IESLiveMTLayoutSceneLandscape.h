//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveLayoutSceneProtocol-Protocol.h"

@class NSMapTable, NSString, UIView;
@protocol HTSLivePluginLayoutMachineProvider, HTSLiveViewHierarchyProvider, IESLiveLandscapeService, IESLiveMTStreamPlayerProvider;

@interface IESLiveMTLayoutSceneLandscape : NSObject <HTSLiveLayoutSceneProtocol>
{
    _Bool _isAnchorl;
    NSMapTable *_viewTable;
    UIView *_containerView;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveLandscapeService> _landscapeService;
    id <IESLiveMTStreamPlayerProvider> _playerProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMTStreamPlayerProvider> playerProvider; // @synthesize playerProvider=_playerProvider;
@property(retain, nonatomic) id <IESLiveLandscapeService> landscapeService; // @synthesize landscapeService=_landscapeService;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchorl;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak NSMapTable *viewTable; // @synthesize viewTable=_viewTable;
- (double)messageListWidth;
- (_Bool)isAutoHiding;
- (_Bool)isLock;
- (id)viewOfType:(id)arg1;
- (void)layoutOfficalAdCardView;
- (void)layoutMessageList;
- (void)layoutRedEnvelope;
- (void)layoutOffScreenBattleBanner;
- (void)layoutTaskBanner;
- (void)layoutBanner;
- (unsigned long long)currentScene;
- (void)layoutPluginIfNeed;
- (void)supportInfoForScene:(id)arg1 container:(id)arg2 isAnchor:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

