//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MDCFontScaler : NSObject
{
    NSDictionary *_scalingCurve;
    NSString *_textStyle;
}

+ (id)scalerForMaterialTextStyle:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (double)scaledValueForValue:(double)arg1;
- (id)scaledFontWithFont:(id)arg1;
- (id)initForMaterialTextStyle:(id)arg1;

@end

