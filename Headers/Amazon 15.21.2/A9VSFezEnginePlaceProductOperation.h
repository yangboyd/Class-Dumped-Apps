//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "A9VSFezEngineRenderPipelineOperation-Protocol.h"

@class A9VSFezProduct, NSString;

@interface A9VSFezEnginePlaceProductOperation : NSObject <A9VSFezEngineRenderPipelineOperation>
{
    _Bool _animated;
    _Bool _didPlaceProduct;
    A9VSFezProduct *_product;
    // Error parsing type: {?="columns"[4]}, name: _worldTransform
}

@property(nonatomic) _Bool didPlaceProduct; // @synthesize didPlaceProduct=_didPlaceProduct;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
// Error parsing type for property worldTransform:
// Property attributes: T{?=[4]},R,N,V_worldTransform

@property(readonly, nonatomic) A9VSFezProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (void)engineWillRender:(id)arg1;
-     // Error parsing type: @92@0:8@16{?=[4]}24B88, name: initWithProduct:worldTransform:animated:
- (_Bool)shouldDiscard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

