//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView, _TtC23DKImagePickerController7DKAsset;

@interface _TtC23DKImagePickerController26DKAssetGroupDetailBaseCell : UICollectionViewCell
{
    // Error parsing type: , name: asset
    // Error parsing type: , name: imagePickerController
    // Error parsing type: , name: selectedIndex
    // Error parsing type: , name: thumbnailImage
    // Error parsing type: , name: longPressBlock
}

- (void).cxx_destruct;
- (void)longPressWithGestureRecognizer:(id)arg1;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) UIImageView *thumbnailImageView;
@property(nonatomic, retain) UIImage *thumbnailImage; // @synthesize thumbnailImage;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex;
@property(nonatomic) __weak _TtC23DKImagePickerController7DKAsset *asset; // @synthesize asset;

@end

