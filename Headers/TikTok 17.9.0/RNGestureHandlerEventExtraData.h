//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface RNGestureHandlerEventExtraData : NSObject
{
    NSDictionary *_data;
}

+ (id)forPointerInside:(_Bool)arg1;
+ (id)forRotation:(double)arg1 withAnchorPoint:(struct CGPoint)arg2 withVelocity:(double)arg3 withNumberOfTouches:(unsigned long long)arg4;
+ (id)forPinch:(double)arg1 withFocalPoint:(struct CGPoint)arg2 withVelocity:(double)arg3 withNumberOfTouches:(unsigned long long)arg4;
+ (id)forPan:(struct CGPoint)arg1 withAbsolutePosition:(struct CGPoint)arg2 withTranslation:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4 withNumberOfTouches:(unsigned long long)arg5;
+ (id)forPosition:(struct CGPoint)arg1 withAbsolutePosition:(struct CGPoint)arg2 withNumberOfTouches:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(readonly) NSDictionary *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1;

@end

