//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSFeatureEntityUIItem.h"

@interface GMSAreaEntityUIItem : GMSFeatureEntityUIItem
{
    struct GMSContourList _contours;
    struct vector<gmscore::model::Rectangle2D, std::__1::allocator<gmscore::model::Rectangle2D>> _bounds;
}

+ (SEL)wasTappedSelector;
+ (struct GMSEntityTapPriority)tapPriorityForFeature:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isHitByTap:(const struct WrappedFrustum2D *)arg1 rectangle:(const struct Rectangle2f *)arg2 coords:(struct CGPoint)arg3 camera:(const reffed_ptr_329922e5 *)arg4;
- (void)calculateContours;
- (id)area;

@end

