//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNSVGRenderable.h"

@class RNSVGLength;

@interface RNSVGLine : RNSVGRenderable
{
    RNSVGLength *_x1;
    RNSVGLength *_y1;
    RNSVGLength *_x2;
    RNSVGLength *_y2;
}

@property(retain, nonatomic) RNSVGLength *y2; // @synthesize y2=_y2;
@property(retain, nonatomic) RNSVGLength *x2; // @synthesize x2=_x2;
@property(retain, nonatomic) RNSVGLength *y1; // @synthesize y1=_y1;
@property(retain, nonatomic) RNSVGLength *x1; // @synthesize x1=_x1;
- (void).cxx_destruct;
- (struct CGPath *)getPath:(struct CGContext *)arg1;

@end

