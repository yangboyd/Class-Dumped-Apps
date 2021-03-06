//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CMLResizableViewDelegate-Protocol.h"
#import "CMLTextFieldDelegate-Protocol.h"
#import "QTMCollectionViewModelDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CMLTextField, CMLTextFieldAutoCompleteUpdater, CMLTextFieldComponent, NSString, QTMCollectionView, QTMCollectionViewModel, UIButton;
@protocol CMLTextFieldAutocompleteViewControllerDelegate;

@interface CMLTextFieldAutocompleteViewController : UIViewController <CMLResizableViewDelegate, CMLTextFieldDelegate, QTMCollectionViewModelDelegate, UICollectionViewDelegateFlowLayout>
{
    QTMCollectionView *suggestionsView_;
    QTMCollectionViewModel *suggestionsModel_;
    CMLTextFieldComponent *component_;
    NSString *text_;
    CMLTextField *textField_;
    CMLTextFieldAutoCompleteUpdater *updater_;
    UIButton *closeButton_;
    id <CMLTextFieldAutocompleteViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CMLTextFieldAutocompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)closeButtonAccessibilityLabel;
- (void)updateModelFromSuggestions:(id)arg1;
- (id)objectsFromSuggestions:(id)arg1;
- (void)createAutoCompleteView;
- (void)layoutSubviews;
- (void)dispatchCharChangeCallback;
- (void)cmlTextFieldDidStartEditing:(id)arg1;
- (void)cmlTextFieldDidChange:(id)arg1;
- (_Bool)cmlTextFieldShouldEnterNewLine:(id)arg1;
- (void)viewNeedsResize;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didConfigureCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)closeButtonTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)showSuggestions:(id)arg1 forQuery:(id)arg2;
- (id)initWithComponent:(id)arg1 text:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

