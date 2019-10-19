//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTFeedSectionController.h"

#import "YTDropdownButtonDelegate-Protocol.h"
#import "YTInnerTubeFeedControllerDataSourceDelegate-Protocol.h"
#import "YTRendererController-Protocol.h"
#import "YTScrollToModelProtocol-Protocol.h"
#import "YTSectionHeaderResponderProvider-Protocol.h"

@class NSString, YTCellController, YTIButtonSupportedRenderers, YTSectionVisibilityLogger;
@protocol YTInnerTubeSectionFooterResponderProvider, YTInnerTubeSectionHeaderRenderer, YTInnerTubeSectionHeaderResponderProvider, YTInnerTubeSectionRenderer, YTInnerTubeUIService, YTResponder;

@interface YTInnerTubeSectionController : YTFeedSectionController <YTInnerTubeFeedControllerDataSourceDelegate, YTSectionHeaderResponderProvider, YTDropdownButtonDelegate, YTRendererController, YTScrollToModelProtocol>
{
    id <YTInnerTubeSectionHeaderResponderProvider> _headerResponderProvider;
    id <YTInnerTubeSectionFooterResponderProvider> _footerResponderProvider;
    id <YTInnerTubeSectionRenderer> _renderer;
    id <YTInnerTubeSectionHeaderRenderer> _headerRenderer;
    YTIButtonSupportedRenderers *_headerButtonRenderer;
    YTCellController *_headerCellController;
    YTSectionVisibilityLogger *_sectionVisibilityLogger;
    _Bool _didUpdateHeaderVisibility;
    _Bool _didUpdateHeaderMenuOptionsVisibility;
    id _additionalRenderer;
    id <YTInnerTubeUIService> _service;
}

@property(readonly, nonatomic) id <YTInnerTubeUIService> service; // @synthesize service=_service;
@property(retain, nonatomic) id additionalRenderer; // @synthesize additionalRenderer=_additionalRenderer;
- (void).cxx_destruct;
- (_Bool)shouldReportSectionVisibility:(id)arg1;
- (void)didTapRightButton:(id)arg1;
- (id)linkButtonForButtonRenderer:(id)arg1;
- (void)reloadCellAtIndex:(long long)arg1;
- (_Bool)cellDidResize;
- (void)dropdownButton:(id)arg1 didSelectOption:(id)arg2;
- (void)dropdownButtonDidOpenMenu:(id)arg1;
- (_Bool)handleReloadContinuationEvent:(id)arg1;
- (_Bool)handleRemoveEntryEvent:(id)arg1;
- (_Bool)handleAddEntryEvent:(id)arg1;
- (void)supplementaryViewDidBecomeHiddenAtIndexPath:(id)arg1 forElementKind:(id)arg2;
- (void)cellDidBecomeHiddenAtIndexPath:(id)arg1;
- (void)supplementaryViewWillBecomeVisibleAtIndexPath:(id)arg1 forElementKind:(id)arg2;
- (void)cellWillBecomeVisibleAtIndexPath:(id)arg1;
- (void)updateFooter:(id)arg1;
- (struct CGSize)sizeForFooterWithSize:(struct CGSize)arg1;
- (Class)classForFooter;
- (void)updateHeader:(id)arg1;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (Class)classForHeader;
- (void)clearAndHandleEntries:(id)arg1 totalResults:(unsigned long long)arg2;
- (void)handleEntries:(id)arg1;
- (void)didClear;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)loadWithModel:(id)arg1;
- (id)headerCellController;
- (id)model;
- (id)renderer;
- (id)paramsForSectionRenderer;
@property(readonly, nonatomic) unsigned long long additionalRendererIndex;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;
- (id)initWithCellFactory:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;
- (double)linkButtonOffsetX;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end

