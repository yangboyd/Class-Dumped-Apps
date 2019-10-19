//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIImage;

@interface SCHeaderViewModel : NSObject <NSCopying>
{
    UIColor *_headerTextColor;
    NSString *_headerTitle;
    UIColor *_backgroundColor;
    UIImage *_imageForleftButton;
    UIImage *_imageForRightButton;
}

@property(readonly, copy, nonatomic) UIImage *imageForRightButton; // @synthesize imageForRightButton=_imageForRightButton;
@property(readonly, copy, nonatomic) UIImage *imageForleftButton; // @synthesize imageForleftButton=_imageForleftButton;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, copy, nonatomic) UIColor *headerTextColor; // @synthesize headerTextColor=_headerTextColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeaderTextColor:(id)arg1 headerTitle:(id)arg2 backgroundColor:(id)arg3 imageForleftButton:(id)arg4 imageForRightButton:(id)arg5;

@end

