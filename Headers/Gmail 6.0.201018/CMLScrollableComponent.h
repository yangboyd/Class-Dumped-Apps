//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMLLinearLayoutComponent.h"

@interface CMLScrollableComponent : CMLLinearLayoutComponent
{
    double scrollY_;
}

@property(readonly, nonatomic) double scrollY; // @synthesize scrollY=scrollY_;
- (id)createView;
- (id)styleFromComponent:(id)arg1;
- (id)createLayoutManagerFromComponent:(id)arg1;
- (id)createChildrenFromContainer:(id)arg1;
- (void)applyComponent:(id)arg1;
@property(readonly, nonatomic) struct CGPoint initialScrollOffset; // @dynamic initialScrollOffset;

@end

