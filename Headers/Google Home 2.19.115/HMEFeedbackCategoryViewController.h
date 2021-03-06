//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarCollectionViewController.h"

@class NSArray, NSString;
@protocol HMEFeedbackCategoryViewControllerDelegate;

@interface HMEFeedbackCategoryViewController : HMEAppBarCollectionViewController
{
    id <HMEFeedbackCategoryViewControllerDelegate> _delegate;
    NSString *_context;
    NSArray *_options;
}

@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <HMEFeedbackCategoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)categoryAtIndexPath:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (double)collectionView:(id)arg1 cellHeightAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

