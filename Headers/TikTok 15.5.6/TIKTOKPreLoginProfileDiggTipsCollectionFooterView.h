//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel, UIView, YYLabel;

@interface TIKTOKPreLoginProfileDiggTipsCollectionFooterView : UICollectionReusableView
{
    _Bool _fullStyle;
    CDUnknownBlockType _linkTapBlock;
    UILabel *_titleLabel;
    YYLabel *_contentLabel;
    double _height;
    UIView *_backView;
}

@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) __weak YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType linkTapBlock; // @synthesize linkTapBlock=_linkTapBlock;
@property(nonatomic) _Bool fullStyle; // @synthesize fullStyle=_fullStyle;
- (void).cxx_destruct;
- (void)setBackView;
- (double)preferHeight;
- (void)update;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

