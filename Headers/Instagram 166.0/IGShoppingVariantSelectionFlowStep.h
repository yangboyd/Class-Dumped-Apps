//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGShoppingVariantSelectionFlowStepType-Protocol.h>

@class IGShoppingVariantDimensionViewModel, NSString;

@interface IGShoppingVariantSelectionFlowStep : NSObject <IGShoppingVariantSelectionFlowStepType>
{
    CDUnknownBlockType _resolveHandler;
    CDUnknownBlockType _unresolveHandler;
    IGShoppingVariantDimensionViewModel *_variantDimensionViewModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGShoppingVariantDimensionViewModel *variantDimensionViewModel; // @synthesize variantDimensionViewModel=_variantDimensionViewModel;
- (void)unresolve;
- (void)resolveWithSelectedVariantValue:(id)arg1 nextStepHandler:(CDUnknownBlockType)arg2 productItemHandler:(CDUnknownBlockType)arg3;
- (id)initWithvariantDimensionViewModel:(id)arg1 resolveHandler:(CDUnknownBlockType)arg2 unresolveHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

