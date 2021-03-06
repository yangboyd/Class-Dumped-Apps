//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSEntityTappableUIItem-Protocol.h"

@class GMSLabelsEntityProvider, GMSx_GMPCLabelRenderOp, NSString;
@protocol GMSClientVectorOpTapDelegate;

@interface GMSLabelOpTappableEntity : NSObject <GMSEntityTappableUIItem>
{
    reffed_ptr_77f24e90 _labelableFeature;
    GMSLabelsEntityProvider *_labelsEntityProvider;
    id <GMSClientVectorOpTapDelegate> _tapDelegate;
    GMSx_GMPCLabelRenderOp *_renderOp;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) GMSx_GMPCLabelRenderOp *renderOp; // @synthesize renderOp=_renderOp;
- (_Bool)matchesTappableUIItem:(id)arg1;
- (void)wasTapped;
- (_Bool)isHitByTap:(const struct WrappedFrustum2D *)arg1 rectangle:(const struct Rectangle2f *)arg2 coords:(struct CGPoint)arg3 camera:(const reffed_ptr_329922e5 *)arg4;
- (_Bool)shouldMoveToEndOnTap;
- (struct GMSEntityTapOrdering)tapOrdering;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRenderOp:(id)arg1 labelableFeature:(reffed_ptr_77f24e90)arg2 labelsEntityProvider:(id)arg3 tapDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

