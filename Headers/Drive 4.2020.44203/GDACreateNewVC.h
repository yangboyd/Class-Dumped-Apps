//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/QTMCollectionViewController.h>

@class UIScrollView;
@protocol GDACreateNewVCDelegate;

@interface GDACreateNewVC : QTMCollectionViewController
{
    _Bool _canCreateDocs;
    _Bool _canCreateSheets;
    _Bool _canCreateSlides;
    id <GDACreateNewVCDelegate> _delegate;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canCreateSlides; // @synthesize canCreateSlides=_canCreateSlides;
@property(readonly, nonatomic) _Bool canCreateSheets; // @synthesize canCreateSheets=_canCreateSheets;
@property(readonly, nonatomic) _Bool canCreateDocs; // @synthesize canCreateDocs=_canCreateDocs;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <GDACreateNewVCDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)numberOfColumnsForOrientation:(long long)arg1;
- (id)collectionView:(id)arg1 inkTouchController:(id)arg2 inkViewAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateContentSize;
- (void)viewDidLoad;
- (void)createModel;
- (id)initWithCanCreateDocs:(_Bool)arg1 canCreateSheets:(_Bool)arg2 canCreateSlides:(_Bool)arg3;
- (id)init;

@end

