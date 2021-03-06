//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGDirectAlbumCellProtocol-Protocol.h>

@class NSString, UIImageView, UILabel;

@interface IGDirectAlbumCell : UICollectionViewCell <IGDirectAlbumCellProtocol>
{
    _Bool _isRedesignEnabled;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
}

+ (struct CGSize)targetImageSize;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)configureWithViewModel:(id)arg1 redesignEnabled:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

