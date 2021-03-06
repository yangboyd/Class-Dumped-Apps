//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSSValue.h"

@class NSString;

@interface CSSPrimitiveValue : CSSValue
{
    float pixelsPerInch;
    float internalValue;
    int primitiveType;
    NSString *internalString;
}

@property(nonatomic) int primitiveType; // @synthesize primitiveType;
@property(retain, nonatomic) NSString *internalString; // @synthesize internalString;
@property(nonatomic) float internalValue; // @synthesize internalValue;
@property(nonatomic) float pixelsPerInch; // @synthesize pixelsPerInch;
- (void).cxx_destruct;
- (void)setCssText:(id)arg1;
- (void)getRGBColorValue;
- (void)getRectValue;
- (void)getCounterValue;
- (id)getStringValue;
- (void)setStringValue:(int)arg1 stringValue:(id)arg2;
- (float)getFloatValue:(int)arg1;
- (void)setFloatValue:(int)arg1 floatValue:(float)arg2;
- (id)init;

@end

