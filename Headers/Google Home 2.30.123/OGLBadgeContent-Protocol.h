//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;
@protocol OGLTheming;

@protocol OGLBadgeContent <NSObject>
@property(readonly, copy, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, nonatomic) long long type;

@optional
- (UIImage *)imageForBadgeSize:(long long)arg1;
- (void)updateOglTheme:(id <OGLTheming>)arg1;
@end

