//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIImage;

@interface VISREFCreatorRowViewModel : NSObject
{
    NSAttributedString *_text;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithText:(id)arg1 image:(id)arg2;

@end

