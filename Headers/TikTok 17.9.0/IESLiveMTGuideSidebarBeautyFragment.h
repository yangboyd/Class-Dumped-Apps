//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveCameraEffectProvider-Protocol.h"
#import "IESLiveFilterManagerObserver-Protocol.h"
#import "IESLiveGuideComponent-Protocol.h"
#import "IESLiveMTGuideBeautyRouter-Protocol.h"
#import "IESLiveMTGuideCameraAction-Protocol.h"
#import "IESLiveMTGuideFilterRouter-Protocol.h"
#import "IESLiveMTGuideFilterViewModelDelegate-Protocol.h"
#import "IESLiveMTGuideSlideBeautyViewModelDelegate-Protocol.h"

@class HTSLiveCameraConfigService, IESLiveGuideModel, IESLiveMTBeautyContainerView, IESLiveMTGuideFilterViewModel, IESLiveMTGuideSlideBeautyViewModel, IESLiveMTScrollFilterPickerView, IESLiveMTToolbarItem, NSString, RACDisposable;
@protocol IESLiveBeautySyncService, IESLiveCamera, IESLiveGuideDetailRouter, IESLiveGuideLayoutProvider, IESLiveMTEffectConflictHelper, IESLiveMTGuideCakeStickerRouter, IESLiveMTGuideContentPanelRouter, IESLiveMTGuidePromptRouter, IESLiveMTGuideSceneRouter, IESLiveMTGuideTimorRouter, IESLiveMTGuideToolBarProvider, IESLivePerfSampler, IESLiveTracker, IESLiveUserService, IESLiveViewHierarchyProvider;

