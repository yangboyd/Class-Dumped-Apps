//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCSearchSeeMoreViewDelegate-Protocol.h"
#import "SCSectionKitCollectionViewViewMoreActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCSearchSeeMoreView;
@protocol SCSectionKitCollectionViewViewMoreActionableDelegate;

@interface SCSectionKitViewMoreCollectionViewCell : UICollectionViewCell <SCSearchSeeMoreViewDelegate, SCViewModelConfigurable, SCRoundedCornerConfigurable, SCSectionKitCollectionViewViewMoreActionable>
{
    SCSearchSeeMoreView *_seeMoreView;
    id _viewModel;
    unsigned long long _roundedCorners;
    id <SCSectionKitCollectionViewViewMoreActionableDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) __weak id <SCSectionKitCollectionViewViewMoreActionableDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)searchSeeMoreViewDidTapSeeMore:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setRoundedCorner:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

