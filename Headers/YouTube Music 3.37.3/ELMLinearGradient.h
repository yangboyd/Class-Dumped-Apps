//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ELMLinearGradient : NSObject
{
    // Error parsing type: r^{LinearGradient=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii^v}{RepeatedField<float>=ii^v}(GradientLineUnion=f^{Line})[1I]}, name: _linearGradient
    struct CGGradient *_gradient;
}

- (struct CGPoint)endPointFromSlope:(double)arg1 throughRect:(struct CGRect)arg2;
-     // Error parsing type: {Line=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Point}i}56@0:8Q16{CGRect={CGPoint=dd}{CGSize=dd}}24, name: quadrantFourLineFromAngle:inRect:
-     // Error parsing type: {Line=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Point}i}56@0:8Q16{CGRect={CGPoint=dd}{CGSize=dd}}24, name: quadrantThreeLineFromAngle:inRect:
-     // Error parsing type: {Line=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Point}i}56@0:8d16{CGRect={CGPoint=dd}{CGSize=dd}}24, name: quadrantTwoLineFromAngle:inRect:
-     // Error parsing type: {Line=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Point}i}56@0:8d16{CGRect={CGPoint=dd}{CGSize=dd}}24, name: quadrantOneLineFromAngle:inRect:
-     // Error parsing type: {Line=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Point}i}56@0:8d16{CGRect={CGPoint=dd}{CGSize=dd}}24, name: gradientLineWithAngle:inRect:
-     // Error parsing type: {Line=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Point}i}96@0:8{Line=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Point}i}16{CGRect={CGPoint=dd}{CGSize=dd}}64, name: gradientLineWithLine:inRect:
- (struct __CFArray *)colors;
- (_Bool)fillPositions:(double *)arg1 withArrayLength:(int)arg2;
- (struct CGGradient *)gradient;
- (void)drawInContext:(struct CGContext *)arg1;
-     // Error parsing type: @24@0:8r^{LinearGradient=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii^v}{RepeatedField<float>=ii^v}(GradientLineUnion=f^{Line})[1I]}16, name: initWithLinearGradient:

@end

