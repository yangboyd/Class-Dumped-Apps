//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSSet, SCGalleryCollectionViewSelectionHelper, SCGallerySelectionSnap, UILongPressGestureRecognizer;
@protocol SCGalleryItem;

@protocol SCGalleryCollectionViewSelectionHelperDelegate <NSObject>
- (_Bool)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 overrideTapHandlingAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)galleryCollectionViewIsFullyVisible:(SCGalleryCollectionViewSelectionHelper *)arg1;
- (void)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 handleLongPress:(UILongPressGestureRecognizer *)arg2 itemAtIndexPath:(NSIndexPath *)arg3;
- (void)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 didTapItemAtIndexPath:(NSIndexPath *)arg2;
- (void)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 didChangeSelected:(_Bool)arg2 forItem:(id <SCGalleryItem>)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 shouldChangeSelectedAtIndexPath:(NSIndexPath *)arg2;

@optional
- (void)galleryCollectionViewSelectionHelperRequestSelectMode:(SCGalleryCollectionViewSelectionHelper *)arg1;
- (void)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 didChangeSelected:(_Bool)arg2 forItems:(NSSet *)arg3 snapItems:(NSSet *)arg4;
- (void)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 didChangeSelected:(_Bool)arg2 forSnapItem:(SCGallerySelectionSnap *)arg3;
@end