@interface IESLiveMTGuideSidebarBeautyFragment : NSObject <IESLiveMTGuideBeautyRouter, IESLiveFilterManagerObserver, IESLiveMTGuideSlideBeautyViewModelDelegate, IESLiveMTGuideFilterViewModelDelegate, IESLiveMTGuideFilterRouter, IESLiveMTGuideCameraAction, HTSLiveCameraEffectProvider, IESLiveGuideComponent>
{
    IESLiveGuideModel *_room;
    IESLiveMTScrollFilterPickerView *_scrollFilterPicker;
    IESLiveMTBeautyContainerView *_containerView;
    IESLiveMTGuideSlideBeautyViewModel *_beautyViewModel;
    IESLiveMTGuideFilterViewModel *_filterViewModel;
    HTSLiveCameraConfigService *_configService;
    id <IESLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveCamera> _camera;
    id <IESLiveGuideDetailRouter> _detailRouter;
    id <IESLiveTracker> _tracker;
    id <IESLiveGuideLayoutProvider> _layoutProvider;
    id <IESLiveMTEffectConflictHelper> _repelHelper;
    id <IESLiveBeautySyncService> _beautySyncService;
    id <IESLiveMTGuideContentPanelRouter> _guidePanelRouter;
    id <IESLiveMTGuideSceneRouter> _guideSceneRouter;
    id <IESLiveMTGuidePromptRouter> _guidePromptRouter;
    id <IESLiveMTGuideCakeStickerRouter> _guideCakeStickerRouter;
    id <IESLiveMTGuideTimorRouter> _timorRouter;
    id <IESLiveMTGuideToolBarProvider> _guideToolbarProvider;
    id <IESLivePerfSampler> _perfSampler;
    id <IESLiveUserService> _userService;
    long long _repelValue;
    unsigned long long _originFilterIndex;
    RACDisposable *_dispose;
    IESLiveMTToolbarItem *_beautyToolbarItem;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTToolbarItem *beautyToolbarItem; // @synthesize beautyToolbarItem=_beautyToolbarItem;
@property(retain, nonatomic) RACDisposable *dispose; // @synthesize dispose=_dispose;
@property(nonatomic) unsigned long long originFilterIndex; // @synthesize originFilterIndex=_originFilterIndex;
@property(nonatomic) long long repelValue; // @synthesize repelValue=_repelValue;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLivePerfSampler> perfSampler; // @synthesize perfSampler=_perfSampler;
@property(retain, nonatomic) id <IESLiveMTGuideToolBarProvider> guideToolbarProvider; // @synthesize guideToolbarProvider=_guideToolbarProvider;
@property(retain, nonatomic) id <IESLiveMTGuideTimorRouter> timorRouter; // @synthesize timorRouter=_timorRouter;
@property(retain, nonatomic) id <IESLiveMTGuideCakeStickerRouter> guideCakeStickerRouter; // @synthesize guideCakeStickerRouter=_guideCakeStickerRouter;
@property(retain, nonatomic) id <IESLiveMTGuidePromptRouter> guidePromptRouter; // @synthesize guidePromptRouter=_guidePromptRouter;
@property(retain, nonatomic) id <IESLiveMTGuideSceneRouter> guideSceneRouter; // @synthesize guideSceneRouter=_guideSceneRouter;
@property(retain, nonatomic) id <IESLiveMTGuideContentPanelRouter> guidePanelRouter; // @synthesize guidePanelRouter=_guidePanelRouter;
@property(retain, nonatomic) id <IESLiveBeautySyncService> beautySyncService; // @synthesize beautySyncService=_beautySyncService;
@property(retain, nonatomic) id <IESLiveMTEffectConflictHelper> repelHelper; // @synthesize repelHelper=_repelHelper;
@property(retain, nonatomic) id <IESLiveGuideLayoutProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveGuideDetailRouter> detailRouter; // @synthesize detailRouter=_detailRouter;
@property(retain, nonatomic) id <IESLiveCamera> camera; // @synthesize camera=_camera;
@property(retain, nonatomic) id <IESLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) HTSLiveCameraConfigService *configService; // @synthesize configService=_configService;
@property(retain, nonatomic) IESLiveMTGuideFilterViewModel *filterViewModel; // @synthesize filterViewModel=_filterViewModel;
@property(retain, nonatomic) IESLiveMTGuideSlideBeautyViewModel *beautyViewModel; // @synthesize beautyViewModel=_beautyViewModel;
@property(retain, nonatomic) IESLiveMTBeautyContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) IESLiveMTScrollFilterPickerView *scrollFilterPicker; // @synthesize scrollFilterPicker=_scrollFilterPicker;
@property(retain, nonatomic) IESLiveGuideModel *room; // @synthesize room=_room;
- (id)stickerIdentifier;
- (id)filterName;
- (void)setCheekValue:(long long)arg1;
- (long long)cheekValue;
- (void)setBigEyeValue:(long long)arg1;
- (long long)bigEyeValue;
- (void)setSmoothValue:(long long)arg1;
- (long long)smoothValue;
- (void)setWhiteValue:(long long)arg1;
- (long long)whiteValue;
- (void)syncToRemote;
- (_Bool)hasMakeupInfo;
- (id)currentBeautyLogInfo;
- (void)showBeautyPickerView;
- (void)reportFilterUpdatedWhenBeautyContainerViewClosed;
- (void)reportFilterSelected:(id)arg1 isDraw:(_Bool)arg2;
- (void)liveFilterDownloaded:(id)arg1;
- (void)showFilterPicker;
- (void)applyFilter:(id)arg1;
- (id)loadScrollFilter;
- (void)liveFilterListChanged:(id)arg1;
- (void)removeMakeupTypeATypeB;
- (void)removeMakeupTypeA;
- (void)resumeBeautyEffect;
- (void)removeBeautyEffectWithRepelValue:(long long)arg1;
- (void)resetFilter;
- (void)cameraDidSet;
- (void)filterViewModel:(id)arg1 didSetFilter:(id)arg2 isSwiping:(_Bool)arg3;
- (void)filterViewModelDidRemoveFilters:(id)arg1;
- (void)slidePickerView:(id)arg1 didClickBackButton:(id)arg2;
- (void)slidePickerView:(id)arg1 didExpandItem:(id)arg2 toItems:(id)arg3 selectedIndex:(long long)arg4;
- (void)slidePickerView:(id)arg1 didApplyMakeup:(id)arg2;
- (void)slidePickerViewDidClearRedDot:(id)arg1;
- (void)cameraDidRemoveCurrentMakeup;
- (void)beautifyButtonDidClick:(id)arg1;
- (void)p_removeBeautyToolbarItem;
- (void)p_addBeautyToolbarItem;
- (void)componentDidMount;
- (id)initWithRoom:(id)arg1;
- (void)didSetAttachingDIContext;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool openGesture;
@property(readonly) Class superclass;

@end

