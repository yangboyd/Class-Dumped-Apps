//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGImageView, NSURL;

@interface IGSundialGridVideoCell : UICollectionViewCell
{
    IGImageView *_previewImageView;
    NSURL *_previewImageURL;
}

@property(retain, nonatomic) NSURL *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

