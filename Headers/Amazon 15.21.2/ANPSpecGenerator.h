//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANPChromeTypeLUT;

@interface ANPSpecGenerator : NSObject
{
    ANPChromeTypeLUT *_lut;
}

@property(retain, nonatomic) ANPChromeTypeLUT *lut; // @synthesize lut=_lut;
- (void).cxx_destruct;
- (id)widgetSpecFromIntermediateSpec:(id)arg1;
- (void)addItemSpec:(id)arg1 toMap:(id)arg2;
- (id)specsFromIntermediateSpec:(id)arg1;
- (id)initWithTypeTable:(id)arg1;

@end

