//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, _TtC6fiverr11PaddedLabel;

@interface _TtC6fiverr12TallTileCell : UICollectionViewCell
{
    // Error parsing type: , name: containerView
    // Error parsing type: , name: badgeLabel
    // Error parsing type: , name: imageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: loadingStateImageView
    // Error parsing type: , name: indexPath
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tileClicked:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak UIImageView *loadingStateImageView; // @synthesize loadingStateImageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView;
@property(nonatomic) __weak _TtC6fiverr11PaddedLabel *badgeLabel; // @synthesize badgeLabel;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView;

@end

