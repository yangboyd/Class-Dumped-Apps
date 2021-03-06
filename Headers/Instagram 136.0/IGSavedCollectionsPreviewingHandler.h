//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGPreviewingDelegate-Protocol.h>

@class IGListAdapter, IGSavedCollectionsPreviewHandler, IGSavedMediaCollection, IGSavedMediaCollectionsThumbnailSectionController, IGUserSession, IGViewController, NSString;
@protocol IGAnalyticsModule><IGCollectionPreviewingType;

@interface IGSavedCollectionsPreviewingHandler : NSObject <IGPreviewingDelegate>
{
    IGSavedCollectionsPreviewHandler *_handler;
    IGUserSession *_userSession;
    IGViewController<IGAnalyticsModule><IGCollectionPreviewingType> *_controller;
    IGListAdapter *_listAdapter;
    NSString *_module;
    IGSavedMediaCollection *_collection;
    IGSavedMediaCollectionsThumbnailSectionController *_sectionController;
    _Bool _usesContextMenu;
}

@property(nonatomic) _Bool usesContextMenu; // @synthesize usesContextMenu=_usesContextMenu;
- (void).cxx_destruct;
- (id)_contextMenuConfigurationForPreviewObject:(id)arg1;
- (id)_previewViewControllerForPreviewObject:(id)arg1 displayWidth:(double)arg2 usesContextMenu:(_Bool)arg3;
- (void)_registerPropertiesForPreviewingWithPreviewObject:(id)arg1;
- (id)_indexPathForLocation:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (id)_sectionControllerForLocation:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (struct CGRect)_updatedSourceRectForLocation:(struct CGPoint)arg1 sourceRect:(struct CGRect)arg2 sourceView:(id)arg3 sectionController:(id)arg4;
- (id)_previewObjectForLocation:(struct CGPoint)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)performViewControllerCommitForPreviewedItem;
- (id)contextMenuConfigurationForCollectionViewCell:(id)arg1 collectionView:(id)arg2 viewController:(id)arg3 location:(struct CGPoint)arg4;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithUserSession:(id)arg1 collectionViewController:(id)arg2 listAdapter:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

