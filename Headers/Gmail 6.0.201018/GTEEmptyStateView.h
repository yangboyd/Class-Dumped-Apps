//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GTEViewCell-Protocol.h"

@class NSObject, NSString, UIImageView, UILabel;
@protocol GTELoggersProvider><GTETasksKitFeatureFlagsProvider, GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider;

@interface GTEEmptyStateView : UICollectionViewCell <GTEViewCell>
{
    NSObject<GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider> *_appContext;
    NSObject<GTELoggersProvider><GTETasksKitFeatureFlagsProvider> *_userContext;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    long long _mode;
    double _subtitleTopMargin;
}

- (void).cxx_destruct;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (id)roomTasksTitleFont;
- (id)personalTasksTitleFont;
- (void)layoutSubviews;
- (void)prepareWithAppContext:(id)arg1 userContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

