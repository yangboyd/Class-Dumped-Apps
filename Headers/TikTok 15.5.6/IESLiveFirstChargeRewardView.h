//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol HTSLiveTemplateProvider;

@interface IESLiveFirstChargeRewardView : UIView
{
    _Bool _accessible;
    long long _style;
    UIImageView *_bannerImage;
    UILabel *_bannerLabel;
    UIImageView *_accessView;
    id <HTSLiveTemplateProvider> _templateProvider;
}

@property(retain, nonatomic) id <HTSLiveTemplateProvider> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) UIImageView *accessView; // @synthesize accessView=_accessView;
@property(retain, nonatomic) UILabel *bannerLabel; // @synthesize bannerLabel=_bannerLabel;
@property(retain, nonatomic) UIImageView *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool accessible; // @synthesize accessible=_accessible;
- (void).cxx_destruct;
- (void)renderUI:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dataDic:(id)arg2;

@end

