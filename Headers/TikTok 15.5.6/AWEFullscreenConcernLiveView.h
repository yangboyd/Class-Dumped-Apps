//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWEFullscreenConcernLiveView : UIView
{
    _Bool _isRotated;
    long long _count;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

@property(nonatomic) _Bool isRotated; // @synthesize isRotated=_isRotated;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)setIsRotated:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLiveCount:(long long)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

