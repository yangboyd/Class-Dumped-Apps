//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveFilterManagerObserver-Protocol.h"
#import "IESLiveGuideComponent-Protocol.h"
#import "IESLiveMTGuideFilterRouter-Protocol.h"
#import "IESLiveScrollFilterPickerViewDelegate-Protocol.h"

@class IESLiveMTGuideOldFilterViewModel, IESLiveMTImageLabelButton, NSString, UIView;
@protocol IESLiveFilterProvider, IESLiveGuideLayoutProvider, IESLiveMTGuideContentPanelRouter, IESLiveScrollFilterPickerViewProtocol, IESLiveTracker;

@interface IESLiveMTGuideFilterFragment : NSObject <IESLiveScrollFilterPickerViewDelegate, IESLiveFilterManagerObserver, IESLiveMTGuideFilterRouter, IESLiveGuideComponent>
{
    _Bool _isLandscape;
    _Bool _firstFilterClicked;
    id <IESLiveGuideLayoutProvider> _layoutProvider;
    IESLiveMTImageLabelButton *_filterBtn;
    IESLiveMTGuideOldFilterViewModel *_viewModel;
    id <IESLiveFilterProvider> _filterProvider;
    id <IESLiveMTGuideContentPanelRouter> _panelRouter;
    id <IESLiveTracker> _tracker;
    UIView<IESLiveScrollFilterPickerViewProtocol> *_scrollFilterPicker;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView<IESLiveScrollFilterPickerViewProtocol> *scrollFilterPicker; // @synthesize scrollFilterPicker=_scrollFilterPicker;
@property(nonatomic) _Bool firstFilterClicked; // @synthesize firstFilterClicked=_firstFilterClicked;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveMTGuideContentPanelRouter> panelRouter; // @synthesize panelRouter=_panelRouter;
@property(retain, nonatomic) id <IESLiveFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property(retain, nonatomic) IESLiveMTGuideOldFilterViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) IESLiveMTImageLabelButton *filterBtn; // @synthesize filterBtn=_filterBtn;
@property(retain, nonatomic) id <IESLiveGuideLayoutProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
- (void)applyFilter:(id)arg1;
- (void)showFilterPicker;
- (void)addFilterComponent;
- (void)liveFilterListChanged:(id)arg1;
- (void)scrollFilterPickerView:(id)arg1 switchToFirstPath:(id)arg2 fromSecondPath:(id)arg3 dirction:(long long)arg4 progress:(double)arg5;
- (void)scrollFilterPickerView:(id)arg1 didSelectFilter:(id)arg2 isSwiping:(_Bool)arg3;
- (id)pr_createfilterBtn;
- (id)loadScrollFilter;
- (void)_showFilterPicker;
- (void)bindAction;
- (void)componentDidMount;
- (void)didSetAttachingDIContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

