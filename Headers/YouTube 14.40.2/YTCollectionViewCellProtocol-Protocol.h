//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponder.h"

@class GIMMe, NSString, UIImage;

@protocol YTCollectionViewCellProtocol <YTResponder>
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) __weak id <YTResponder> parentResponder;
- (id)entry;
- (void)setEntry:(id)arg1;

@optional
+ (struct CGSize)thumbnailSizeForEntry:(id)arg1;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(GIMMe *)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(GIMMe *)arg3;
- (void)setChannelThumbnail:(UIImage *)arg1 animated:(_Bool)arg2;
- (void)setThumbnail:(UIImage *)arg1 animated:(_Bool)arg2;
- (NSString *)cellNavigationTitle;
@end

