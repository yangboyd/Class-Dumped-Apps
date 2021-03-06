//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class BaseImageView, BaseLabel;

@interface DoubleLabelCollectionViewCell : BaseCollectionViewCell
{
    BaseLabel *_mainLabel;
    BaseLabel *_detailLabel;
    BaseImageView *_accessoryIcon;
}

@property(retain, nonatomic) BaseImageView *accessoryIcon; // @synthesize accessoryIcon=_accessoryIcon;
@property(retain, nonatomic) BaseLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) BaseLabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void).cxx_destruct;
- (void)configureWithMainText:(id)arg1 detailText:(id)arg2 accessoryImage:(id)arg3;
- (void)prepareForReuse;
- (void)configureConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

