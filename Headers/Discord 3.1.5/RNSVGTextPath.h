//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNSVGText.h"

@class NSMutableArray, NSString, RNSVGLength;

@interface RNSVGTextPath : RNSVGText
{
    struct CGPath *_path;
    NSMutableArray *lengths;
    NSMutableArray *lines;
    unsigned long long lineCount;
    double length;
    _Bool isClosed;
    NSString *_href;
    NSString *_side;
    NSString *_method;
    NSString *_midLine;
    NSString *_spacing;
    RNSVGLength *_startOffset;
}

@property(retain, nonatomic) RNSVGLength *startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) NSString *spacing; // @synthesize spacing=_spacing;
@property(retain, nonatomic) NSString *midLine; // @synthesize midLine=_midLine;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *side; // @synthesize side=_side;
@property(retain, nonatomic) NSString *href; // @synthesize href=_href;
- (void).cxx_destruct;
- (void)popGlyphContext;
- (void)pushGlyphContext;
- (struct CGPath *)getPath:(struct CGContext *)arg1;
- (void)renderLayerTo:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)getPathLength:(double *)arg1 lineCount:(unsigned long long *)arg2 lengths:(id *)arg3 lines:(id *)arg4 isClosed:(_Bool *)arg5;

@end

