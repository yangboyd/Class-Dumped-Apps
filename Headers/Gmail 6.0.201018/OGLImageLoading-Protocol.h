//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GSCImageUrl, GSCImageUrlOptions, UIImage;

@protocol OGLImageLoading <NSObject>
@property(readonly, nonatomic) GSCImageUrl *imageUrl;
@property(retain, nonatomic) UIImage *image;
- (void)loadImageUrl:(GSCImageUrl *)arg1 withOptions:(GSCImageUrlOptions *)arg2;
- (void)setImageUrl:(GSCImageUrl *)arg1;
@end

