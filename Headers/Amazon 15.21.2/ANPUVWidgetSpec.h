//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ANPUVWidgetSpec : NSObject
{
    NSString *_identifier;
    double _u;
    double _v;
    double _uSize;
    double _vSize;
    double _uPercentSize;
    double _vPercentSize;
    unsigned long long _uAlignment;
    unsigned long long _vAlignment;
    unsigned long long _layoutDirection;
    CDStruct_08d4a144 _paddings;
    CDStruct_08d4a144 _margins;
}

@property(readonly, nonatomic) unsigned long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) unsigned long long vAlignment; // @synthesize vAlignment=_vAlignment;
@property(nonatomic) unsigned long long uAlignment; // @synthesize uAlignment=_uAlignment;
@property(nonatomic) CDStruct_08d4a144 margins; // @synthesize margins=_margins;
@property(nonatomic) CDStruct_08d4a144 paddings; // @synthesize paddings=_paddings;
@property(nonatomic) double vPercentSize; // @synthesize vPercentSize=_vPercentSize;
@property(nonatomic) double uPercentSize; // @synthesize uPercentSize=_uPercentSize;
@property(nonatomic) double vSize; // @synthesize vSize=_vSize;
@property(nonatomic) double uSize; // @synthesize uSize=_uSize;
@property(nonatomic) double v; // @synthesize v=_v;
@property(nonatomic) double u; // @synthesize u=_u;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)vAlignmentFromSpec:(id)arg1;
- (unsigned long long)uAlignmentFromSpec:(id)arg1;
- (CDStruct_08d4a144)uvVectorFromCGVector:(struct UIEdgeInsets)arg1;
- (id)initWithWidgetSpec:(id)arg1 layoutDirection:(unsigned long long)arg2;

@end

