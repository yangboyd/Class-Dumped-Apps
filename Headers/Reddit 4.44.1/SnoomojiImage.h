//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FLAnimatedImage, NSString, NSURL, UIImage;

@interface SnoomojiImage : NSObject
{
    NSString *_name;
    UIImage *_image;
    FLAnimatedImage *_animatedImage;
    NSURL *_gifURL;
}

@property(retain, nonatomic) NSURL *gifURL; // @synthesize gifURL=_gifURL;
@property(retain, nonatomic) FLAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAnimated;

@end

