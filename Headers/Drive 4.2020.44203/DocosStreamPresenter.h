//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DocosDiscussionPresenterDelegate-Protocol.h"
#import "DocosStreamEventHandler-Protocol.h"

@class DocosClientConfig, DocosImpressionsTracker, DocosManager, DocumentDocosManager, NSCache, NSMutableArray, NSString;
@protocol DocosAnchorOrderProvider, DocosStreamPresenterDelegate, DocosStreamUI, ModelDiffSummaryRenderer, SSOIdentity;

@interface DocosStreamPresenter : NSObject <DocosDiscussionPresenterDelegate, DocosStreamEventHandler>
{
    id <DocosStreamUI> _streamUI;
    id <DocosStreamPresenterDelegate> _delegate;
    id <SSOIdentity> _identity;
    DocosManager *_docosManager;
    DocumentDocosManager *_documentDocosManager;
    DocosImpressionsTracker *_impressionsTracker;
    id <ModelDiffSummaryRenderer> _modelDiffSummaryRenderer;
    NSCache *_renderedModelDiffSummaryCache;
    id <DocosAnchorOrderProvider> _anchorOrderProvider;
    NSString *_itemId;
    NSMutableArray *_discussions;
    NSMutableArray *_streamSections;
    long long _loadState;
    DocosClientConfig *_docosClientConfig;
}

+ (id)streamSectionModelWithTitleFormat:(id)arg1 titleA11yLabelSingular:(id)arg2 titleA11yLabelPlural:(id)arg3 discussions:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) DocosClientConfig *docosClientConfig; // @synthesize docosClientConfig=_docosClientConfig;
@property(nonatomic) long long loadState; // @synthesize loadState=_loadState;
@property(retain, nonatomic) NSMutableArray *streamSections; // @synthesize streamSections=_streamSections;
@property(retain, nonatomic) NSMutableArray *discussions; // @synthesize discussions=_discussions;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) id <DocosAnchorOrderProvider> anchorOrderProvider; // @synthesize anchorOrderProvider=_anchorOrderProvider;
@property(retain, nonatomic) NSCache *renderedModelDiffSummaryCache; // @synthesize renderedModelDiffSummaryCache=_renderedModelDiffSummaryCache;
@property(retain, nonatomic) id <ModelDiffSummaryRenderer> modelDiffSummaryRenderer; // @synthesize modelDiffSummaryRenderer=_modelDiffSummaryRenderer;
@property(retain, nonatomic) DocosImpressionsTracker *impressionsTracker; // @synthesize impressionsTracker=_impressionsTracker;
@property(nonatomic) __weak DocumentDocosManager *documentDocosManager; // @synthesize documentDocosManager=_documentDocosManager;
@property(nonatomic) __weak DocosManager *docosManager; // @synthesize docosManager=_docosManager;
@property(nonatomic) __weak id <SSOIdentity> identity; // @synthesize identity=_identity;
@property(nonatomic) __weak id <DocosStreamPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DocosStreamUI> streamUI; // @synthesize streamUI=_streamUI;
- (id)streamDataForDiscussion:(id)arg1;
- (void)refreshAndPresentDiscussions;
- (void)setDataSourceWithDiscussions:(id)arg1;
- (void)refreshDataSource;
- (void)subscribeToNotifications;
- (void)updateLoadState:(long long)arg1 forceUpdate:(_Bool)arg2;
- (void)updateAndPresentLoadStateForceUpdate:(_Bool)arg1;
- (void)docosDiscussionPresenterDidDeleteDiscussion:(id)arg1;
- (void)docosDiscussionPresenterDiscussionDidChange:(id)arg1;
- (void)docosDiscussionPresenterDidSave;
- (void)handleDocosDidSyncNotification:(id)arg1;
- (void)handleDocosDidChangeNotification:(id)arg1;
- (void)sync;
- (void)navigateToDiscussionAtIndexPath:(id)arg1;
- (void)navigateToDiscussionAtIndex:(long long)arg1;
- (void)updateViewIncludeDiscussions:(_Bool)arg1;
- (void)presentDiscussion:(id)arg1 animated:(_Bool)arg2 fromLink:(_Bool)arg3;
- (id)initWithDocumentDocosManager:(id)arg1 docosManager:(id)arg2 itemId:(id)arg3 impressionsTracker:(id)arg4 anchorOrderProvider:(id)arg5 SSOIdentity:(id)arg6 docosClientConfig:(id)arg7 modelDiffSummaryRenderer:(id)arg8 renderedModelDiffSummaryCache:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

