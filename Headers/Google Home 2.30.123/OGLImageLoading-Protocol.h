//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
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

