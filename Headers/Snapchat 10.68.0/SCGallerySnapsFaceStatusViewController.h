//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGallerySnapsViewController.h"

#import "SCProgressOverlayViewDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSString, SCGallerySnapsFaceAnalysisOperation, SCProgressOverlayView;

@interface SCGallerySnapsFaceStatusViewController : SCGallerySnapsViewController <SCProgressOverlayViewDelegate>
{
    NSMutableOrderedSet *_scannedGallerySnapMediaIds;
    NSMutableDictionary *_gallerySnapMediaIdToBoundingBoxes;
    SCProgressOverlayView *_progressOverlayView;
    SCGallerySnapsFaceAnalysisOperation *_faceAnalysisOperation;
}

@property(nonatomic) __weak SCGallerySnapsFaceAnalysisOperation *faceAnalysisOperation; // @synthesize faceAnalysisOperation=_faceAnalysisOperation;
@property(retain, nonatomic) SCProgressOverlayView *progressOverlayView; // @synthesize progressOverlayView=_progressOverlayView;
@property(retain, nonatomic) NSMutableDictionary *gallerySnapMediaIdToBoundingBoxes; // @synthesize gallerySnapMediaIdToBoundingBoxes=_gallerySnapMediaIdToBoundingBoxes;
@property(retain, nonatomic) NSMutableOrderedSet *scannedGallerySnapMediaIds; // @synthesize scannedGallerySnapMediaIds=_scannedGallerySnapMediaIds;
- (void).cxx_destruct;
- (void)progressOverlayViewDidCancel:(id)arg1;
- (void)cleanupFaceAnalysisOperation;
- (void)didTapCluster:(id)arg1;
- (void)processAllMemories:(_Bool)arg1;
- (void)didTapProcess:(id)arg1;
- (void)clearFaceDataRequestingConfirmation:(_Bool)arg1;
- (void)didTapClear:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)cellReuseIdentifierForSection:(long long)arg1;
- (void)registerCellsForCollectionView:(id)arg1;
- (void)setGallerySnaps:(id)arg1 reloadCollectionView:(_Bool)arg2;
- (void)didTapClose:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

