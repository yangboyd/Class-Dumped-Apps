//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCSendToScrollLabeling-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCSendToScrollLabelModel, SCShapeView, UILabel, UIView;

@interface SCSendToPlaceholderCollectionViewCell : UICollectionViewCell <SCRoundedCornerConfigurable, SCViewModelConfigurable, SCSendToScrollLabeling>
{
    UIView *_cardContentView;
    SCShapeView *_backgroundShapeView;
    struct CGRect _shapeLayerPathRect;
    UILabel *_mainLabel;
    unsigned long long _roundedCorners;
    id _viewModel;
    SCSendToScrollLabelModel *_scrollLabelModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) SCSendToScrollLabelModel *scrollLabelModel; // @synthesize scrollLabelModel=_scrollLabelModel;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void).cxx_destruct;
- (void)_setRoundedCorners:(unsigned long long)arg1 roundedRect:(struct CGRect)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

