//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "NFUICellDisplayProtocol-Protocol.h"
#import "NFUIFamiliarityViewProtocol-Protocol.h"
#import "NFUIRenderTimerDelegateProtocol-Protocol.h"
#import "NFUIReusableViewProtocol-Protocol.h"

@class LolomoListViewModel, NFUIRenderTimer, NSString, UICollectionView, UIViewController;
@protocol NFUIReusableViewModelProtocol;

@interface NFUIFamiliarityViewCell : UICollectionViewCell <NFUIReusableViewProtocol, NFUIFamiliarityViewProtocol, NFUIRenderTimerDelegateProtocol, NFUICellDisplayProtocol>
{
    _Bool isLayoutPass;
    _Bool hasInlineVideo;
    _Bool _hasInitialized;
    UICollectionView *delegateCollectionView;
    UIViewController *delegateViewController;
    LolomoListViewModel *delegateListViewModel;
    id delegate;
    id <NFUIReusableViewModelProtocol> viewModel;
    NFUIRenderTimer *_renderTimer;
    id _commonInit;
    id _viewRendered;
}

@property(nonatomic) _Bool hasInitialized; // @synthesize hasInitialized=_hasInitialized;
@property(retain, nonatomic) id viewRendered; // @synthesize viewRendered=_viewRendered;
@property(retain, nonatomic) id commonInit; // @synthesize commonInit=_commonInit;
@property(nonatomic) __weak NFUIRenderTimer *renderTimer; // @synthesize renderTimer=_renderTimer;
@property(retain, nonatomic) id <NFUIReusableViewModelProtocol> viewModel; // @synthesize viewModel;
@property(nonatomic) _Bool hasInlineVideo; // @synthesize hasInlineVideo;
@property(nonatomic) _Bool isLayoutPass; // @synthesize isLayoutPass;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
@property(nonatomic) __weak LolomoListViewModel *delegateListViewModel; // @synthesize delegateListViewModel;
@property(nonatomic) __weak UIViewController *delegateViewController; // @synthesize delegateViewController;
@property(nonatomic) __weak UICollectionView *delegateCollectionView; // @synthesize delegateCollectionView;
- (void).cxx_destruct;
- (void)cellWillDisplay:(id)arg1;
- (void)infoTapped:(id)arg1;
- (void)playTapped:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldBlockDetailsAction;
@property(readonly) Class superclass;

@end

