//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface SDImageFrame : NSObject
{
    UIImage *_image;
    double _duration;
}

+ (id)frameWithImage:(id)arg1 duration:(double)arg2;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

