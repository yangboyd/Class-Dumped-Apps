//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import <Module_Framework/YTClientBindingObserver-Protocol.h>
#import <Module_Framework/YTFeedActionBarDelegate-Protocol.h>
#import <Module_Framework/YTVideoCellControllerDismissalDelegate-Protocol.h>
#import <Module_Framework/YTVideoCellControllerResponderProvider-Protocol.h>

@class NSMutableDictionary, NSString, YTVideoDismissalController;
@protocol YTClientBindingData;

@interface YTVideoCellController : YTInnerTubeCellController <YTClientBindingObserver, YTFeedActionBarDelegate, YTVideoCellControllerDismissalDelegate, YTVideoCellControllerResponderProvider>
{
    struct CGSize _lastCachedSize;
    struct CGSize _expandedSize;
    struct CGSize _regularSize;
    YTVideoDismissalController *_dismissalController;
    NSMutableDictionary *_dismissalMap;
    _Bool _feedActionBarViewHidden;
    id <YTClientBindingData> _clientBindingModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <YTClientBindingData> clientBindingModel; // @synthesize clientBindingModel=_clientBindingModel;
@property(nonatomic) _Bool feedActionBarViewHidden; // @synthesize feedActionBarViewHidden=_feedActionBarViewHidden;
- (id)dismissalMap;
- (void)restoreDismissalController;
- (void)setupClientBinding;
- (void)setupEventHandlers;
- (id)entryFromFeedEntryRenderer:(id)arg1;
- (id)menuRenderer;
- (void)didClearDismissalState;
- (void)didTapFeedActionBarButton:(id)arg1 buttonRenderer:(id)arg2;
- (void)reloadClientData;
- (void)handleLongPressBegan:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)didSelectItem;
- (void)setDismissalReasons:(id)arg1;
- (void)dismissVideoWithRenderer:(id)arg1;
- (id)dismissalController;
- (id)itemsForBeginningDragSession:(id)arg1;
- (_Bool)shouldSelectItem;
- (_Bool)shouldHighlightItem;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (void)setCell:(id)arg1;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

