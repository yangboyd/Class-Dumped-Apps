//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSFezHitTestResult.h"

@class NSString;

@interface A9VSFezPlaneHitTestResult : A9VSFezHitTestResult
{
    NSString *_planeIdentifier;
    long long _areaType;
    // Error parsing type: {?="columns"[4]}, name: _planeTransform
    // Error parsing type: {?="columns"[4]}, name: _worldTransform
}

+ (long long)areaTypeForEngineAreaType:(const int *)arg1;
@property(readonly, nonatomic) long long areaType; // @synthesize areaType=_areaType;
// Error parsing type for property worldTransform:
// Property attributes: T{?=[4]},R,N,V_worldTransform

// Error parsing type for property planeTransform:
// Property attributes: T{?=[4]},R,N,V_planeTransform

@property(readonly, nonatomic) NSString *planeIdentifier; // @synthesize planeIdentifier=_planeIdentifier;
- (void).cxx_destruct;
-     // Error parsing type: @176@0:8{CGPoint=dd}16q32@40{?=[4]}48{?=[4]}112, name: initWithNormalizedScreenLocation:areaType:planeIdentifier:planeTransform:worldTransform:
- (id)initWithNormalizedScreenLocation:(struct CGPoint)arg1 enginePlaneHitTestResult:(const struct PlaneHitTestResult *)arg2;

@end

