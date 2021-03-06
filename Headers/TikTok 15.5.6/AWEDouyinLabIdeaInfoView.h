//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWERatingViewDelegate-Protocol.h"

@class AWERatingView, NSString, UILabel;

@interface AWEDouyinLabIdeaInfoView : UIView <AWERatingViewDelegate>
{
    AWERatingView *_ratingView;
    UILabel *_nameLabel;
    UILabel *_usedInfoLabel;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *usedInfoLabel; // @synthesize usedInfoLabel=_usedInfoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) AWERatingView *ratingView; // @synthesize ratingView=_ratingView;
- (void).cxx_destruct;
- (void)onRateViewTapped:(double)arg1;
- (void)updateUIWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isExternalIdea:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

