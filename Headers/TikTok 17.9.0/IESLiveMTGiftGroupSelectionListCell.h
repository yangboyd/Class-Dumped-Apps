//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IESLiveMTCollectionViewCellProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IESLiveGradientView, NSString, UIScrollView, UIView;
@protocol IESLiveMTCollectionViewItemProtocol;

@interface IESLiveMTGiftGroupSelectionListCell : UICollectionViewCell <IESLiveMTCollectionViewCellProtocol, UIScrollViewDelegate>
{
    id <IESLiveMTCollectionViewItemProtocol> _item;
    UIView *_lineView;
    UIScrollView *_scrollView;
    IESLiveGradientView *_groupSelectionLeadGradientView;
    IESLiveGradientView *_groupSelectionTrailGradientView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveGradientView *groupSelectionTrailGradientView; // @synthesize groupSelectionTrailGradientView=_groupSelectionTrailGradientView;
@property(retain, nonatomic) IESLiveGradientView *groupSelectionLeadGradientView; // @synthesize groupSelectionLeadGradientView=_groupSelectionLeadGradientView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) id <IESLiveMTCollectionViewItemProtocol> item; // @synthesize item=_item;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

