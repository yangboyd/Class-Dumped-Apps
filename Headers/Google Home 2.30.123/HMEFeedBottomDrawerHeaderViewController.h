//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MDCBottomDrawerHeader-Protocol.h"

@class UILabel, UIStackView, UIView;

@interface HMEFeedBottomDrawerHeaderViewController : UIViewController <MDCBottomDrawerHeader>
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIStackView *_labelStackView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)initWithHeader:(id)arg1;
- (struct CGSize)preferredContentSize;

@end

