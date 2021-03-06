//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGInsightsMetricGridItemViewDelegate-Protocol.h>

@class NSArray, NSString;
@protocol IGInsightsMetricGridCellDelegate;

@interface IGInsightsMetricGridCell : UICollectionViewCell <IGInsightsMetricGridItemViewDelegate>
{
    NSArray *_itemViews;
    id <IGInsightsMetricGridCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInsightsMetricGridCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)metricGridItemView:(id)arg1 didTapInfoButton:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

