//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPAC2View.h"

#import "OPAC2LayoutParamsParent-Protocol.h"
#import "OPAC2ViewParent-Protocol.h"

@class NSMutableArray;

@interface OPAC2ViewGroup : OPAC2View <OPAC2LayoutParamsParent, OPAC2ViewParent>
{
    NSMutableArray *_children;
}

+ (Class)layoutParamsClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
- (id)resolveAccessibilityElementsArray;
- (void)childLayoutParamHasChanged:(id)arg1 propertyName:(id)arg2;
- (void)invalidateChildView:(id)arg1;
- (id)resolveValidLayoutParamFor:(id)arg1;
- (id)defaultLayoutParams;
- (void)measureView:(id)arg1 parentMeasureSpec:(struct OPAC2MeasureSpec)arg2;
- (struct CGSize)measureChildWithMargins:(id)arg1;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)disconnectFromChildView:(id)arg1;
- (void)connectToChildView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

