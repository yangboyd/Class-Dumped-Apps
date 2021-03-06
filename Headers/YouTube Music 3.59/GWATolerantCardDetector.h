//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GWATolerantCardDetector : NSObject
{
    struct LsdParameters _lsdParams;
    struct QuadDetectorOptions _options;
}

@property(nonatomic) struct LsdParameters lsdParams; // @synthesize lsdParams=_lsdParams;
@property(nonatomic) struct QuadDetectorOptions options; // @synthesize options=_options;
- (id).cxx_construct;
- (void)setResults:(struct Result *)arg1 with:(struct Quadrilateral *)arg2;
- (void)detectCard:(Mat_c4fc5366 *)arg1 setResult:(struct Result *)arg2;
- (id)initWithRoi:(struct Rect *)arg1;

@end

