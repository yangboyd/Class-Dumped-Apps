//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGListBindable-Protocol.h>

@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface IGCommentGroupLoadMoreRepliesCell : UICollectionViewCell <IGListBindable>
{
    UIView *_lineView;
    UILabel *_loadLabel;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _isLoading;
}

+ (double)height;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)bindViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

