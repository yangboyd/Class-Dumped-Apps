//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface AWGradient : NSObject
{
    unsigned int _drawingOptions;
    UIColor *_startColor;
    UIColor *_endColor;
}

@property(nonatomic) unsigned int drawingOptions; // @synthesize drawingOptions=_drawingOptions;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGGradient *)newGradient;

@end

