//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFImageDownloader, NSArray, UIColor, UIFont;

@interface MetaBadgeLoader : NSObject
{
    NSArray *_badges;
    UIColor *_usernameColor;
    AFImageDownloader *_imageDownloader;
}

@property(retain, nonatomic) AFImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) UIColor *usernameColor; // @synthesize usernameColor=_usernameColor;
@property(retain, nonatomic) NSArray *badges; // @synthesize badges=_badges;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *usernameFont;
- (id)attributedStringWithFont:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (id)initWithBadges:(id)arg1 usernameColor:(id)arg2 imageDownloader:(id)arg3;

@end

