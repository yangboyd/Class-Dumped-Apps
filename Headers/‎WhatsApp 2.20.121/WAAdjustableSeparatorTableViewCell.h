//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface WAAdjustableSeparatorTableViewCell : UITableViewCell
{
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    _Bool _topSeparatorIgnoresSafeAreaInsetLeading;
    _Bool _topSeparatorIgnoresSafeAreaInsetTrailing;
    _Bool _bottomSeparatorIgnoresSafeAreaInsetLeading;
    _Bool _bottomSeparatorIgnoresSafeAreaInsetTrailing;
    double _topSeparatorInset;
    double _bottomSeparatorInset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bottomSeparatorIgnoresSafeAreaInsetTrailing; // @synthesize bottomSeparatorIgnoresSafeAreaInsetTrailing=_bottomSeparatorIgnoresSafeAreaInsetTrailing;
@property(nonatomic) _Bool bottomSeparatorIgnoresSafeAreaInsetLeading; // @synthesize bottomSeparatorIgnoresSafeAreaInsetLeading=_bottomSeparatorIgnoresSafeAreaInsetLeading;
@property(nonatomic) _Bool topSeparatorIgnoresSafeAreaInsetTrailing; // @synthesize topSeparatorIgnoresSafeAreaInsetTrailing=_topSeparatorIgnoresSafeAreaInsetTrailing;
@property(nonatomic) _Bool topSeparatorIgnoresSafeAreaInsetLeading; // @synthesize topSeparatorIgnoresSafeAreaInsetLeading=_topSeparatorIgnoresSafeAreaInsetLeading;
@property(nonatomic) double bottomSeparatorInset; // @synthesize bottomSeparatorInset=_bottomSeparatorInset;
@property(nonatomic) double topSeparatorInset; // @synthesize topSeparatorInset=_topSeparatorInset;
@property(nonatomic) _Bool bottomSeparatorHidden;
@property(nonatomic) _Bool topSeparatorHidden;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)createSeparators;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

